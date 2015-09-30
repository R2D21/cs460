/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 28, 2015
Last Modified: September 28, 2015
Class: CS 460 (Compiler Construction)

This is the main file for the front end of our ANSI C compiler. 
*/

#include <iostream>
using namespace std;

extern int yyparse();

int main(int argc, char** argv) {
	// #todo - add compiler flags and call yyparse() 
	cout << "Main program" << endl;

	yyparse();  
	return 0; 
} 
