/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: initDecl_Node.cpp
Created: November 2, 2015
Last Modified: November 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "initDecl_Node.h"

/*
Function: initDecl_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
initDecl_Node::initDecl_Node(astNode* A, astNode* B) : astNode(){

	exprA = A;
	exprB = B;
}

/*
Function: gen3AC()

Description: 
*/
void initDecl_Node::gen3AC(){
	std::cout << "Generate 3AC for initialize declarator node" << std::endl;
}

/*
Function: print(int indent)

Description: 
*/
void initDecl_Node::print(int indent){

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
Function: ~initDecl_Node() (destructor) 

Description: 
*/
initDecl_Node::~initDecl_Node(){

}

