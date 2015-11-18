/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: leaf_Node.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)
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
std::string leaf_Node::gen3AC(){
	std::cout << "Generate 3AC for data node" << std::endl;
	switch(dataType) {
		case INT_T:
			return std::to_string(data._num);
		break;

		case FLOAT_T:
			return std::to_string(data._dec);
		break;

		case STE_T:
			return data._ste->getIdentifierName(); 
		break;

		default:
			//out3AC << "3AC not supported for this leaf node." << std::endl;
			return "";  
		break;
	}
	/*
	if (dataType != STE_T) {
		//std::string reg = intTC();
		switch(dataType) {
			case INT_T:
				//out3AC << ("ASSIGN\t" + reg + std::to_string(data._num)) << std::endl;
				return reg;
			break; 

			case FLOAT_T:
				//out3AC << ("ASSIGN\t" + reg + std::to_string(data._dec));
				return reg;
			break; 
		} 
		
	}
	return ""; */
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



