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
	isArray = false; 
	isSigned = false;
	isUnsigned = false; 
	identifierName = "";
	dataInfo.dataType = -1; 
	numPtrs = 0;

}

/*
Function: symbolTableEntry(int lineNumber) (constructor) 

Parameters:
int lineNumber: The line number that the identifier is located at. 

Description: Allows for instantiation of a new symbol table entry object (
with a specified line number. 
*/
symbolTableEntry::symbolTableEntry(std::string name, int lineNumber) {
	// none of the following info has been determined yet
	lineNum = lineNumber;
	isFunc = false;
	isArray = false; 
	isSigned = false;
	isUnsigned = false; 
	identifierName = name;
	dataInfo.dataType = -1; 
	numPtrs = 0;

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
	int typeNum = isValidType(type);

	if(typeNum != -1){
		dataInfo.dataType = typeNum;
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
void symbolTableEntry::setIdentifierValue(dVal data){
		switch(dataInfo.dataType) {
		case LONG_LONG_T:
		case LONG_T:
		case INT_T:
		case SHORT_T:
			dataInfo.value._number = data.value._number;
			break;

		case FLOAT_T:
		case DOUBLE_T:
		case LONG_DOUBLE_T:
			dataInfo.value._decimal = data.value._decimal;
			break;

		case CHAR_T:
			dataInfo.value._char = data.value._char;
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
		case LONG_LONG_T:
		case LONG_T:
		case INT_T:
		case SHORT_T:
 			std::cout << dataInfo.value._number << std::endl; 
			break;

		case FLOAT_T:
		case DOUBLE_T:
		case LONG_DOUBLE_T:
			std::cout << dataInfo.value._decimal << std::endl; 
			break;

		case CHAR_T:
			std::cout << dataInfo.value._char << std::endl; 
			break;

		case VOID_T:
			std::cout << "void" << std::endl; 
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
Function: setNumPtrs(int number)

Description: Returns the number of parameters for a function. 
*/
void symbolTableEntry::setNumPtrs(int number){
	numPtrs += number;
}

int symbolTableEntry::getNumPtrs() const{
	return numPtrs;
}

/*
Function: 


*/
void symbolTableEntry::viewParams() const {
	for(unsigned int i = 0; i < parameters.size(); i++) {
		std::cout << "Formal Parameter: " << parameters[i].formalParam << std::endl;
		std::cout << "Parameter Type: " << intTypeToStr(parameters[i].dataType) << std::endl;
	}
}

/*
Function: addArrayDimension(int size)

Parameters:
int size: The size of the new array dimension. 

Description: Will create a new dimension for the array based on the size passed
to the function.  
*/
void symbolTableEntry::addArrayDimension(int size) {
	if (isArray) {arrayDimensions.push_back(size);}
}

/*
Function: setArray()

Description: Assigns the current symbol table entry to be identified as an array.
*/
void symbolTableEntry::setArray() {
	isArray = true; 
}

/*
Function: getArrayDimensions() const

Description: Returns a vector filled with the sizes of the array dimensions.
*/
std::vector<int> symbolTableEntry::getArrayDimensions() const {
	return arrayDimensions; 
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


*/
int symbolTableEntry::getNumArrDims() const {
	if (isArray) {return arrayDimensions.size();}
	else return 0; 
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

/*
Function: intTypeToStr(Type someType) const

Parameter:
Type someType: An enumerated type (represents an integer). 

Descrition: Takes in an enumerated type which will convert that type
to a string object.  
*/
std::string symbolTableEntry::intTypeToStr(int someType) const {
	std::string str; 
	switch(someType) {
		case CHAR_T:
			str = "char";
			break;

		case DOUBLE_T:
			str = "double";
			break;

		case FLOAT_T:
			str = "float";
			break;

		case INT_T:
			str = "int";
			break;

		case LONG_T:
			str = "long";
			break;

		case LONG_LONG_T:
			str = "long long";
			break;

		case LONG_DOUBLE_T:
			str = "long double";
			break;

		case SHORT_T:
			str = "short";
			break;

		case VOID_T:
			str = "void";
			break;

		default:
			str = "invalid type";
			break;
	}
	return str; 
}