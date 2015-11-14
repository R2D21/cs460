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
#include <fstream>
#include "../../classes/symbolTableEntry.h"

// externs
extern int intTicket; 
extern std::string intTC(); 
extern std::ofstream out3AC; 

// class definition 
class astNode {
    public:
        // constructors
        astNode();

        // class functions 
	    void setSourceCode( std::vector<std::string> src );
        std::vector<std::string> getSourceCode() const;

        std::string getName() const;

        virtual int getID() const;
        virtual std::string gen3AC();
        virtual void print(int = 0);

        // destructor 
        virtual ~astNode();

    protected:
        // data members 
        std::vector<std::string> sourceCode;
        std::string name;
        static int idNum;
};

#endif // ASTNODE_H