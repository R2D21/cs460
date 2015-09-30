/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.h
Created: September 27, 2015
Last Modified: September 27, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the symbol table of our C compiler.

We are using the C++ STL for our symbol table (a stack of BSTs). 
More specifically, we are using a deque (used as a stack) of maps (the maps
are responsible for mapping a string (the identifier name) to 
"symbolTableEntry" objects). A "symbolTableEntry" object is an object that we
created and contains all associated information of identifiers (type, scope, 
etc.).    
*/

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "symbolTableEntry.h"
#include <map>
#include <deque>
using namespace std;

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

        void writeSymbolTableContentsToFile();

        ~symbolTable();
    private:
        // symbol table data members 
        deque< map<string,symbolTableEntry> > cSymbolTable; 
};

#endif // SYMBOL_TABLE_H