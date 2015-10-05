/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 27, 2015
Last Modified: October 1, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the symbol table of our C compiler.

We are using the C++ STL for our symbol table (a stack of BSTs). 
More specifically, we are using a deque (used as a stack) of maps (the maps
are responsible for mapping a string (the identifier name) to 
"symbolTableEntry" objects). A "symbolTableEntry" object is an object that we
created and contains all associated information of identifiers (type, scope, 
etc.).    
*/

// includes
#include "symbolTable.h"

// function implementations

/*
Function: symbolTable() (constructor) 

Description: Allows for instantiation of a new symbolTable object. 
*/
symbolTable::symbolTable() {
	cout << "New symbol table!" << endl; 
	//topLevelScope = 0; 
}

void symbolTable::insertNewSymbol(string name, symbolTableEntry newEntry){
	int topLevel = cSymbolTable.size() - 1;

	if(topLevel == -1)
	{
		// DO WE WANT ERROR OR ADD SCOPE?
	}
	else
	{
		bst* currentVars = cSymbolTable[ topLevel ].getVars();
		currentVars->insert( pair<string,symbolTableEntry>(name, newEntry) );
	}

}


void symbolTable::pushLevelOn(){
	bst* newTree = new bst();
	scope* newScope = new scope(cSymbolTable.size(), cSymbolTable.size(), *newTree);
	cSymbolTable.push_back(*newScope);

}

void symbolTable::pushLevelOn(int outer){
	bst* newTree = new bst();
	scope* newScope = new scope(cSymbolTable.size(), outer, *newTree);
	cSymbolTable.push_back(*newScope);

}

void symbolTable::popLevelOff(){
	cSymbolTable.pop_back();

}

symbolTableEntry* symbolTable::searchForSymbol(string symbolToSearch, int& levelSymbolWasFound){
	if(cSymbolTable.size() == 0){
		levelSymbolWasFound = -1;
		return NULL;
	}
	return searchHelper( symbolToSearch, levelSymbolWasFound, cSymbolTable.size()-1 );
}

symbolTableEntry* symbolTable::searchHelper(string symbolToSearch, int&levelSymbolWasFound, int searchLevel){
	// variables
	bst* searchBST = cSymbolTable[searchLevel].getVars();
	bstItr scopeItr;

	// iterate through the top BST in the symbol table
	for (scopeItr = searchBST->begin(); scopeItr != searchBST->end(); scopeItr++) {
		// check for the desired symbol
		if (symbolToSearch == scopeItr->first) {
			levelSymbolWasFound = searchLevel;
			return &(scopeItr->second); 
		}
	}
	if(searchLevel == 0){
		levelSymbolWasFound = -1;
		return NULL;
	}
	else{
		return searchHelper( symbolToSearch, levelSymbolWasFound, cSymbolTable[searchLevel].getOuterScope() );
	}
}

/*
Function: searchForSymbol(somethingHere)
Return type: symbolTableEntry*

Description: This function will only search the top of the symbol table
for a given variable. If this variable is found, a pointer to the symbol
table entry's data will be returned. Otherwise, if the function was unable
to locate the symbol table entry or if the symbol table is empty, the 
function will return NULL. 
*/
symbolTableEntry* symbolTable::searchTopOfStack(string symbolToSearch) {
	// check if symbol table is empty
	if (cSymbolTable.size() == 0) {
		return NULL; 
	}

	// variables
	bst* topBST = cSymbolTable[cSymbolTable.size()-1].getVars();
	bstItr scopeItr;

	// iterate through the top BST in the symbol table
	for (scopeItr = topBST->begin(); scopeItr != topBST->end(); scopeItr++) {
		// check for the desired symbol
		if (symbolToSearch == scopeItr->first) {
			return &(scopeItr->second); 
		}
	}

/*
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
*/
	return NULL; 
}

/*
Function: writeSymbolTableContentsToFile()
Return type: void

Description: Will write the contents of the symbol table to a file that
will be located in the "outputFiles" directory.  
*/
void symbolTable::writeToFile() {
	// variables
	bstItr scopeItr; 
	symTblItr symbolTableItr; 
 
	ofstream outFile;
	outFile.open("../outputFiles/symbolTableContents.txt", ofstream::out); 
	int scopeLevel = cSymbolTable.size(); 
 	if(scopeLevel == -1){
		outFile << "Symbol table is empty!" << endl;
	}

 /*
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
*/
	// file writing complete 
	outFile.close(); 	
}

void symbolTable::writeToScreen() {
	// variables
	bstItr varsItr; 
	symTblItr symbolTableItr; 
	bst* currentVars;
	int scopeLevel = cSymbolTable.size() - 1;  
	if(scopeLevel == -1){
		cout << "Symbol table is empty!" << endl;
	}
	else
	{
		for (symbolTableItr = cSymbolTable.begin();  
			symbolTableItr != cSymbolTable.end(); 
			symbolTableItr++) {

			currentVars = symbolTableItr->getVars();
			cout << "Scope Level " << symbolTableItr->getScopeLevel() << " in Scope ";
			cout << symbolTableItr->getOuterScope() << endl;
			for (varsItr = currentVars->begin(); varsItr != currentVars->end(); 
					varsItr++) {
				cout << "Variable: " << varsItr->first << endl;

			}
			
		}

	}
 /*
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
*/

}

symbolTable::~symbolTable(){
	cout << "Destroy symbol table" << endl;
}