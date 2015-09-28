/*
File: cLexer.l
Created: September 27, 2015
Last Modified: September 27, 2015
Class: CS 460 (Compiler Construction)

This is the input file to Flex that will be used in the front end of our
compiler. 

The lexer is responsible for two main tasks:
1. Scan for tokens and pass these tokens to the parser for syntax analysis.
2. Place all of the appropriate identifier data into the symbol table. 

Tokens have been declared by Bison and are included in the file 
"cParser.tab.h."

We are using the C++ STL for our symbol table (a stack of BSTs). 
More specifically, we are using a deque (used as a stack) of maps (the maps
are responsible for mapping a string (the identifier name) to 
"symbolTableEntry" objects). A "symbolTableEntry" object is an object that we
created and contains all associated information of identifiers (type, scope, 
etc.).  
*/

/* lexer definitions */
%{
	#include "calc.tab.h"
	#include "stdlib.h"
	#include <climits>
	#include <iostream>
	using namespace std; 
	//void yyerror(const char* errorMsg);
	int colPosition = 0;
	int tabCount = 0;
	int variableNumber = 0; 
	#include <map>
	#include <string>
	#include <deque>
	deque< map<string,int> > symbolTable; 
	map<string, int> variables;
	map<string, int>::iterator variablesIterator;  
	deque< map<string, int> >::iterator stackIterator; 
%}
 
blankspace	[ ]
tab	[\t]
newline	[\n]
digit	[0-9]
number	{digit}+
variable [a-zA-Z][a-zA-z0-9]*

/* tell flex to read only one input file */
%option noyywrap

/* rules and actions */
%%
"int"			{
				/*cout << "Found an integer datatype!" << endl;*/
			}
"+"			{colPosition++; return PLUS;}
"-"			{colPosition++; return MINUS;}
"*"			{colPosition++; return MULT;}
"/"			{colPosition++; return DIV;}
";"			{colPosition++; return SEMI;}
"("			{colPosition++; return OPEN;}
")"			{colPosition++; return CLOSE;}
{variable}		{
			colPosition += yyleng;
			string variableToBePutInSymbolTable(yytext);
			variables[variableToBePutInSymbolTable] = variableNumber++; /* add variable to BST (maps are BST)  */
			if (variableNumber % 3 == 0) { /* push symbol table onto stack as if we are entering a new scope/subroutine */
				symbolTable.push_front(variables);
				int stackLevel = 0; 
				/* iterate through the levels of the stack */
				for (stackIterator = symbolTable.begin(); stackIterator != symbolTable.end(); stackIterator++ ) {
					cout << "We are at level #" << stackLevel << " of the stack." << endl;
					/* iterate through the variables stored in the BSTs of the stack entries */  
					for (variablesIterator = stackIterator->begin(); variablesIterator != stackIterator->end(); variablesIterator++) {
						cout << variablesIterator->first << " is variable #" << variablesIterator->second << endl;
					}
					stackLevel++; 
				}
				variables.clear(); 
			}
			}
{number}		{	
			long int tempInt = atol(yytext);	
			if (tempInt > INT_MAX) {
				//yyerror("Integer out of range.");
			}
			else {
				//yylval = atoi(yytext);
				colPosition += yyleng;  	
				return INTEGER;
			}
			}
{blankspace}+		{colPosition += yyleng;}
{tab}			{
			tabCount++; 
			if (colPosition < (tabCount * 8)) {
				colPosition = (tabCount * 8);
			}
			else {
				int nextHighestMultipleOf8 = 8;
				while(colPosition > nextHighestMultipleOf8) {
					nextHighestMultipleOf8 + 8;
				}
					colPosition = nextHighestMultipleOf8;
				} 
			}
{newline}+		{yylineno++; colPosition = 0;}
.			{return ERROR;}		
%%

/* user code: none for now I think.. */
int main(void) {
	yylex();
	return 0; 
}
