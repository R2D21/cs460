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

	// populate the map for each symbol table entry
	// ex: "long long, long int, etc."
	std::vector<int> validType;

	// char
	validType.push_back(CHAR);
	validTypes.insert(pair(validType, CHAR_T));
	validType.clear();

	// double
	validType.push_back(DOUBLE);
	validTypes.insert(pair(validType, DOUBLE_T));
	validType.clear();

	// float
	validType.push_back(FLOAT);
	validTypes.insert(pair(validType, FLOAT_T));
	validType.clear();

	// int 
	validType.push_back(INT);
	validTypes.insert(pair(validType, INT_T));
	validType.clear();

	// long
	validType.push_back(LONG);
	validTypes.insert(pair(validType, LONG_T));
	validType.clear();

	// long int
	validType.push_back(LONG);
	validType.push_back(INT);
	validTypes.insert(pair(validType, LONG_T));
	validType.clear();

	// long long
	validType.push_back(LONG);
	validType.push_back(LONG);
	validTypes.insert(pair(validType, LONG_LONG_T));
	validType.clear();	

	// long long int
	validType.push_back(LONG);
	validType.push_back(LONG);
	validType.push_back(INT);
	validTypes.insert(pair(validType, LONG_LONG_T));
	validType.clear();

	// long double
	validType.push_back(LONG);
	validType.push_back(DOUBLE);
	validTypes.insert(pair(validType, LONG_DOUBLE_T));
	validType.clear();

	// short
	validType.push_back(SHORT);
	validTypes.insert(pair(validType, SHORT_T));
	validType.clear();	

	// short int
	validType.push_back(SHORT);
	validType.push_back(INT);
	validTypes.insert(pair(validType, SHORT_T));
	validType.clear();	

	// void
	validType.push_back(VOID);
	validTypes.insert(pair(validType, VOID_T));
	validType.clear();	
}

/*
Function: symbolTableEntry(int lineNumber) (constructor) 

Parameters:
int lineNumber: The line number that the identifier is located at. 

Description: Allows for instantiation of a new symbol table entry object (
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

	// populate the map for each symbol table entry
	// ex: "long long, long int, etc."
	std::vector<int> validType;

	// char
	validType.push_back(CHAR);
	validTypes.insert(pair(validType, CHAR_T));
	validType.clear();

	// double
	validType.push_back(DOUBLE);
	validTypes.insert(pair(validType, DOUBLE_T));
	validType.clear();

	// float
	validType.push_back(FLOAT);
	validTypes.insert(pair(validType, FLOAT_T));
	validType.clear();

	// int 
	validType.push_back(INT);
	validTypes.insert(pair(validType, INT_T));
	validType.clear();

	// long
	validType.push_back(LONG);
	validTypes.insert(pair(validType, LONG_T));
	validType.clear();

	// long int
	validType.push_back(LONG);
	validType.push_back(INT);
	validTypes.insert(pair(validType, LONG_T));
	validType.clear();

	// long long
	validType.push_back(LONG);
	validType.push_back(LONG);
	validTypes.insert(pair(validType, LONG_LONG_T));
	validType.clear();	

	// long long int
	validType.push_back(LONG);
	validType.push_back(LONG);
	validType.push_back(INT);
	validTypes.insert(pair(validType, LONG_LONG_T));
	validType.clear();

	// long double
	validType.push_back(LONG);
	validType.push_back(DOUBLE);
	validTypes.insert(pair(validType, LONG_DOUBLE_T));
	validType.clear();

	// short
	validType.push_back(SHORT);
	validTypes.insert(pair(validType, SHORT_T));
	validType.clear();	

	// short int
	validType.push_back(SHORT);
	validType.push_back(INT);
	validTypes.insert(pair(validType, SHORT_T));
	validType.clear();	

	// void
	validType.push_back(VOID);
	validTypes.insert(pair(validType, VOID_T));
	validType.clear();	
}

/*
Function: setIdentifierType()

Parameters:
int token: The token value is used to determine the data type
of the current symbol. 

Description: Allows the caller to specify the type of the symbol
table entry.  
*/
bool symbolTableEntry::setIdentifierType(std::vector<int> type) {
	std::map<std::vector<int> , int>::iterator mapItr;

	mapItr = validTypes.find(type);
	if(mapItr != validTypes.end()){
		dataInfo.dataType = mapItr->second;
		identifierType = type;
		return true;

	}
	else{
		return false;
		
	}
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
dVal data: The incoming object for out data. This object contains a specifier
as to what the datatype of the value is and the actual value itself. 
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
Function: printIdentifierValue()

Descrition: Prints the value of a corresponding identifier. 
*/
void symbolTableEntry::printIdentifierValue() const {
	switch(dataInfo.dataType) {
		case CHAR: 
 			std::cout << dataInfo.value._char << std::endl; 
			break;

		case SHORT:
			std::cout << dataInfo.value._short << std::endl; 
			break;

		case INT:
			std::cout << dataInfo.value._int << std::endl; 
			break;

		case LONG:
			std::cout << dataInfo.value._long << std::endl; 
			break;

		case FLOAT:
			std::cout << dataInfo.value._float << std::endl; 
			break;

		case DOUBLE:
			std::cout << dataInfo.value._double << std::endl; 
			break; 
	}
}

/*
Function: getIdentifierValue() const

Descrition: Returns an object of type "dVal", which is an object that 
contains an indicator as to which component in the union the corresponding
value is located. 
*/
std::vector<int> symbolTableEntry::getIdentifierValue() const {
	return identifierType; 
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
void symbolTableEntry::addParameter(const parameter& type) {
	parameters.push_back(type);


	/*
	parameter temp;
	temp.dataType = token;
	temp.formalParam = formalParameter;
	parameters[parameters.size()] = temp; */
}

/*
Function: getNumberOfParams() const

Description: Returns the number of parameters for a function. 
*/
int symbolTableEntry::getNumberOfParams() const {
	return parameters.size(); 
}

/*
Function: 


*/
void symbolTableEntry::viewParams() const {
	for(unsigned int i = 0; i < parameters.size(); i++) {
		std::cout << "Formal Parameter: " << parameters[i].formalParam << std::endl;
		std::cout << "Parameter Type: " << parameters[i].dataType << std::endl;
	}
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
Function: getLineNumber() const

Descrition: This function will return the line number that
the associated identifier was located on. 
*/
/*
std::string symbolTableEntry::getLineNumber() const {
	
	char numberStr[20];
	itoa(lineNum, numStr, 10); 
	return to_string(lineNum);
} */

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