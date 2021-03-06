/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: expr_Node.cpp
Created: November 2, 2015
Last Modified: November 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "expr_Node.h"

/*
Function: expr_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
expr_Node::expr_Node(astNode* A, astNode* B) : astNode(){

	exprA = A;
	exprB = B;
}

/*
Function: gen3AC()

Description: 
*/
void expr_Node::gen3AC(){
	std::cout << "Generate 3AC for expression node" << std::endl;
}

/*
Function: print(int indent)

Description: 
*/
void expr_Node::print(int indent){

	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	std::cout << "Prefix Expression Node:" << std::endl;
	
	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	std::cout << "A: ";
	if( exprA != NULL ){
		exprA->print(indent + 1);
		//std::cout << "AST Node";
	}
	else{
		std::cout << "NULL ";
	}

	std::cout << std::endl;
	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	std::cout << "B: ";
	if( exprB != NULL ){
		exprB->print(indent+1) ;
		//std::cout << "AST Node";
	}
	else{
		std::cout << "NULL ";
	}
}

/*
Function: ~expr_Node() (destructor) 

Description: 
*/
expr_Node::~expr_Node(){

}

