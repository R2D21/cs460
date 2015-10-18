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
#include <map>
#include "../parser/cParser.tab.h" // used for token values
enum Type{
    CHAR_T,
    DOUBLE_T,
    FLOAT_T,
    INT_T,
    LONG_T,
    LONG_LONG_T,
    LONG_DOUBLE_T,
    SHORT_T,
    VOID_T
};

// used for function parameters
typedef struct {
    int dataType;
    std::string formalParam; 
} parameter;  

// typdefs
typedef std::pair<std::vector<int>, int> pair;

class symbolTableEntry {
    public:
        // constructors
        symbolTableEntry(); 
        symbolTableEntry(std::string name, int lineNumber);
        
        // symbol table object functions
        bool setIdentifierType(std::vector<int> type);
        bool isValid(std::vector<int> type) const;
        int getIdentifierType() const;
        void setIdentifierName(std::string name);
        std::string getIdentifierName() const;
        void setIdentifierValue(dVal data, int token);
        dVal getIdentifierValue() const;
        void printIdentifierValue() const;   

        // functions needed if entry is a function
        bool isFunction() const;
        void setFunction();
        void addParameter(int token, std::string formalParameter);
        int getNumberOfParams() const; 

        // other functions 
        int getLineNumber() const;
        //std::string getLineNumber() const; 

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
        std::vector<int> identifierType;
        std::map<std::vector<int>, int> validTypes; 
};

#endif // SYMBOL_TABLE_ENTRY_H