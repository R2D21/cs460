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
using namespace std;

// externs 
extern int yyparse();
extern FILE* yyin; 
bool LFLAG = false; 
bool YFLAG = false;
ofstream outL;
ofstream outY;
extern symbolTable table; 
extern std::string currentSourceCodeLine; 
extern int yylineno;
extern bool endline;

int main(int argc, char** argv) {
	// #todo - add compiler flags 

	bool fileSpecificed = false;
	string filename;

	// read input file
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
		/*
		if( (string) argv[i] == "-l" ){
			LFLAG = true;
		}
		if( (string) argv[i] == "-y" ){
			YFLAG = true;
		}*/
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

	cout << "Main program - compiler driver." << endl;

	yyparse();  

	cout << "Parse complete " << endl;

	if (LFLAG) {
		if(!endline){
			outL << endl << "Line #" << yylineno << ": " << currentSourceCodeLine << endl;
			outL << "=================================================================" << std::endl;
					
		}

		outL.close();
	}
	if( YFLAG ){
		outY.close();
	}
	return 0; 
} 
