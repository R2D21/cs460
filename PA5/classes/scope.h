/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: scope.h
Created: October 1, 2015
Last Modified: October 2, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the scope class of our C compiler.
*/

// header guards
#ifndef SCOPE_H
#define SCOPE_H

// includes
#include <iostream>
#include "symbolTableEntry.h"
#include <map>

// symbol table and typedefs to reduce keystrokes 
typedef std::map<std::string, symbolTableEntry> Bst; 
typedef Bst::iterator bstItr;

// class definition 
class scope {
    public:
        // constructors
        scope();
        scope(int scopeLevel, int outerS, Bst bstMap);

        // class functions 
        Bst* getBst();
        int getScopeLevel() const;
        int getOuterScope() const;
	
        // destructor 
        ~scope();

    private:
        // scope data members 
        int scopeLevel;
        int outerScope;
        Bst bst; 

};

#endif // SCOPE_H