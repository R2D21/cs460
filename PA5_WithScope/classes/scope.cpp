/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: scope.cpp
Created: October 2, 2015
Last Modified: October 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the scope class of our C compiler.

 ??  
*/

// includes
#include "scope.h"

// function implementations

/*
Function: scope() (constructor) 

Description: Allows for instantiation of a new scope object. 
*/
scope::scope() {
	cout << "New scope!" << endl; 

}

scope::scope(int scopeLvl, int outerS, bst varsMap) {
	cout << "New scope!" << endl;
	scopeLevel = scopeLvl; 
	outerScope = outerS;
	vars = varsMap;
}

bst* scope::getVars() { // not sure why it had to return a pointer but I think there was an error
	//check empty?
	return &vars;
}

int scope::getOuterScope(){
	return outerScope;
}

int scope::getScopeLevel(){
	return scopeLevel;
}

scope::~scope(){
	cout << "Destroy scope" << endl;
}
/*
Function: searchForSymbol(somethingHere)
Return type: symbolTableEntry*

Description: This function will only search the top of the symbol table
for a given variable. If this variable is found, a pointer to the symbol
table entry's data will be returned. Otherwise, if the function was unable
to locate the symbol table entry or if the symbol table is empty, the 
function will return NULL. 

symbolTableEntry* symbolTable::searchForSymbolAtTopOfStack(string symbolToSearch) {
	// check if symbol table is empty
	if (cSymbolTable.size() == 0) {
		return NULL; 
	}

	// variables
	symTblItr firstBST = cSymbolTable.begin(); 
	bstItr scopeItr;

	// iterate through the top BST in the symbol table
	for (scopeItr = firstBST->begin(); scopeItr != firstBST->end(); scopeItr++) {
		// check for the desired symbol
		if (symbolToSearch == scopeItr->first) {
			return &(scopeItr->second); 
		}
	}

	return NULL; 
}
*/
/*
Function: writeSymbolTableContentsToFile()
Return type: void

Description: Will write the contents of the symbol table to a file that
will be located in the "outputFiles" directory.  

void symbolTable::writeSymbolTableContentsToFile() {
	// variables
	bstItr scopeItr; 
	symTblItr symbolTableItr; 
	int scopeLevel = cSymbolTable.size();  
	ofstream outFile;
	outFile.open("../outputFiles/symbolTableContents.txt", ofstream::out); 
 
	// iterate through BSTs in the symbol table
	for (symbolTableItr = cSymbolTable.end();  
		symbolTableItr != cSymbolTable.begin(); 
		symbolTableItr--) {

		// output all content in the current scope 
		outFile << "Scope level: " << scopeLevel << endl;
		for (scopeItr = symbolTableItr->begin();
			scopeItr != symbolTableItr->end();
			scopeItr++) {
			outFile << "Identifier name: " << scopeItr->first << endl;
			outFile << "TBD: " << endl;
		}
	}

	// file writing complete 
	outFile.close(); 	
}
*/
