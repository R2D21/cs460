/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: selectionStat_Node.cpp
Created: November 2, 2015
Last Modified: November 2, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the base AST node class of our C compiler.  
*/

#include "selectionStat_Node.h"

/*
Function: selectionStat_Node(astNode* A, astNode* B) (constructor) 

Description: 
*/
selectionStat_Node::selectionStat_Node(astNode* A, astNode* B, astNode* C) : astNode(){

    exprA = A;
    exprB = B;
    exprC = C;
}

/*
Function: gen3AC()

Description: 
*/
void selectionStat_Node::gen3AC(){
    std::cout << "Generate 3AC for selection stat node" << std::endl;
}

/*
Function: print(int indent)

Description: 
*/
void selectionStat_Node::print(int indent){

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
}

/*
Function: ~selectionStat_Node() (destructor) 

Description: 
*/
selectionStat_Node::~selectionStat_Node(){

}

