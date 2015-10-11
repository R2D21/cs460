/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTableEntry.cpp
Created: September 27, 2015
Last Modified: September 27, 2015
Class: CS 460 (Compiler Construction)

This is the implementation file for the objects that will reside in the symbol
table of our C compiler. 
*/

#include "symbolTableEntry.h"

symbolTableEntry::symbolTableEntry() {
	value = 0; 
	cout << "New symbol table entry." << endl;
}

symbolTableEntry::symbolTableEntry(int lineNumber) {
	cout << "New symbol table entry." << endl;
	lineNum = lineNumber;
}

int symbolTableEntry::getLineNumber() const{
	return lineNum;
}

void symbolTableEntry::setIdentifierName(string name) {
	identifierName = name; 
}

string symbolTableEntry::getIdentifierName() const {
	return identifierName; 
}

symbolTableEntry::~symbolTableEntry() {
	cout << "Symbol table entry destructor." << endl; 
}

void symbolTableEntry::setValue(int x) {
	value = x; 
}