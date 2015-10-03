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
#include "scope.h"
#include <fstream>
#include <map>
#include <deque>
using namespace std;

// symbol table and bst typedefs to reduce keystrokes 
//typedef map<string, symbolTableEntry> bst; 
typedef bst::iterator bstItr;
typedef deque<scope> symTbl;  
typedef symTbl::iterator symTblItr; 
//typedef symTbl::const_iterator constSymTblItr;

// class definition 
class symbolTable {
    public:
        // constructors
        symbolTable();

        // symbol table functions 
        void pushLevelOn();
        void pushLevelOn(int outer);
        void popLevelOff(); 

        void insertNewSymbol(string name, symbolTableEntry newEntry);

        symbolTableEntry* searchForSymbol(string symbolToSearch, int& levelSymbolWasFound); // todo: parameters and return type TBD
        symbolTableEntry* searchHelper(string symbolToSearch, int&levelSymbolWasFound, int searchLevel);
        //void searchTopLevelOnly(); // todo: parameters and return type TBD

        symbolTableEntry* searchTopOfStack(string symbolToSearch); 

        void writeToFile();
        void writeToScreen();

	// destructor 
        ~symbolTable();
    private:
        // symbol table data members 
        symTbl cSymbolTable;
	//int topLevelScope;   
};

#endif // SYMBOL_TABLE_H
