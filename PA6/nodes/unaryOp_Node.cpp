/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: unaryOp_Node.cpp
Created: November 1, 2015
Last Modified: November 1, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the unary op AST node class of our C compiler.  
*/

#include "unaryOp_Node.h"

/*
Function: unaryOp_Node(int t) (constructor) 

Description: 
*/
unaryOp_Node::unaryOp_Node(int t) : astNode(){

	type = t;
}

/*
Function: gen3AC()

Description: 
*/
void unaryOp_Node::gen3AC(){
	std::cout << "Generate 3AC for postfix expression node" << std::endl;
}


/*
Function: print(int indent)

Description: 
*/
void unaryOp_Node::print(int indent){

	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	std::cout << "Unary Op Node:" << std::endl;

}

/*
Function: ~unaryOp_Node() (destructor) 

Description: 
*/
unaryOp_Node::~unaryOp_Node(){

}

