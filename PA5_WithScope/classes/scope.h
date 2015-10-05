/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: scope.h
Created: October 1, 2015
Last Modified: October 2, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the scope class of our C compiler.

??
*/


// header guards
#ifndef SCOPE_H
#define SCOPE_H

// includes
#include "symbolTableEntry.h"
#include <fstream>
#include <map>
#include <deque>
using namespace std;

// symbol table and bst typedefs to reduce keystrokes 
typedef map<string, symbolTableEntry> bst; 
typedef bst::iterator bstItr;

// class definition 
class scope {
    public:
        // constructors
        scope();
        scope(int scopeLevel, int outerS, bst varsMap);
/*
        // symbol table functions 
        void insertNewSymbol(symbolTableEntry newSymbolTableEntry);
        symbolTableEntry* searchForSymbol(int& levelSymbolWasFound); // todo: parameters and return type TBD

        void searchTopLevelOnly(); // todo: parameters and return type TBD

        void pushLevelOnSymbolTable();
        void popLevelOffSymbolTable(); 

		symbolTableEntry* searchForSymbolAtTopOfStack(string symbolToSearch); 

        void writeSymbolTableContentsToFile();
*/
        bst* getVars();
        int getScopeLevel();
        int getOuterScope();
	// destructor 
        ~scope();
    private:
        // scope data members 
        int scopeLevel;
        int outerScope;
        bst vars;  

};

#endif // SCOPE_H
