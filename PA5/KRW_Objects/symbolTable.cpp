/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 27, 2015
Last Modified: September 27, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the symbol table of our C compiler.

We are using the C++ STL for our symbol table (a stack of BSTs). 
More specifically, we are using a deque (used as a stack) of maps (the maps
are responsible for mapping a string (the identifier name) to 
"symbolTableEntry" objects). A "symbolTableEntry" object is an object that we
created and contains all associated information of identifiers (type, scope, 
etc.).    
*/

#include "symbolTable.h"

symbolTable::symbolTable() {
	cout << "New symbol table!" << endl; 
}