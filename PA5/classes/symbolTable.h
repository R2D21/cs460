/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.h
Created: September 27, 2015
Last Modified: October 4, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the symbol table of our C compiler.

We are using the C++ STL for our symbol table (a stack of "scope" objects). 
More specifically, we are using a deque (used as a stack) of "scope" objects.
Each "scope" object contains an integer representing the value of the current 
scope as well as a binary search tree which maps strings (identifier names) 
to "symbolTableEntry" objects. A "symbolTableEntry" object is an object that we
created and contains all associated information of identifiers (type, value, 
etc.). 
*/

// header guards
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

// includes
#include "scope.h"
#include <fstream>
#include <deque>

// symbol table and typedefs to reduce keystrokes 
typedef Bst::iterator bstItr;
typedef Bst::const_iterator constBstItr;
typedef std::deque<scope> symTbl;  
typedef symTbl::iterator symTblItr; 
typedef std::pair<std::string, symbolTableEntry> entry;
typedef symTbl::const_iterator constSymTblItr;

// class definition 
class symbolTable {
    public:
        // constructors
        symbolTable();

        // symbol table functions 
        void pushLevelOn();
        void pushLevelOn(int outer);
        void popLevelOff(); 
        symbolTableEntry* insertNewSymbol(std::string name, int line);
        symbolTableEntry* searchForSymbol(std::string symbolToSearch, int& levelSymbolWasFound);
        symbolTableEntry* searchTopOfStack(std::string symbolToSearch); 
        void writeToFile();
        void writeToScreen();
        int getTableSize() const; 

	   // destructor 
        ~symbolTable();

    private:
        symbolTableEntry* searchHelper(std::string symbolToSearch, int&levelSymbolWasFound, int searchLevel);
        symTbl table;
};

#endif // SYMBOL_TABLE_H