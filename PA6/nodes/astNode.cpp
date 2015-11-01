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
}


/*
Function: setSourceCode()  

Description: 
*/
void astNode::setSourceCode( std::vector<std::string> src ){

}


/*
Function: getSourceCode()  

Description: 
*/
std::vector<std::string> astNode::getSourceCode(){

}

/*
Function: getSourceCode()  

Description: 
*/
void astNode::gen3AC(){

}

void astNode::print(int indent){

}

/*
Function: ~astNode() (destructor) 

Description: 
*/
astNode::~astNode(){
	std::cout << "AST Node destructor" << std::endl;

}


