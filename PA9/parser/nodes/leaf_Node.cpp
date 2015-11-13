/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: leaf_Node.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "leaf_Node.h"

/*
Function: leaf_Node() (constructor) 

Description: 
*/
leaf_Node::leaf_Node(const vals& d, int dt, std::string n) : astNode(){
	data = d;
	dataType = dt;
	name = n;
	id = idNum;
}

/*
Function: getID() 

Description: returns ID
*/
int leaf_Node::getID() const{
	return id;
}

/*
Function: gen3AC() 

Description: 
*/
void leaf_Node::gen3AC(){
	std::cout << "Generate 3AC for data node" << std::endl;
}

/*
Function: dataNode() (constructor) 

Description: 
*/
void leaf_Node::print(int indent){

	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	std::cout << "Data Node:" << std::endl;
	
	
}

/*
Function: ~iterN() (destructor) 

Description: 
*/
leaf_Node::~leaf_Node(){
	std::cout << "Data Node destructor" << std::endl;

}



