/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTableEntry.cpp
Created: September 27, 2015
Last Modified: October 27, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the objects that will reside in the symbol
table of our C compiler. 
*/

// includes
#include "symbolTableEntry.h"

/*
Function: symbolTableEntry() (constructor) 

Description: Allows for instantiation of a new symbol table entry object.
All data attributes are initialized to default values.  
*/
symbolTableEntry::symbolTableEntry() {
	// entry data info
	entryType = -1;

	// entry data attributes
	identifierName = "";
	identifierType.clear(); 
	lineNum = -1;
	isSigned = false;
	isUnsigned = false; 

	// entry pointer attributes
	numPtrs = -1; 

	// entry array attributes
	isArray = false;
	arrayDimensions.clear();  

	// entry function attributes
	isFunc = false;
	parameters.clear(); 
}

/*
Function: symbolTableEntry(int lineNumber) (constructor) 

Parameters:
int lineNumber: The line number that the identifier is located at. 

Description: Allows for instantiation of a new symbol table entry object (
with a specified line number. 
*/
symbolTableEntry::symbolTableEntry(std::string name, int lineNumber) {
	// entry data info
	entryType = -1;

	// entry data attributes
	identifierName = name;
	identifierType.clear();
	lineNum = lineNumber;
	isSigned = false;
	isUnsigned = false; 

	// entry pointer attributes
	numPtrs = -1; 

	// entry array attributes
	isArray = false;
	arrayDimensions.clear();
	
	// entry function attributes
	isFunc = false;
	parameters.clear();
}

/*
Function: setIdentifierType(std::vector<int> type)

Parameters:
std::vector<int> type: A vector of tokens is used to determine the data type
of the current symbol. 

Description: Allows the caller to specify the data type of the symbol
table entry. This function will return false if the supplied vector contains
an invalid data type. 
*/
bool symbolTableEntry::setIdentifierType(std::vector<int> type) {
	// check if the incoming vector contains a valid data type
	entryType = isValidType(type);

	if(entryType != -1){
		identifierType = type;
		return true;
	}

	else return false;
}

/*
Function: getIdentifierType_Vector() const

Description: Returns to the caller the vectorized form of the entry
data type/
*/
std::vector<int> symbolTableEntry::getIdentifierType_Vector() const {
	return identifierType; 
}

/*
Function: getIdentifierType_Enum() const

Description: This function will return the corresponding token
value which depends on what type of value is stored in the symbol 
table entry object. 
*/
int symbolTableEntry::getIdentifierType_Enum() const {
	return entryType;
}

/*
Function: setIdentifierName(std::string name)

Parameters:
std::string name: The new name of the symbol table entry. 

Description: Allows the caller to specify the name and/or rename 
the symbol table entry.  
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
Function: setIdentifierValue(const node& src)

Parameters:
const node& src: The incoming object for our data. This object contains 
a specifier as to what the datatype of the value is and also includes
the actual value itself.  

Description: Sets the value of a corresponding identifier. 
*/
bool symbolTableEntry::setIdentifierValue(const node& src){
	// check the data type of the current identifier and continue processing 
	switch(entryType) {
		case LONG_LONG_T:
			// warning, up conversion
			if(src.valType == LONG_T || src.valType == INT_T || src.valType == SHORT_T  ){
				// cout statements here?
			}

			// warning, converting character to integer
			else if(src.valType == CHAR_T){
				
			}

			// warning, down conversion from float to long long
			else if(src.valType == FLOAT_T || src.valType == DOUBLE_T || src.valType == LONG_DOUBLE_T){
				
			}

			// assign src number to the symbol table entry 
			entryVal._num = src.val._num;
			break;

		case LONG_T:
			// warning, up conversion
			if(src.valType == INT_T || src.valType == SHORT_T){
				
			}

			// warning, converting character to integer
			else if(src.valType == CHAR_T){
				
			}

			// warning, down conversion from float to long long
			else if(src.valType == FLOAT_T || src.valType == DOUBLE_T || src.valType == LONG_DOUBLE_T){
				
			}

			// warning???
			else if(src.valType == LONG_LONG_T){
				
			}

			// checking overflow
			if(src.val._num > LONG_MAX){
				return false;
			}

			// assign src number to symbol table entry 
			entryVal._num = src.val._num;
			break;

		case INT_T:
			// warning, up conversion
			if(src.valType == SHORT_T  ){
				
			}

			// warning, converting character to integer
			else if(src.valType == CHAR_T){
				
			}

			// warning, down conversion from float to long long
			else if(src.valType == FLOAT_T || src.valType == DOUBLE_T || src.valType == LONG_DOUBLE_T ){
				
			}

			// warning???
			else if(src.valType == LONG_T ||  src.valType == LONG_LONG_T ){
				
			}

			// checking overflow
			if(src.val._num > INT_MAX){
				return false;
			}

			// assign src number to the symbol table entry
			entryVal._num = src.val._num;
			break;

		case SHORT_T:
			// warning, converting character to short
			if(src.valType == CHAR_T){
				
			}

			// warning, down conversion from float to long long
			else if(src.valType == FLOAT_T || src.valType == DOUBLE_T || src.valType == LONG_DOUBLE_T){
				
			}

			// warning???
			else if(src.valType == INT_T || src.valType == LONG_T ||  src.valType == LONG_LONG_T ){
				
			}

			// checking overflow
			if(src.val._num > SHRT_MAX){
				return false;
			}

			// assign src number to symbol table entry
			entryVal._num = src.val._num;
			break;

		case FLOAT_T:
			// warning, converting character to float?
			if(src.valType == CHAR_T){
				
			}

			// warning, down conversion from float to long long
			else if(src.valType == DOUBLE_T || src.valType == LONG_DOUBLE_T){
				
			}

			// warning???
			else if(src.valType == INT_T || src.valType == LONG_T ||  src.valType == LONG_LONG_T ){
				
			}

			// checking overflow -- why just _num and not also _dec?
			if(src.val._num > SHRT_MAX){
				return false;
			}

			// assign src number to symbol table entry
			entryVal._dec = src.val._dec;
			break;

		case DOUBLE_T:
			entryVal._dec = src.val._dec;
			break;

		case LONG_DOUBLE_T:
			entryVal._dec = src.val._dec;
			break;

		case CHAR_T:
			if(src.val._char > CHAR_MAX){
				return false;
			}
			entryVal._char = src.val._char;
			break;

		// this case should never happen
		default:
			std::cout << "Inside of setIdentifierValue() in the case that should";
			std::cout << " never happen." << std::endl; 
			break;
	}

	// the identifier has successfully been assigned a new value
	return true; 
}

