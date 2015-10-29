/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: astNode.h
Created: October 27
Last Modified: October 27, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the base AST node class of our C compiler.

*/

// header guards
#ifndef ASTNODE_H
#define ASTNODE_H

// includes
#include <iostream>
#include <vector>
#include <string>

// class definition 
class astNode {
    public:
        // constructors
        astNode();

        // class functions 
	
        // destructor 
        ~astNode();

    protected:
        // data members 
        std::vector<std::string> sourceCode;

};

#endif // ASTNODE_H