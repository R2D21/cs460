/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: unaryExpr_Node.cpp
Created: November 1, 2015
Last Modified: November 1, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the unary expression list AST node class of our C compiler.  
*/

#include "unaryExpr_Node.h"


/*
Function: unaryExpr_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
unaryExpr_Node::unaryExpr_Node(astNode* A, astNode* B, bool inc, bool dec) : astNode(){
	exprA = A;
	exprB = B;
	incOp = inc;
	decOp = dec; 
	name = "unaryExpr_Node";
	id = idNum;
}


/*
Function: getID() 

Description: returns ID
*/
int unaryExpr_Node::getID() const{
    return id;
}

/*
Function: gen3AC()

Description: 
*/
threeAC unaryExpr_Node::gen3AC(){
	std::cout << "Generate 3AC for postfix expression node" << std::endl;
}


/*
Function: print(int indent)

Description: 
*/
void unaryExpr_Node::print(int indent){

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
Function: ~unaryExpr_Node() (destructor) 

Description: 
*/
unaryExpr_Node::~unaryExpr_Node(){

}

