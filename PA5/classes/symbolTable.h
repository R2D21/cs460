/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.h
Created: September 27, 2015
Last Modified: October 4, 2015
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
typedef bst::const_iterator constBstItr;
typedef deque<bst> symTbl;  
typedef symTbl::iterator symTblItr; 
typedef pair<string, symbolTableEntry> entry;
typedef symTbl::const_iterator constSymTblItr;

// class definition 
class symbolTable {
    public:
        // constructors
        symbolTable();

        // symbol table functions 
        void pushLevelOn();
        void popLevelOff(); 
        void insertNewSymbol(string name);
        symbolTableEntry* searchForSymbol(string symbolToSearch, int& levelSymbolWasFound);
        symbolTableEntry* searchTopOfStack(string symbolToSearch); 
        void writeToFile() const;
        void writeToScreen() const;

	   // destructor 
        ~symbolTable();

    private:
        // symbol table data members 
        symTbl table;
};

#endif // SYMBOL_TABLE_H