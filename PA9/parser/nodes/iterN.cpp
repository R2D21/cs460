/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: iterN.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "iterN.h"

/*
Function: iterN() (constructor) 

Description: 
*/
iterN::iterN(astNode* A,astNode* B,astNode* C,astNode*D) : astNode(){

	std::cout << "Iteration Node constructor" << std::endl;
}

std::string iterN::gen3AC() {
	
}

/*
Function: ~iterN() (destructor) 

Description: 
*/
iterN::~iterN(){
	std::cout << "Iteration Node destructor" << std::endl;

}


std::ostream &operator<<(std::ostream &out, const iterN& node){
	out << "Overloaded ostream";
	return out;
}