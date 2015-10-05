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
	/* includes */
	#include <iostream>
	#include <map>
	#include <string>
	#include <deque>
	#include "stdlib.h"
	#include <climits>
	#include "../parser/cParser.tab.h"
	#include "../classes/symbolTable.h"
	using namespace std; 
	//void yyerror(const char* errorMsg);

	/* variables */
	int colPosition = 0;
	int tabCount = 0; 
%}

/* token definitions */
blankspace	[ ]
tab	[\t]
newline	[\n]
digit	[0-9]
number	{digit}+
identifier [a-zA-Z][a-zA-z0-9]*

/* tell flex to read only one input file - THIS COULD CHANGE */
%option noyywrap

/* rules and actions */
%%
"auto"		{}
"break"		{}
"case"		{}
"char"		{}
"const"		{}
"continue"	{}
"default"	{}
"do"		{}
"double"	{}	
"else"		{}
"enum"		{}
"extern"	{}
"float"		{}
"for"		{}
"goto"		{}
"if"		{}
"int"		{}
"long"		{}
"register"	{}
"return"	{}
"short"		{}
"signed"	{}
"sizeof"	{}	
"static"	{}
"struct"	{}
"switch"	{}
"typedef"	{}
"union"		{}
"unsigned"	{}
"void"		{}
"volatile"	{}
"while"		{}
.			{}		
%%

/* user code: none for now I think.. */