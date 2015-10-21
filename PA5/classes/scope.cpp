/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: scope.cpp
Created: October 2, 2015
Last Modified: October 15, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the scope class of our C compiler.
*/

// includes
#include "scope.h"

/*
Function: scope() (constructor) 

Description: Allows for instantiation of a new scope object. 
*/
scope::scope() {
	scopeLevel = 0;
	outerScope = 0; 
}

/*
Function: scope() (constructor) 

Description: Allows for instantiation of a new scope object
with corresponding parameters. 
*/
scope::scope(int scopeLvl, int outerS, Bst bstMap) {
	scopeLevel = scopeLvl; 
	outerScope = outerS;
	bst = bstMap;
}

/*
Function: getBst() 

Description: Allows caller to obtain a BST at a specific scope.  
*/
Bst* scope::getBst() {
	return &bst;
}

/*
Function: getOuterScope() 

Description: Returns the outer scope of the current scope.  
*/
int scope::getOuterScope() const{
	return outerScope;
}

/*
Function: getScopeLevel() 

Description: Returns the current scope.  
*/
int scope::getScopeLevel() const{
	return scopeLevel;
}

/*
Function: ~scope() 

Description: Destructor for a scope entry.   
*/
scope::~scope(){
	scopeLevel = 0;
	outerScope = 0;
	std::cout << "scope destr" << std::endl;  
}