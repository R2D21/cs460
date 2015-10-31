/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: postfixExpr_Node.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "postfixExpr_Node.h"

/*
Function: iterN() (constructor) 

Description: 
*/
postfixExpr_Node::postfixExpr_Node(astNode* A, astNode* B, bool inc, bool dec) : astNode(){

	exprA = A;
	exprB = B;
	incOp = inc;
	decOp = dec;
}

/*void postfixExpr_Node::astNode::generate3AC(){

}*/

void postfixExpr_Node::print(int indent){

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

	std::cout << std::endl;
	for(int i = 0; i < indent; i++){
		std::cout << '\t';
	}
	if( incOp ){
		std::cout << "Inc operator (++)";
	}
	if( decOp ){
		std::cout << "Dec operator (--)";
	}
}

/*
Function: ~iterN() (destructor) 

Description: 
*/
postfixExpr_Node::~postfixExpr_Node(){
	std::cout << "Postfix Expression Node destructor" << std::endl;

}




std::ostream &operator<<(std::ostream &out, const postfixExpr_Node& node){
	out << "Output Postfix Expr Node";
/*
	out << "A: ";
	if( node.exprA != NULL ){
		//out << *(node.exprA) ;
		out << "Some ast node";
	}
	else{
		out << "NULL ";
	}
	if( node.exprB != NULL ){
		//out << *(node.exprB) ;
		out << "Some ast node";
	}
	else{
		out << "NULL ";
	}
	if( node.incOp ){
		out << "++";
	}
	if( node.decOp ){
		out << "--";
	}
	out << std::endl;*/
	return out;
}