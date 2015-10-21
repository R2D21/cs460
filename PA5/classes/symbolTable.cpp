/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 27, 2015
Last Modified: October 15, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the symbol table of our C compiler.  
*/

// includes
#include "symbolTable.h"

/*
Function: symbolTable() (constructor) 

Description: Allows for instantiation of a new symbol table object. 
*/
symbolTable::symbolTable() {
	// new level is pushed on in the constructor for global scope
	pushLevelOn(); 
}

/*
Function: pushLevelOn()

Description: This function pushes a new scope level onto the stack. 
*/
void symbolTable::pushLevelOn() { 
	Bst* newTree = new Bst();
	int outer = table.size()-1;
	if(outer == -1){
		outer = 0;
	}
	scope* newScope = new scope(table.size(), outer, *newTree);
	table.push_back(*newScope);
}

/*
Function: pushLevelOn()

Description: This function pushes a new scope level onto the stack and
allows the caller to specify an outer scope. 
*/
void symbolTable::pushLevelOn(int outer) {
	Bst* newTree = new Bst();
	scope* newScope = new scope(table.size(), outer, *newTree);
	table.push_back(*newScope);
}

/*
Function: popLevelOff()

Description: This function pops a scope level off of the stack (assuming 
there is a level to pop off). 
*/
void symbolTable::popLevelOff() {
	if (table.size() > 0){
		table.pop_back();
	}
}

/*
Function: insertNewSymbol(std::string name, int line)

Description: This function will add a new entry to the current scope level
on the stack. 

Parameters:
std::string name: The name of the identifier to be added to the current scope 
level. 
int line: The line number that the associated identifier is located at in the
source program. 
*/
symbolTableEntry* symbolTable::insertNewSymbol(std::string name, int line) {
	symbolTableEntry* newEntry = new symbolTableEntry(name, line);
	Bst* currentVars = table[table.size() - 1].getBst();
	currentVars->insert(entry(name, *newEntry));
	bstItr bitr = currentVars->find(name);
	if(bitr != currentVars->end()){
		return &bitr->second; 
	}
	else{
		return NULL;
	}
}

/*
Function: symbolTableEntry* searchForSymbol(std::string symbolToSearch, 
											int& levelSymbolWasFound)
Return type: symbolTableEntry*

Description: This function will search the symbol table for the desired 
symbol and return a pointer to the corresponding symbol table entry. 

This function replies on the function searchHelper() to search for the
symbol. 

Parameters:
std::string symbolToSearch: The name of the identifier to be searched for.
int& levelSymbolWasFound: Will contain the scope level where symbolToSearch
was located. 
*/
symbolTableEntry* symbolTable::searchForSymbol(std::string symbolToSearch, 
												int& levelSymbolWasFound) {
	if(table.size() == 0){
		levelSymbolWasFound = -1;
		return NULL;
	}
	// recursively search the other scopes to see if the symbol can be located
	return searchHelper(symbolToSearch, levelSymbolWasFound, table.size()-1);
}

/*
Function: symbolTableEntry* searchHelper(std::string symbolToSearch, 
											int& levelSymbolWasFound,
											int searchLevel)
Return type: symbolTableEntry*

Description: This function will search through the binary seach tree at a 
specific scope level. If the identifier is not located within the current
binary search tree, the function will recursively check the outer scope levels
to see if the identifier can be located. 

Parameters:
std::string symbolToSearch: The name of the identifier to be searched for.
int& levelSymbolWasFound: Will contain the scope level where symbolToSearch
was located.
int searchLevel: Used to resursively check the outer scope levels of a given
scope.  
*/
symbolTableEntry* symbolTable::searchHelper(std::string symbolToSearch, 
											int&levelSymbolWasFound, 
											int searchLevel){
	// variables
	Bst* searchBST = table[searchLevel].getBst();
	bstItr scopeItr;

	// iterate through the top BST in the symbol table
	for (scopeItr = searchBST->begin(); scopeItr != searchBST->end(); scopeItr++) {
		// check for the desired symbol
		if (symbolToSearch == scopeItr->first) {
			levelSymbolWasFound = searchLevel;
			return &(scopeItr->second); 
		}
	}

	// if identifier not found and in global scope, there is nowhere else
	// to search
	if(searchLevel == 0){
		levelSymbolWasFound = -1;
		return NULL;
	}

	// check next outer scope
	else{
		return searchHelper(symbolToSearch, levelSymbolWasFound, 
							table[searchLevel].getOuterScope());
	}
}

