/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: astNode.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "astNode.h"

/*
Function: astNode() (constructor) 

Description: 
*/
astNode::astNode(){
	std::cout << "AST Node constructor" << std::endl;
}

/*
Function: ~astNode() (destructor) 

Description: 
*/
astNode::~astNode(){
	std::cout << "AST Node destructor" << std::endl;

}


