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

	bool LFLAG; /* extern? */
	std::ofstream out;
	out.open("../outputFiles/tokens.txt", std::ofstream::out);

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
"auto"			{
					if(LFLAG){
						out << "< AUTO >";
					}
					return AUTO; 
				}
"break"			{
					if(LFLAG){
						out << "< BREAK >";
					}
					return BREAK; 
				}
"case"			{
					if(LFLAG){
						out << " < CASE >";
					}
					return CASE; 
				}
"char"			{
					if(LFLAG){
						out << "< CHAR >";
					}
					return CHAR; 
				}
"const"			{
					if(LFLAG){
						out << "< CONST >";
					}
					return CONST; 
				}
"continue"		{
					if(LFLAG){
						out << "< CONTINUE >";
					}
					return CONTINUE; 
				}
"default"		{
					if(LFLAG){
						out << "< DEFAULT >";
					}
					return DEFAULT; 
				}
"do"			{
					if(LFLAG){
						out << "< DO >";
					}
					return DO; 
				}
"double"		{
					if(LFLAG){
						out << "< DOUBLE >";
					}
					return DOUBLE; 
				}	
"else"			{
					if(LFLAG){
						out << "< ELSE >";
					}
					return ELSE; 
				}
"enum"			{
					if(LFLAG){
						out << "< ENUM >";
					}
					return ENUM; 
				}
"extern"		{
					if(LFLAG){
						out << "< EXTERN >";
					}
					return EXTERN; 
				}
"float"			{
					if(LFLAG){
						out << "< FLOAT >";
					}
					return FLOAT; 
				}
"for"			{
					if(LFLAG){
						out << "< FOR >";
					}
					return FOR; 
				}
"goto"			{
					if(LFLAG){
						out << "< GOTO >";
					}
					return GOTO; 
				}
"if"			{
					if(LFLAG){
						out << "< IF >";
					}
					return IF;  
				}
"int"			{
					if(LFLAG){
						out << "< INT >";
					}
					return INT; 	
				}
"long"			{
					if(LFLAG){
						out << "< LONG >";
					}
					return LONG; 
				}
"register"		{
					if(LFLAG){
						out << "< REGISTER >";
					}
					return REGISTER; 
				}
"return"		{
					if(LFLAG){
						out << "< RETURN >";
					}
					return RETURN; 
				}
"short"			{
					if(LFLAG){
						out << "< SHORT >";
					}
					return SHORT; 
				}
"signed"		{
					if(LFLAG){
						out << "< SIGNED >";
					}
					return SIGNED; 
				}
"sizeof"		{
					if(LFLAG){
						out << "< SIZEOF >";
					}
					return SIZEOF; 
				}	
"static"		{
					if(LFLAG){
						out << "< STATIC >";
					}
					return STATIC; 
				}
"struct"		{
					if(LFLAG){
						out << "< STRUCT >";
					}
					return STRUCT; 
				}
"switch"		{
					if(LFLAG){
						out << "< SWITCH >";
					}
					return SWITCH; 
				}
"typedef"		{
					if(LFLAG){
						out << "< TYPEDEF >";
					}
					return TYPEDEF; 
				}
"union"			{
					if(LFLAG){
						out << "< UNION >";
					}
					return UNION; 
				}
"unsigned"		{
					if(LFLAG){
						out << "< UNSIGNED >";
					}
					return UNSIGNED; 
				}
"void"			{
					if(LFLAG){
						out << "< VOID >";
					}
					return VOID; 
				}
"volatile"		{
					if(LFLAG){
						out << "< VOLATILE >";
					}
					return VOLATILE; 
				}
"while"			{
					if(LFLAG){
						out << "< WHILE >";
					}
					return WHILE; 
				}
"stringliteral"	{

				}
"->"			{
					if(LFLAG){
						out << "< -> > ";
					}
					return PTR_OP;
				}
"++"			{
					if(LFLAG){
						out << "< ++ > ";
					}
					return INC_OP;
				}
"--"			{
					if(LFLAG){
						out << "< -- > ";
					}
					return DEC_OP;
				}
"<<"			{
					if(LFLAG){
						out << "< << > ";
					}
					return LEFT_OP;
				}
">>"			{
					if(LFLAG){
						out << "< -> > ";
					}
					return RIGHT_OP;
				}
