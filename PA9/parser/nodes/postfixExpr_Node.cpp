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

	// check for simple case
	if (exprA != NULL && exprB == NULL && !incOp && !decOp) {
		std::cout << "super basic postfix expr case" << std::endl;
		exprA->gen3AC(); 
	}

	// check for increment
	if (incOp) {
		reg = intTC(); 
		out3AC << ("ADD " + reg + " " + exprA->gen3AC() + " 1") << std::endl;
	} 

	// check for decrement
	else if (decOp) {
		reg = intTC(); 
		out3AC << ("SUB " + reg + " " + exprA->gen3AC() + " 1") << std::endl; 
	} 

	// check for array subscript - this checks to see if exprB points to an expr_Node
	else if ( (exprB != NULL) && (dynamic_cast <expr_Node *> (exprB)) ) {
		std::cout << "ExprA is .. ?" << std::endl;

		std::string firstOffsetCalc = intTC(); 
		out3AC << ("MUL " + firstOffsetCalc + " " + exprB->gen3AC()  + " 4") << std::endl;
		std::string secondOffsetCalc = intTC(); 
		out3AC << ("ADD " + secondOffsetCalc + " " + exprA->gen3AC() + " " + firstOffsetCalc) << std::endl;  
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