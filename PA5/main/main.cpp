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
ofstream out;
extern symbolTable table; 

int main(int argc, char** argv) {
	// #todo - add compiler flags 

	// read input file
	yyin = fopen(argv[1], "r");

	// check if 
	if (LFLAG){
		out.open("../outputFiles/tokens.txt", std::ofstream::out);
	}

	cout << "Main program - compiler driver." << endl;

	yyparse();  

	cout << "Front end complete - writing symbol table.." << endl;
	table.writeToScreen(); 

	if (LFLAG) {
		
	}
	return 0; 
} 