"<="			{
					if(LFLAG){
						out << "< <= > ";
					}
					return LE_OP;
				}
">="			{
					if(LFLAG){
						out << "< >= > ";
					}
					return GE_OP;
				}
"=="			{
					if(LFLAG){
						out << "< == > ";
					}
					return EQ_OP;
				}
"!="			{
					if(LFLAG){
						out << "< != >";
					}
					return NE_OP;
				}
"&&"			{
					if(LFLAG){
						out << "< && >";
					}
					return AND_OP;
				}
"||"			{
					if(LFLAG){
						out << "< || >";
					}
					return OR_OP;
				}
"*="			{
					if(LFLAG){
						out << "< *= >";
					}
					return MUL_ASSIGN;
				}
"/="			{
					if(LFLAG){
						out << "< /= >";
					}
					return DIV_ASSIGN;
				}
"%="			{
					if(LFLAG){
						out << "< %= >";
					}
					return MOD_ASSIGN;
				}
"+="			{
					if(LFLAG){
						out << "< += >";
					}
					return ADD_ASSIGN;
				}
"-="			{
					if(LFLAG){
						out << "< -= >";
					}
					return SUB_ASSIGN;
				}
"<<="			{
					if(LFLAG){
						out << "< <<= >";
					}
					return LEFT_ASSIGN;
				}
">>="			{
					if(LFLAG){
						out << "< >>= >";
					}
					return RIGHT_ASSIGN;
				}
"&="			{
					if(LFLAG){
						out << "< &= >";
					}
					return AND_ASSIGN;
				}
"^="			{
					if(LFLAG){
						out << "< ^= >";
					}
					return XOR_ASSIGN;
				}
"|="			{
					if(LFLAG){
						out << "< |= >";
					}
					return XOR_ASSIGN;
				}
"+"				{
					if(LFLAG){
						out << "< + > ";
					} 
					return PLUS;
				}
"-"				{
					if(LFLAG){
						out << "< - > ";
					} 
					return MINUS;
				}
"*"				{
					if(LFLAG){
						out << "< * > ";
					} 
					return MULT;
				}
"/"				{
					if(LFLAG){
						out << "< / > ";
					} 
					return DIV;
				}
"%"				{
					if(LFLAG){
						out << "< % > ";
					} 
					return MOD;
				}
";"				{
					if(LFLAG){
						out << "< ; > ";
					} 
					return SEMI;
				}
":"				{
					if(LFLAG){
						out << "< : > ";
					} 
					return COLON;
				}
","				{
					if(LFLAG){
						out << "< , > ";
					} 
					return COMMA;
				}
"&"				{
					if(LFLAG){
						out << "< & > ";
					} 
					return AMP;
				}
"="				{
					if(LFLAG){
						out << "< = > ";
					} 
					return EQUALS;/*CHANGE?*/
				}
"~"				{
					if(LFLAG){
						out << "< ~ > ";
					} 
					return TILDE;
				}
"|"				{
					if(LFLAG){
						out << "< | > ";
					} 
					return PIPE;
				}
"^"				{
					if(LFLAG){
						out << "< ^ > ";
					} 
					return CARROT;
				}
"."				{
					if(LFLAG){
						out << "< . > ";
					} 
					return DOT;
				}
"!"				{
					if(LFLAG){
						out << "< ! > ";
					} 
					return BANG;
				}
"?"				{
					if(LFLAG){
						out << "< ? > ";
					} 
					return QUESTION;
				}
"("				{
					if(LFLAG){
						out << "< ( > ";
					} 
					return LPAREN;
				}
"["				{
					if(LFLAG){
						out << "< [ > ";
					} 
					return LBRACK;
				}
"{"				{
					if(LFLAG){
						out << "< { > ";
					} 
					return LCURL;
				}
")"				{
					if(LFLAG){
						out << "< ) > ";
					} 
					return RPAREN;
				}
"]"				{
					if(LFLAG){
						out << "< ] > ";
					} 
					return RBRACK;
				}
"}"				{
					if(LFLAG){
						out << "< } > ";
					} 
					return RCURL;
				}
"<"				{
					if(LFLAG){
						out << "< < > ";
					} 
					return LTHAN;
				}
">"				{
					if(LFLAG){
						out << "< > > ";
					} 
					return GTHAN;
				}
.				{

				}		
%%

/* user code: none for now I think.. */