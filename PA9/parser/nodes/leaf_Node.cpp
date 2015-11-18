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
threeAC leaf_Node::gen3AC(){
	std::cout << "Generate 3AC for data node" << std::endl;
	threeAC temp;
	switch(dataType) {
		case INT_T:
			temp.str = std::to_string(data._num);
			return temp;
		break;

		case FLOAT_T:
			temp.str = std::to_string(data._dec); 
			return temp;
		break;

		case STE_T: 
			temp.str =  data._ste->getIdentifierName();
			temp.ste = *(data._ste);
			return temp;
		break;

		default:
			out3AC << "3AC not supported for this leaf node." << std::endl;
			temp.str = "";
			return temp;  
		break;
	} 

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



