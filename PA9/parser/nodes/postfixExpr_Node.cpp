/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: postfixExpr_Node.cpp
Created: October 22, 2015
Last Modified: October 22, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the postfix expression AST node class of our C compiler.  
*/

#include "postfixExpr_Node.h"
#include "expr_Node.h"

/*
Function: postfixExpr_Node(astNode* A, astNode* B, bool inc, bool dec) (constructor) 

Description: 
*/
postfixExpr_Node::postfixExpr_Node(astNode* A, astNode* B, bool inc, bool dec) : astNode(){

	exprA = A;
	exprB = B;
	incOp = inc;
	decOp = dec;
	name = "postfixExpr_Node";
	id = idNum;
}

/*
Function: getID() 

Description: returns ID
*/
int postfixExpr_Node::getID() const{
    return id;
}


/*
Function: gen3AC()

Description: 
*/
std::string postfixExpr_Node::gen3AC(){
	std::string reg = "";
	std::string exprA_3AC = "";
	std::string exprB_3AC = "";
	
	// obtain 3AC for exprA
	if (exprA != NULL) {
		exprA_3AC = exprA->gen3AC();
		std::cout << "exprA_3AC: " << exprA_3AC << std::endl;
		out3AC << exprA_3AC << std::endl;  
	}

	// obtain 3AC for exprB
	if (exprB != NULL) {
		exprB_3AC = exprB->gen3AC(); 
		std::cout << "exprB_3AC: " << exprB_3AC << std::endl;
	}

	if (incOp) {
		std::cout << "increment operator" << std::endl; 
	}

/*

	// check for increment
	if (incOp) {
		std::cout << "before register assignment" << std::endl; 
		//reg = intTC();
		std::cout << "new register: " << reg << std::endl;  
		//out3AC << ("ADD " + reg + " " + exprA_3AC + " 1") << std::endl;
		std::cout << "written to file" << std::endl;  
	} */

/*
	// check for decrement
	else if (decOp) {
		reg = intTC(); 
		out3AC << ("SUB " + reg + " " + exprA_3AC + " 1") << std::endl; 
	} */

	// check for array subscript
	else if (dynamic_cast <expr_Node *> (exprB)) {
		std::cout << "array subscript" << std::endl;
		//out3AC << ("MUL " + intTC() + exprA_3AC + "4") << std::endl;
		//out3AC << () << std::endl;  
	} 

	return reg;
}

/*
Function: print(int indent)

Description: 
*/
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



/*
std::ostream &operator<<(std::ostream &out, const postfixExpr_Node& node){
	out << "Output Postfix Expr Node";

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
	out << std::endl;
	return out;
}*/