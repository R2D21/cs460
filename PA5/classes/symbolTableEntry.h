/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTableEntry.h
Created: September 27, 2015
Last Modified: October 15, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the objects that will reside in the symbol table
of our ANSI C compiler. 
*/

// header guards
#ifndef SYMBOL_TABLE_ENTRY_H
#define SYMBOL_TABLE_ENTRY_H

// includes
#include <string>
#include <vector>
#include <iostream>
#include "../parser/cParser.tab.h" // used for token values

// used for function parameters
typedef struct {
    int dataType;
    std::string formalParam; 
} parameter;  

class symbolTableEntry {
    public:
        // constructors
        symbolTableEntry(); 
        symbolTableEntry(std::string name, int lineNumber);
        
        // symbol table object functions
        void setIdentifierType(int token);
        int getIdentifierType() const;
        void setIdentifierName(std::string name);
        std::string getIdentifierName() const;
        void setIdentifierValue(dVal data, int token);
        dVal getIdentifierValue() const;  

        // functions needed if entry is a function
        bool isFunction() const;
        void setFunction();
        void addParameter(int token, std::string formalParameter);
        int getNumberOfParams() const; 

        // other functions 
        int getLineNumber() const;

        // destructor
        ~symbolTableEntry(); 

    private:
        // symbol table entry data members
        int lineNum;
        bool isFunc;
        bool isSigned;
        bool isUnsigned; 
        std::string identifierName;  
        dVal dataInfo; 
        std::vector<parameter> parameters;    
};

#endif // SYMBOL_TABLE_ENTRY_H