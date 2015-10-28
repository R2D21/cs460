/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTableEntry.h
Created: September 27, 2015
Last Modified: October 27, 2015
Class: CS 460 (Compiler Construction)

This is the header file for the objects that will reside in the symbol table
of our ANSI C compiler. 
*/

// header guards
#ifndef SYMBOL_TABLE_ENTRY_H
#define SYMBOL_TABLE_ENTRY_H

// includes
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <map>
#include <climits>
#include "../parser/cParser.tab.h" // used for token values and other elements 

// externs
extern int isValidType(std::vector<int> type);

// used to determine what the type specifier of an identifier is
enum Type{
    CHAR_T,
    DOUBLE_T,
    FLOAT_T,
    INT_T,
    LONG_T,
    LONG_LONG_T,
    LONG_DOUBLE_T,
    SHORT_T,
    STR_T,
    STE_T,
    VOID_T
};

// used to actually store the value associated with the identifier 
typedef union {
    char _char;
    long long _num;
    long double _dec; // decimal
    char _str[256];    
} entryVals; 

// typdefs to reduce keystrokes
typedef std::pair<std::vector<int>, int> pair;

class symbolTableEntry {
    public:
        // constructors
        symbolTableEntry(); 
        symbolTableEntry(std::string name, int lineNumber);
        
        // basic functions
        bool setIdentifierType(std::vector<int> type);
        std::vector<int> getIdentifierType_Vector() const;
        int getIdentifierType_Enum() const;
        void setIdentifierName(std::string name);
        std::string getIdentifierName() const; 
        bool setIdentifierValue(const node& src);
        node* getIdentifierValue() const; 
        void printIdentifierValue() const;

        // functions required if the entry is a function
        bool isFunction() const;
        void setFunction();
        void addParameter(std::vector<int> parameterType);
        int getNumParams() const;
        void viewParams() const;
        std::vector< std::vector<int> > getParams() const; 
        bool checkParams(const std::vector<symbolTableEntry*>& callingParams) const;  






        // functions needed if entry is a pointer
        void setNumPtrs(int number);

        

        // functions needed if entry is a function
        int getNumPtrs() const; 

        // functions needed if entry is an array
        void addArrayDimension(int size);
        void setArray(); 
        std::vector<int> getArrayDimensions() const;
        int getNumArrDims() const;  

        // other functions 
        int getLineNumber() const;
        std::string getTypeStr() const;
        void displayIdentifierAttributes() const; 
        //std::string getLineNumber() const; 

        // destructor
        ~symbolTableEntry(); 

    private:
        // used to store and determine what type of data is associated with
        // the entry
        entryVals entryVal; 
        int entryType;

        // attributes associated with a symbol table entry
        std::string identifierName;
        std::vector<int> identifierType;   
        int lineNum;
        bool isSigned;
        bool isUnsigned; 
        
        // attributes needed if entry is a pointer
        int numPtrs;

        // attributes needed if entry is an array
        bool isArray;
        std::vector<int> arrayDimensions;

        // attributes needed if entry is a function  
        bool isFunc;
        std::vector< std::vector<int> > parameters;
 
        // private functions - used only by members of the class
        std::string intTypeToStr(int someType) const; 
};

#endif // SYMBOL_TABLE_ENTRY_H