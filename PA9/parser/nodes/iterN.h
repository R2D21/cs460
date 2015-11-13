/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: iterNode.h
Created: October 27
Last Modified: October 27, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the iteration AST node class of our C compiler.

*/

// header guards
#ifndef ITERN_H
#define ITERN_H

// includes
#include <iostream>
#include <vector>
#include <string>
#include "astNode.h"

// class definition 
class iterN : public astNode {
    public:
        // constructors
        iterN(astNode*,astNode*,astNode*,astNode*);

        // class functions 
	
        std::string gen3AC(std::string a_Addr, std::string b_Addr, std::string c_Addr);
        friend std::ostream &operator<<(std::ostream &out, const iterN&);

        // destructor 
        ~iterN();

    protected:
        astNode* exprA;
        astNode* exprB;
        astNode* exprC;
        astNode* stmtD;

};

#endif // ITERN_H