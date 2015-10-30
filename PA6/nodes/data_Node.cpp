/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: data_Node.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "data_Node.h"

/*
Function: iterN() (constructor) 

Description: 
*/
data_Node::data_Node(const vals& d, int dt) : astNode(){

	std::cout << "Data Node constructor" << std::endl;
	data = d;
	dataType = dt;
}

/*void postfixExpr_Node::astNode::generate3AC(){

}*/

void data_Node::print(int indent){

	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	std::cout << "Data Node:" << std::endl;
	
	
}

/*
Function: ~iterN() (destructor) 

Description: 
*/
data_Node::~data_Node(){
	std::cout << "Data Node destructor" << std::endl;

}



