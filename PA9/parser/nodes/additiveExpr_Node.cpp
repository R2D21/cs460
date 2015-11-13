/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: additiveExpr_Node.cpp
Created: November 1, 2015
Last Modified: November 1, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "additiveExpr_Node.h"

// Intialize static ID number for this node type

/*
Function: additiveExpr_Node(astNode* A, astNode* B) (constructor) 

Description: Constructor
*/
additiveExpr_Node::additiveExpr_Node(astNode* A, astNode* B, int t) : astNode(){

	exprA = A;
	exprB = B;
	type = t;
	name = "additiveExpr_Node";
	id = idNum;
}

/*
Function: getID() 

Description: returns ID
*/
int additiveExpr_Node::getID() const{
	return id;
}


/*
Function: gen3AC()

Description: generate 3AC
*/
std::string additiveExpr_Node::gen3AC(std::string a_Addr, std::string b_Addr, std::string c_Addr){
	std::cout << "Generate 3AC for postfix expression node" << std::endl;
	std::cout << "a_Addr: " << a_Addr << std::endl;
	std::cout << "b_Addr: " << b_Addr << std::endl; 
	std::cout << "c_Addr: " << c_Addr << std::endl;  
	return (a_Addr + " = " + b_Addr + " + " + c_Addr);
}

/*
Function: print(int indent)

Description: 
*/
void additiveExpr_Node::print(int indent){

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
Function: ~additiveExpr_Node() (destructor) 

Description: 
*/
additiveExpr_Node::~additiveExpr_Node(){

}

