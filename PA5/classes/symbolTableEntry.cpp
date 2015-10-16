/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTableEntry.cpp
Created: September 27, 2015
Last Modified: October 15, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the objects that will reside in the symbol
table of our C compiler. 
*/

// includes
#include "symbolTableEntry.h"

/*
Function: symbolTableEntry() (constructor) 

Description: Allows for instantiation of a new symbol table entry object. 
*/
symbolTableEntry::symbolTableEntry() {
	// none of the following info has been determined yet
	lineNum = -1;
	isFunc = false;
	isSigned = false;
	isUnsigned = false; 
	identifierName = "";
	dataInfo.dataType = -1;   
}

/*
Function: symbolTableEntry(int lineNumber) (constructor) 

Parameters:
int lineNumber: The line number that the identifier is located at. 

Description: Allows for instantiation of a new symbol table entry object 
with a specified line number. 
*/
symbolTableEntry::symbolTableEntry(std::string name, int lineNumber) {
	identifierName = name;
	lineNum = lineNumber;

	// none of the following info has been determined yet
	isFunc = false;
	isSigned = false;
	isUnsigned = false; 
	dataInfo.dataType = -1;	
}

/*
Function: setIdentifierType()

Parameters:
int token: The token value is used to determine the data type
of the current symbol. 

Description: Allows the caller to specify the type of the symbol
table entry.  
*/
void symbolTableEntry::setIdentifierType(int token) {
	dataInfo.dataType = token; 
}

/*
Function: getIdentifierType() const
Return type: int (the token value of the symbol table entry type)

Description: This function will return the corresponding token
value which depends on what type of value is stored in the
symbol table entry object. 
*/
int symbolTableEntry::getIdentifierType() const {
	return dataInfo.dataType; 

}

/*
Function: setIdentifierName(std::string name)

Parameters:
std::string name: The name of the new symbol table entry. 

Description: Allows the caller to specify the name of the symbol
table entry.  
*/
void symbolTableEntry::setIdentifierName(std::string name) {
	identifierName = name; 
}

/*
Function: getIdentifierName() const

Description: This function will return the name of the symbol
table entry.  
*/
std::string symbolTableEntry::getIdentifierName() const {
	return identifierName; 
}

/*
Function: setIdentifierValue(void* value, int token)

Parameters:
void* value: The incoming data value. This could essentially be of 
any type. 
int token: The incoming token value which will be used to assign the
incoming value to the correct component of the union.  

Descrition: Sets the value of a corresponding identifier. 
*/
void symbolTableEntry::setIdentifierValue(dVal data, int token){
		switch(token) {
		case CHAR:
			dataInfo.dataType = CHAR;
			dataInfo.value._char = data.value._char;
			break;

		case SHORT:
			dataInfo.dataType = SHORT;
			dataInfo.value._short = data.value._short;
			break;

		case INT:
			dataInfo.dataType = INT;
			dataInfo.value._int = data.value._int;
			break;

		case LONG:
			dataInfo.dataType = LONG;
			dataInfo.value._long = data.value._long;
			break;

		case FLOAT:
			dataInfo.dataType = FLOAT;
			dataInfo.value._float = data.value._float;
			break;

		case DOUBLE:
			dataInfo.dataType = DOUBLE;
			dataInfo.value._double = data.value._double;
			break;

		default:
			dataInfo.dataType = -1; 
	}
}
/*
Function: getIdentifierValue() const

Descrition: Returns an object of type "dVal", which is an object that 
contains an indicator as to which component in the union the corresponding
value is located. 
*/
dVal symbolTableEntry::getIdentifierValue() const {
	return dataInfo; 
} 

/*
Function: isFunction() const

Description: Allows the caller to determine if the entry is a 
function or not. 
*/
bool symbolTableEntry::isFunction() const {
	return isFunc; 
}

/*
Function: setFunction()

Description: Allows the caller to inform the symbol table entry that the 
current identifier is indeed a function. 
*/
void symbolTableEntry::setFunction() {
	isFunc = true;  
}

/*
Function: addParameter(int token, std::string formalParamter)

Parameters:
int token: The token value is used to determine the data type
of the current symbol.
std::string formalParameter: The string used to denote the formal
parameter in the function. 

Description: Allows the caller to add a formal parameter to
the symbol table entry. 
*/
void symbolTableEntry::addParameter(int token, std::string formalParameter) {
	parameter temp;
	temp.dataType = token;
	temp.formalParam = formalParameter;
	parameters[parameters.size()] = temp; 
}

/*
Function: getNumberOfParams() const

Description: Returns the number of parameters for a function. 
*/
int symbolTableEntry::getNumberOfParams() const {
	return parameters.size(); 
}

/*
Function: getLineNumber() const

Descrition: This function will return the line number that
the associated identifier was located on. 
*/
int symbolTableEntry::getLineNumber() const {
	return lineNum; 
}

/*
Function: ~symbolTableEntry() (desctuctor)

Descrition: This is the destructor for a symbol table entry object.  
*/
symbolTableEntry::~symbolTableEntry() {
	lineNum = -1;
	isFunc = false;
	isSigned = false;
	isUnsigned = false; 
	identifierName = "";
	dataInfo.dataType = -1;
	parameters.clear(); 
}