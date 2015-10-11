/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 27, 2015
Last Modified: October 4, 2015
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

Description: Allows for instantiation of a new symbol table object. 
*/
symbolTable::symbolTable(){
	cout << "New symbol table!" << endl; 
	pushLevelOn(); 
}

/*
Function: pushLevelOn()

Description: This function pushes a new scope level onto the stack. 
*/
void symbolTable::pushLevelOn(){
	bst* newTree = new bst();
	table.push_back(*newTree);

}

/*
Function: popLevelOff()

Description: This function pops a scope level off of the stack (assuming) 
there is a level to pop off. 
*/
void symbolTable::popLevelOff(){
	if (table.size() > 0){
		table.pop_back();
	}
}

/*
Function: insertNewSymbol(string name)

Description: This function will add a new entry to the current scope level
on the stack. 

Parameters:
string name: The name of the identifier to be added to the current scope 
level. 
*/
void symbolTable::insertNewSymbol(string name, int line){
	symbolTableEntry* newEntry = new symbolTableEntry(line); // empty for now
	newEntry->setIdentifierName(name); 
	bst* currentVars = &table[table.size() - 1]; 
	currentVars->insert(entry(name, *newEntry));
}

/*
Function: symbolTableEntry* searchForSymbol(string symbolToSearch, int& levelSymbolWasFound) const

Description: This function will search the symbol table for the desired symbol and return a pointer
to the corresponding symbol table entry. 
*/
symbolTableEntry* symbolTable::searchForSymbol(string symbolToSearch, int& levelSymbolWasFound){
	if(table.size() == 0){
		levelSymbolWasFound = -1;
		return NULL;
	}

	symTblItr stackItr;
	bstItr treeItr;
	int currentLevel;

	for(currentLevel = table.size()-1; currentLevel >= 0; currentLevel--){
		for(treeItr = table[currentLevel].begin(); treeItr != table[currentLevel].end(); treeItr++){
			// check for the desired symbol
			if (symbolToSearch == treeItr->first) {
				levelSymbolWasFound = currentLevel;
				return &(treeItr->second); 
			}
		}
	}

	levelSymbolWasFound = -1;
	return NULL;
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
symbolTableEntry* symbolTable::searchTopOfStack(string symbolToSearch){
	// check if symbol table is empty
	if (table.size() == 0) {
		return NULL; 
	}
	
	// variables
	//symTblItr firstBST = table[table.size() - 1]; 
	bstItr scopeItr;

	// iterate through the top BST in the symbol table
	for (scopeItr = table[table.size() - 1].begin(); 
			scopeItr != table[table.size() - 1].end(); scopeItr++) {
		// check for the desired symbol
		if (symbolToSearch == scopeItr->first) {
			return &(scopeItr->second); 
		}
	}

	return NULL; 
}

/*
Function: writeSymbolTableContentsToFile()
Return type: void

Description: Will write the contents of the symbol table to a file that
will be located in the "outputFiles" directory.  
*/
void symbolTable::writeToFile() const{
	// variables
	constSymTblItr stackItr;
	constBstItr treeItr;
	int currentLevel;
 
	ofstream outFile;
	outFile.open("../outputFiles/symbolTableContents.txt", ofstream::out); 
	int scopeLevel = table.size(); 
 	if(scopeLevel == -1){
		outFile << "Symbol table is empty!" << endl;
	}

	for(currentLevel = table.size()-1; currentLevel >= 0; currentLevel--){
		outFile << "Scope Level " << currentLevel << ":" << endl;
		for(treeItr = table[currentLevel].begin(); treeItr != table[currentLevel].end(); treeItr++){
			outFile << "\tVariable: " << treeItr->first << endl;
		}
	}

	// file writing complete 
	outFile.close(); 	
}

void symbolTable::writeToScreen() const{
	int scopeLevel = table.size(); 
 	if(scopeLevel == -1){
		cout << "Symbol table is empty!" << endl;
	}

	constSymTblItr stackItr;
	constBstItr treeItr;
	int currentLevel;

	for(currentLevel = table.size()-1; currentLevel >= 0; currentLevel--){
		cout << "Scope Level " << currentLevel << ":" << endl;
		for(treeItr = table[currentLevel].begin(); treeItr != table[currentLevel].end(); treeItr++){
			cout << "\tVariable: " << treeItr->first;
			cout << " at Line " << (treeItr->second).getLineNumber() << endl;
		}
	}
}

symbolTable::~symbolTable(){
	//cout << "Destroy symbol table" << endl;
}