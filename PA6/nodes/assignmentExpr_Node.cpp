/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: assignmentExpr_Node.cpp
Created: November 2, 2015
Last Modified: November 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the declaration specifier AST node class of our C compiler.  
*/

#include "assignmentExpr_Node.h"

/*
Function: assignmentExpr_Node(int t) (constructor) 

Description: 
*/
assignmentExpr_Node::assignmentExpr_Node(astNode* A, astNode* B, int t) : astNode(){
	exprA = A;
	exprB = B;
	type = t;
}

/*
Function: gen3AC()

Description: 
*/
void assignmentExpr_Node::gen3AC(){
	std::cout << "Generate 3AC for assignment expression node" << std::endl;
}


/*
Function: print(int indent)

Description: 
*/
void assignmentExpr_Node::print(int indent){

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
		std::cout<< "NULL ";
	}

	std::cout << "B: ";
	if( exprB != NULL ){
		exprB->print(indent + 1);
		//std::cout << "AST Node";
	}
	else{
		std::cout<< "NULL ";
	}

}

/*
Function: ~assignmentExpr_Node() (destructor) 

Description: 
*/
assignmentExpr_Node::~assignmentExpr_Node(){

}