/*
Function: getIdentifierValue() 

Description: 
*/
node symbolTableEntry::getIdentifierValue() const {
	node n;
	n.astPtr = NULL;
	n.valType = entryType;
	switch(entryType) {
		case LONG_LONG_T:
		case LONG_T:
		case INT_T:
		case SHORT_T:
			n.val._num = entryVal._num;
			break;

		case FLOAT_T:
		case DOUBLE_T:
		case LONG_DOUBLE_T:
			n.val._dec = entryVal._dec;
			break;

		case CHAR_T:
			n.val._char = entryVal._char;
			break;

		case STR_T:
			strcpy(n.val._str, entryVal._str);
			break;

		// this case should never happen
		default:
			std::cout << "Inside of getIdentifierValue() in the case that should";
			std::cout << " never happen." << std::endl; 
			break;		
	}

	return n; 
} 

/*
Function: printIdentifierValue()

Descrition: Prints the value of a corresponding identifier. 
*/
void symbolTableEntry::printIdentifierValue() const {
	/*
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

		default:
			std::cout << "unknown type IS" << std::endl;
			std::cout <<"\t" << dataInfo.dataType << std::endl; 
			break;
	} */
}

std::string symbolTableEntry::getTypeStr() const{
	return ""; /*intTypeToStr( dataInfo.dataType ); */
}

/*
Function: getIdentifierValue() const

Descrition: Returns an object of type "dVal", which is an object that 
contains an indicator as to which component in the union the corresponding
value is located. 
*/
/*
node symbolTableEntry::getIdentifierValue() const {
	return dataInfo; 
} */

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
void symbolTableEntry::addParameter(int type) {
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
int symbolTableEntry::getNumParams() const {
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
	/*
	for(unsigned int i = 0; i < parameters.size(); i++) {
		std::cout << "Formal Parameter: " << parameters[i].formalParam << std::endl;
		std::cout << "Parameter Type: " << intTypeToStr(parameters[i].dataType) << std::endl;
	} */
}

/*

*/
std::vector<int> symbolTableEntry::getParams() const {
	return parameters; 
} 

/*
Function:

Description: 
*/
bool symbolTableEntry::checkParams(const std::vector<symbolTableEntry*>& callingParams) const {
	/*
	if (callingParams.size() != parameters.size()) {
		return false; 
	}

	std::vector<parameter> paramDataType;
	for(unsigned int i = 0; i < callingParams.size(); i++) {
		if (parameters[i].dataType != callingParams[i]->getIdentifierType()) {
			return false; 
		}
	} 
 
 	*/
	return true; 
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

Description: This function will return the line number that
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
Function: displayIdentifierAttributes() const

Description: This function will print out all of the attributes
associated with a symbol table entry; 
*/
void symbolTableEntry::displayIdentifierAttributes() const {
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
	parameters.clear(); 
	arrayDimensions.clear();  
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