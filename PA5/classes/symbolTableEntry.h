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
<<<<<<< HEAD
=======

// used for returning the type and value of an identifier
/*
typedef struct {
    int dataType;
    union vals {
        char _char;
        short _short;
        int _int;
        long _long;
        float _float; 
        double _double; 
    };
    vals value;
} dataValue;  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238

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
<<<<<<< HEAD
        void setIdentifierValue(dVal data, int token);
=======
        //void setIdentifierValue(void* value, int token);
        void setIdentifierValue(dVal temp, int token);
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
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