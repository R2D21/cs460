/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
Purpose: Using Flex and experimenting with various C++ STL containers. 
Last Modified: September 22, 2015
Due Date: ??, 2015

Currently, the lexer maps strings (variables) to integers because I 
just wanted to see if this even works.. but in the future we will
be mapping strings to a class we create which will hold all of the 
data associated with variables (datatypes, scopes, etc). 

Note: The symbol table is a stack of BSTs. I used a deque (used as a stack)
that contains maps (BSTs). 
*/

/* definitions */
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
