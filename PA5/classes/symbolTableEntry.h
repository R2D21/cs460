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

extern int isValidType(std::vector<int> type);

class symbolTableEntry {
    public:
        // constructors
        symbolTableEntry(); 
        symbolTableEntry(std::string name, int lineNumber);
        
        // symbol table object functions
        bool setIdentifierType(std::vector<int> type);
        bool isValid(std::vector<int> type) const; // not implemented
        int getIdentifierType() const; // double check this
        void setIdentifierName(std::string name);
        std::string getIdentifierName() const;
        void setIdentifierValue(dVal data); // double check this
        std::vector<int> getIdentifierValue() const; // double check this
        void printIdentifierValue() const; // double check this

        // functions needed if entry is a function
        bool isFunction() const;
        void setFunction();
        void addParameter(const parameter& type);
        int getNumberOfParams() const;
        void setNumPtrs(int number);
        int getNumPtrs() const;
        void viewParams() const;  

        // functions needed if entry is an array
        void addArrayDimension(int size);
        void setArray(); 
        std::vector<int> getArrayDimensions() const;
        int getNumArrDims() const;  

        // other functions 
        int getLineNumber() const;
        //std::string getLineNumber() const; 

        // destructor
        ~symbolTableEntry(); 

    private:
        // symbol table entry data members
        int lineNum;
        bool isFunc;
        bool isArray; 
        bool isSigned;
        bool isUnsigned; 
        int numPtrs;
        std::string identifierName;  
        dVal dataInfo; 
        std::vector<parameter> parameters;
        std::vector<int> identifierType;       // here 
        std::vector<int> arrayDimensions;
        std::map<std::vector<int>, int> validTypes; 

        // symbol table entry private functions
        std::string intTypeToStr(int someType) const; 
};

#endif // SYMBOL_TABLE_ENTRY_H