/*
Function: searchForSymbol(std::string symbolToSearch)
Return type: symbolTableEntry*

Description: This function will only search the top of the symbol table
for a given variable. If this variable is found, a pointer to the symbol
table entry's data will be returned. Otherwise, if the function was unable
to locate the symbol table entry or if the symbol table is empty, the 
function will return NULL. 
*/
symbolTableEntry* symbolTable::searchTopOfStack(std::string symbolToSearch) {
	// check if symbol table is empty
	if (table.size() == 0) {
		return NULL; 
	}

	// variables
	Bst* topBST = table[table.size()-1].getBst();
	bstItr scopeItr;

	// iterate through the top BST in the symbol table
	for (scopeItr = topBST->begin(); scopeItr != topBST->end(); scopeItr++) {
		// check for the desired symbol
		if (symbolToSearch == scopeItr->first) {
			return &(scopeItr->second); 
		}
	}
	return NULL; 
}

/*
Function: writeToFile()

Description: Will write the contents of the symbol table to a file that
will be located in the "outputFiles" directory.  
*/
void symbolTable::writeToFile(){
	// variables
	bstItr bstItr; 
	symTblItr symbolTableItr; 
	Bst* currentBst;
	std::ofstream outFile;
	outFile.open("../outputFiles/symbolTableContents.txt", std::ofstream::out); 
	int scopeLevel = table.size() - 1;  

	if(scopeLevel == -1){
		outFile << "Symbol table is empty!" << std::endl;
	}

	else {
		for (symbolTableItr = table.begin(); symbolTableItr != table.end(); symbolTableItr++) {
			currentBst = symbolTableItr->getBst();
			for( int i = 0; i <= symbolTableItr->getScopeLevel(); i++ ){
				outFile << "\t";
			}
			outFile << "Scope Level " << symbolTableItr->getScopeLevel() << " in Scope ";
			outFile << symbolTableItr->getOuterScope() << std::endl;
			if (currentBst->empty() ) {
				outFile << "\tNo identifiers in this scope." << std::endl; 
			}
			else {
				for (bstItr = currentBst->begin(); bstItr != currentBst->end(); bstItr++) {
					for( int i = 0; i < symbolTableItr->getScopeLevel(); i++ ){
						outFile << "\t";
					}
				
					outFile << "\tVariable: " << bstItr->first << std::endl;
					outFile << "\t\tType: " << bstItr->second.getTypeStr() << std:: endl;
				}
			}
		}
	}

	// file writing complete 
	outFile.close(); 	
}

/*
Function: writeToFile()

Description: Will write the contents of the symbol table to the output stream. 
*/
void symbolTable::writeToScreen() {
	// variables
	bstItr bstItr; 
	symTblItr symbolTableItr; 
	Bst* currentBst;
	int scopeLevel = table.size() - 1; 

	if(scopeLevel == -1){
		std::cout << "Symbol table is empty!" << std::endl;
	}

	else {
		for (symbolTableItr = table.begin(); symbolTableItr != table.end(); symbolTableItr++) {
			currentBst = symbolTableItr->getBst();
			for( int i = 0; i <= symbolTableItr->getScopeLevel(); i++ ){
				std::cout << "\t";
			}
			std::cout << "Scope Level " << symbolTableItr->getScopeLevel() << " in Scope ";
			std::cout << symbolTableItr->getOuterScope() << std::endl;
			if (currentBst->empty() ) {
				std::cout << "\tNo identifiers in this scope." << std::endl; 
			}
			else {
				for (bstItr = currentBst->begin(); bstItr != currentBst->end(); bstItr++) {
					for( int i = 0; i < symbolTableItr->getScopeLevel(); i++ ){
						std::cout << "\t";
					}
				
					std::cout << "\tVariable: " << bstItr->first << std::endl;
					for( int i = 0; i < symbolTableItr->getScopeLevel(); i++ ){
						std::cout << "\t";
					}
					std::cout << "\tType: " << bstItr->second.getTypeStr() << std:: endl;
				}
			}
		}
	}
}

/*
Function: getTableSize() const

Description: Returns the size of the symbol table to the caller. 
*/
int symbolTable::getTableSize() const {
	return table.size();
}

/*
Function: ~symbolTable() (destructor)

Description: The destructor for a symbol table object.  
*/
symbolTable::~symbolTable(){
	//table.clear(); 
}