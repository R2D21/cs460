/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTableEntry.h
Created: September 27, 2015
Last Modified: September 27, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the objects that will reside in the symbol table
of our C compiler. 
*/

#ifndef SYMBOL_TABLE_ENTRY_H
#define SYMBOL_TABLE_ENTRY_H

#include <iostream>
#include <string>
using namespace std;

class symbolTableEntry {
	public:
        // constructors
        symbolTableEntry(); 
        
        // functions for symbol table objects
        void setIdentifierType();
        string getIdentifierType();
        void setIdentifierName(string name);
        string getIdentifierName(); 

	private:
        // symbol table entry data members 
        string identifierType; 
        string identifierName;

};

#endif // SYMBOL_TABLE_ENTRY_H
