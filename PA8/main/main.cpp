/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 28, 2015
Last Modified: October 16, 2015
Class: CS 460 (Compiler Construction)

This is the main file for the front end of our ANSI C compiler. 
*/

// includes
#include <iostream>
#include <fstream>
#include "../classes/symbolTable.h"
#include <stdlib.h>
using namespace std;

#include "optionparser.h"

// Command line parser
enum  optionIndex { UNKNOWN, 
					HELP, 
					ASSEM, 
					AC,
					COMP,
					OUT,
					DEBUG };
const option::Descriptor usage[] =
{
	{HELP, 0,"", "help",option::Arg::None, "\t--help  \tPrint usage and exit." },
	{ASSEM, 0,"S","assembly",option::Arg::None, "\t--assembly, -S  \tOutput assembly." },
	{AC, 0, "q", "3AC", option::Arg::None,"\t--3AC, -q  \tOutput 3 address code."},
	{COMP, 0, "c", "compile", option::Arg::Required,"\t--compile <file>, -c <file> \tCompile <file>."},
	{OUT, 0, "o", "out", option::Arg::Required,"\t--output <file>, -o <file> \tOutput to <file>."},
	{DEBUG, 0, "d", "", option::Arg::Required,"\t-d[l|y|s] \tOutput lex/yacc/symbol table."},
	{0,0,0,0,0,0}
};




// externs 
extern int yyparse();
extern FILE* yyin; 
bool LFLAG = false; 
bool YFLAG = false;
ofstream outL;
ofstream outY;
ofstream outG;
ofstream outA;

extern symbolTable table; 
extern std::string currentSourceCodeLine; 
extern int yylineno;
extern bool endline;
vector<string> sourceCode;

int main(int argc, char* argv[]) {

	bool fileSpecified = false;
	char inputFile[256];
	string filename;
	ofstream outFile;
	int j;
	char input;

	// Command line
	argc-=(argc>0); argv+=(argc>0);
	option::Stats  stats(usage, argc, argv);
	std::vector<option::Option> options(stats.options_max);
	std::vector<option::Option> buffer(stats.buffer_max);
  	option::Parser parse(usage, argc, argv, &options[0], &buffer[0]);

	if (parse.error())
		return 1;

	if (options[HELP] || argc == 0) {
	    option::printUsage(std::cout, usage);
	    return 0;
	}

	for (int i = 0; i < parse.optionsCount(); ++i)
	{
	    option::Option& opt = buffer[i];
	    switch (opt.index())
	    {
			case AC:
				cout << "3 address code TBD." << endl;
				break;

			case ASSEM:
				cout << "Assembly code TBD." << endl;
				break;
			case COMP:
				//inputFile = opt.arg;
				strcpy(inputFile, opt.arg);
				fileSpecified = true;
				break;
			case OUT:
				filename = opt.arg;
				filename += "../outputFiles/";
				outFile.open(filename.c_str());
				outFile << "Final output will be here." << endl;
				outFile.close();
				break;
			case DEBUG:
				j = 0;
				input = opt.arg[j];
				while(input != '\0'){
					switch(input){
						case 'l':
							LFLAG = true;
							outL.open("../outputFiles/tokens.txt", std::ofstream::out);
							break;
						case 'y':
							YFLAG = true;
							outY.open("../outputFiles/reductions.txt", std::ofstream::out);
							outG.open("graph.dot");
							outG << "digraph{\n";
							break;
						case 's':
							//TODO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
							break;
						default:
							break;
					}
					j++;
					input = opt.arg[j];
				}
				break;
	      	default:
	       		break;
	    }
	}
	// read input file

	if( !fileSpecified ){
		cout << "Error: Please enter file name (See --help)." << endl;
		return 0;
	}

	// Read in source code
	ifstream fin (inputFile);
	char str[256];
	while( fin.good() ){	
		fin.getline(str, 256);
		sourceCode.push_back((string)str);
		
	}
	fin.close();

	// Set lexer input
	yyin = fopen(inputFile, "r");

	// Prepare AST graph
	outA.open("ast.dot");
	outA << "digraph{\n" << "graph[ordering = out]\n";

	cout << "Main program - compiler driver." << endl;
	if(LFLAG){
		outL << std::endl << "=================================================================" << std::endl;
		outL << "Line #" << yylineno << ": " << std::endl;
		outL << sourceCode[0] << std::endl;
	}
	if(YFLAG){
		outY << std::endl <<"=================================================================" << std::endl;
		outY << "Line #" << yylineno << ": " << std::endl;
		outY << sourceCode[0] << std::endl;
	}

	// Parser
	yyparse();  

	cout << "Parse complete" << endl;



	if (LFLAG) {
		outL.close();
	}
	if( YFLAG ){
		// Finish graph
		outG << "}" << endl;
		outG.close();
		system("dot -Tpng graph.dot -o graph.png");
		//system("gnome-open graph.png");
		outY.close();
	}

	// Finish graph
	outA << "}" << endl;
	outA.close();
	system("dot -Tpng ast.dot -o ast.png");
	system("gnome-open ast.png");

	return 0; 
} 
