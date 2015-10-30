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

// externs 
extern int yyparse();
extern FILE* yyin; 
bool LFLAG = false; 
bool YFLAG = false;
ofstream outL;
ofstream outY;
ofstream outG;

extern symbolTable table; 
extern std::string currentSourceCodeLine; 
extern int yylineno;
extern bool endline;
vector<string> sourceCode;

int main(int argc, char** argv) {
	// #todo - add compiler flags 

	bool fileSpecificed = false;
	string filename;



	// read input file

	ifstream fin (argv[1]);
	char str[256];
	while( fin.good() ){	
		fin.getline(str, 256);
		sourceCode.push_back((string)str);
		
	}
	fin.close();

	yyin = fopen(argv[1], "r");
	for(int i=1; i < argc; i++){
		
		if( (string) argv[i] == "-o" ){
			if(i+1 < argc){
				filename = argv[i+1];
			}
			else{
				cout << "Please specify output file:";
				cin >> filename;
			}
			fileSpecificed = true;
		}
		if(((string)argv[i]).find("-d") != string::npos)
		{
			if( ((string)argv[i]).find("l") != string::npos){
				LFLAG = true;
			}
			if( ((string)argv[i]).find("y") != string::npos){
				YFLAG = true;
			}
		}
	}

	outG.open("graph.dot");
	outG << "digraph{\n";


	// check if 
	if (LFLAG){
		if(fileSpecificed){
			filename = "../outputFiles/" + filename + "_token.txt";
		}
		else{
			filename = "../outputFiles/tokens.txt";
		}
		outL.open(filename.c_str(), std::ofstream::out);
	}
	if (YFLAG){
		if(fileSpecificed){
			filename = "../outputFiles/" + filename + "_reductions.txt";
		}
		else{
			filename = "../outputFiles/reductions.txt";
		}
		outY.open(filename.c_str(), std::ofstream::out);
	}

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

	cout << "Main program - compiler driver." << endl;

	yyparse();  

	cout << "Parse complete" << endl;
	outG << "}" << endl;
	outG.close();
	system("dot -Tpng -ograph.png graph.dot");
	system("gnome-open graph.png");
	if (LFLAG) {
		outL.close();
	}
	if( YFLAG ){
		outY.close();
	}

	return 0; 
} 
