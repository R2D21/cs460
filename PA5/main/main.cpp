/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 28, 2015
Last Modified: September 28, 2015
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

int main(int argc, char** argv) {
	// #todo - add compiler flags 

	// read input file
	yyin = fopen(argv[1], "r");

	for(int i=1; i < argc; i++){
		if( (string) argv[i] == "-l" ){
			LFLAG = true;
		}
		if( (string) argv[i] == "-y" ){
			YFLAG = true;
		}
	}

	// check if 
	if (LFLAG){
		outL.open("../outputFiles/tokens.txt", std::ofstream::out);
	}
	if (YFLAG){
		outY.open("../outputFiles/reductions.txt", std::ofstream::out);
	}

	cout << "Main program - compiler driver." << endl;

	yyparse();  

	cout << "Front end complete - writing symbol table.." << endl;
	table.writeToScreen(); 

	if (LFLAG) {
		outL.close();
	}
	if( YFLAG ){
		outY.close();
	}
	return 0; 
} 
