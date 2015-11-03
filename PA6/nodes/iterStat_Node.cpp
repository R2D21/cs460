/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: iterStat_Node.cpp
Created: November 2, 2015
Last Modified: November 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "iterStat_Node.h"

/*
Function: iterStat_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
iterStat_Node::iterStat_Node(astNode* A, astNode* B, astNode* C, astNode* D, bool postCheck) : astNode(){

    exprA = A;
    exprB = B;
    exprC = C;
    exprD = D;
    isPostCheck = postCheck;

}

/*
Function: gen3AC()

Description: 
*/
void iterStat_Node::gen3AC(){
    std::cout << "Generate 3AC for iteration stat node" << std::endl;
}

/*
Function: print(int indent)

Description: 
*/
void iterStat_Node::print(int indent){

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

    for(int i = 0; i < indent; i++){
        std::cout << '\t';
    }
    std::cout << "C: ";
    if( exprC != NULL ){
        exprC->print(indent + 1);
        //std::cout << "AST Node";
    }
    else{
        std::cout << "NULL ";
    }

    std::cout << std::endl;
    for(int i = 0; i < indent; i++){
        std::cout << '\t';
    }
    std::cout << "D: ";
    if( exprD != NULL ){
        exprD->print(indent+1) ;
        //std::cout << "AST Node";
    }
    else{
        std::cout << "NULL ";
    }
}

/*
Function: ~iterStat_Node() (destructor) 

Description: 
*/
iterStat_Node::~iterStat_Node(){

}

