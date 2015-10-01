/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.h
Created: September 27, 2015
Last Modified: October 1, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the symbol table of our C compiler.

We are using the C++ STL for our symbol table (a stack of BSTs). 
More specifically, we are using a deque (used as a stack) of maps (the maps
are responsible for mapping a string (the identifier name) to 
"symbolTableEntry" objects). A "symbolTableEntry" object is an object that we
created and contains all associated information of identifiers (type, scope, 
etc.).    
*/

// header guards
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

// includes
#include "symbolTableEntry.h"
#include <fstream>
#include <map>
#include <deque>
using namespace std;

// symbol table and bst typedefs to reduce keystrokes 
typedef map<string, symbolTableEntry> bst; 
typedef bst::iterator bstItr;
typedef deque<bst> symTbl;  
typedef symTbl::iterator symTblItr; 

// class definition 
class symbolTable {
    public:
        // constructors
        symbolTable();

        // symbol table functions 
        void insertNewSymbol(symbolTableEntry newSymbolTableEntry);
        symbolTableEntry* searchForSymbol(int& levelSymbolWasFound); // todo: parameters and return type TBD

        void searchTopLevelOnly(); // todo: parameters and return type TBD

        void pushLevelOnSymbolTable();
        void popLevelOffSymbolTable(); 

	symbolTableEntry* searchForSymbolAtTopOfStack(string symbolToSearch); 

        void writeSymbolTableContentsToFile();

	// destructor 
        ~symbolTable();
    private:
        // symbol table data members 
        symTbl cSymbolTable;
	int topLevelScope;   
};

#endif // SYMBOL_TABLE_H
