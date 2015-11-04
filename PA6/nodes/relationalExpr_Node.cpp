/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: relationalExpr_Node.cpp
Created: November 1, 2015
Last Modified: November 1, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the mult expression AST node class of our C compiler.  
*/

#include "relationalExpr_Node.h"

/*
Function: relationalExpr_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
relationalExpr_Node::relationalExpr_Node(astNode* A, astNode* B, int t) : astNode(){

	exprA = A;
	exprB = B;
	type = t;
}

/*
Function: gen3AC()

Description: 
*/
void relationalExpr_Node::gen3AC(){
	std::cout << "Generate 3AC for postfix expression node" << std::endl;
}


/*
Function: print(int indent)

Description: 
*/
void relationalExpr_Node::print(int indent){

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
Function: ~relationalExpr_Node() (destructor) 

Description: 
*/
relationalExpr_Node::~relationalExpr_Node(){

}

