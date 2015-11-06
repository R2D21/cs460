/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: funcDef_Node.cpp
Created: November 2, 2015
Last Modified: November 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "funcDef_Node.h"

/*
Function: funcDef_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
funcDef_Node::funcDef_Node(astNode* A, astNode* B, astNode* C, astNode* D) : astNode(){

	exprA = A;
	exprB = B;
	exprC = C;
	exprD = D;
	name = "funcDef_Node";
	id = idNum;
}

/*
Function: getID() 

Description: returns ID
*/
int funcDef_Node::getID() const{
	return id;
}


/*
Function: gen3AC()

Description: 
*/
void funcDef_Node::gen3AC(){
	std::cout << "Generate 3AC for expression node" << std::endl;
}

/*
Function: print(int indent)

Description: 
*/
void funcDef_Node::print(int indent){

	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
}

/*
Function: ~funcDef_Node() (destructor) 

Description: 
*/
funcDef_Node::~funcDef_Node(){

}

