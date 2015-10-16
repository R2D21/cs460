/*
File: cLexer.l
Created: September 27, 2015
Last Modified: October 15, 2015
Class: CS 460 (Compiler Construction)

This is the input file to Flex that will be used in the front end of our
compiler. 

The lexer is responsible for two main tasks:
1. Scan for tokens and pass these tokens to the parser for syntax analysis.
2. Place as much information into the symbol table as possible. Some of tihis
responsibility is left to the parser. 

Tokens have been declared by Bison and are included in the file 
"cParser.tab.h."
*/

/* lexer definitions */
%{
	/* includes */
	#include <iostream>
	#include <string>
	#include "stdlib.h"
	#include <climits>
	#include <fstream>
	#include "../parser/cParser.tab.h"
	#include "../classes/symbolTable.h"

	/* externs */
	extern bool LFLAG; 
	extern std::ofstream outL; 
	extern void yyerror(const char* errorMsg);
	bool inInsertMode = true; // false => "lookup mode"
	dVal* temp = NULL; 

	/* variables */
	int colPosition = 0;
	int tabCount = 0; 
	symbolTable table;
	std::vector<std::string> sourceCode;  
%}

/* token definitions */
blankspace	[ ]
tab	[\t]
newline	[\n]
digit	[0-9]
number	{digit}+
decimal	{digit}+"."{digit}+
character [a-zA-Z]+
identifier [a-zA-Z][a-zA-z0-9]*

/* tell flex to read only one input file - THIS COULD CHANGE */
%option noyywrap

/* rules and actions */
%%

"auto"			{
					if(LFLAG){
						outL << "< AUTO >";
					}
					return AUTO; 
				}
"break"			{
					if(LFLAG){
						outL << "< BREAK >";
					}
					return BREAK; 
				}
"case"			{
					if(LFLAG){
						outL << " < CASE >";
					}
					return CASE; 
				}
"char"			{
					if(LFLAG){
						outL << "< CHAR >";
					}
					return CHAR; 
				}
"const"			{
					if(LFLAG){
						outL << "< CONST >";
					}
					return CONST; 
				}
"continue"		{
					if(LFLAG){
						outL << "< CONTINUE >";
					}
					return CONTINUE; 
				}
"default"		{
					if(LFLAG){
						outL << "< DEFAULT >";
					}
					return DEFAULT; 
				}
"do"			{
					if(LFLAG){
						outL << "< DO >";
					}
					return DO; 
				}
"double"		{
					if(LFLAG){
						outL << "< DOUBLE >";
					}
					return DOUBLE; 
				}	
"else"			{
					if(LFLAG){
						outL << "< ELSE >";
					}
					return ELSE; 
				}
"enum"			{
					if(LFLAG){
						outL << "< ENUM >";
					}
					return ENUM; 
				}
"extern"		{
					if(LFLAG){
						outL << "< EXTERN >";
					}
					return EXTERN; 
				}
"float"			{
					if(LFLAG){
						outL << "< FLOAT >";
					}
					return FLOAT; 
				}
"for"			{
					if(LFLAG){
						outL << "< FOR >";
					}
					return FOR; 
				}
"goto"			{
					if(LFLAG){
						outL << "< GOTO >";
					}
					return GOTO; 
				}
"if"			{
					if(LFLAG){
						outL << "< IF >";
					}
					return IF;  
				}
"int"			{
					if(LFLAG){
						outL << "< INT >" << std::endl;
						std::cout << "INT" << std::endl;
					}
					return INT; 	
				}
"long"			{
					if(LFLAG){
						outL << "< LONG >";
					}
					return LONG; 
				}
"register"		{
					if(LFLAG){
						outL << "< REGISTER >";
					}
					return REGISTER; 
				}
"return"		{
					if(LFLAG){
						outL << "< RETURN >";
					}
					return RETURN; 
				}
"short"			{
					if(LFLAG){
						outL << "< SHORT >";
					}
					return SHORT; 
				}
"signed"		{
					if(LFLAG){
						outL << "< SIGNED >";
					}
					return SIGNED; 
				}
"sizeof"		{
					if(LFLAG){
						outL << "< SIZEOF >";
					}
					return SIZEOF; 
				}	
"static"		{
					if(LFLAG){
						outL << "< STATIC >";
					}
					return STATIC; 
				}
"struct"		{
					if(LFLAG){
						outL << "< STRUCT >";
					}
					return STRUCT; 
				}
"switch"		{
					if(LFLAG){
						outL << "< SWITCH >";
					}
					return SWITCH; 
				}
"typedef"		{
					if(LFLAG){
						outL << "< TYPEDEF >";
					}
					return TYPEDEF; 
				}
"union"			{
					if(LFLAG){
						outL << "< UNION >";
					}
					return UNION; 
				}
"unsigned"		{
					if(LFLAG){
						outL << "< UNSIGNED >";
					}
					return UNSIGNED; 
				}
"void"			{
					if(LFLAG){
						outL << "< VOID >";
					}
					return VOID; 
				}
"volatile"		{
					if(LFLAG){
						outL << "< VOLATILE >";
					}
					return VOLATILE; 
				}
"while"			{
					if(LFLAG){
						outL << "< WHILE >";
					}
					return WHILE; 
				}
{identifier}	{
					if(LFLAG){
						outL << "< IDENTIFIER >";
					}

					std::string newEntry(yytext);
					table.insertNewSymbol(newEntry, yylineno);
					std::cout << "Just inserted: " << newEntry << std::endl;
					colPosition += strlen(yytext);
					symbolTableEntry* entry = table.searchTopOfStack(newEntry);
					std::cout << "name: " << entry->getIdentifierName() << std::endl; 
					yylval.entry = entry; 
					std::cout << "FROM YYLVAL: ";
					std::cout << yylval.entry->getIdentifierName() << std::endl;
					return IDENTIFIER; 				
				}
{number}		{
					if(LFLAG){
						outL << "< INTEGER_CONSTANT >";
					}
					temp = new dVal;
					temp->dataType = INT;
					temp->value._int = atoi(yytext);
					std::cout << "hi" << std::endl; 
					yylval.val = temp;
					temp = NULL;  
					return INTEGER_CONSTANT; 						
				}
{decimal}		{
					if(LFLAG){
						outL << "< FLOATING_CONSTANT >";
					}
					/*
					yylval.dVal.dataType = FLOAT;
					yylval.dVal.value._float = atof(yytext); */
					return FLOATING_CONSTANT; 		
				}
"'"[a-zA-Z]"'"	{
					if(LFLAG){
						outL << "< CHARACTER_CONSTANT >";
					}
					return CHARACTER_CONSTANT; 		
				}
				/* don't know what this is 
{
						if(LFLAG){
						outL << "< ENUMERATION_CONSTANT >";
					}
					return ENUMERATION_CONSTANT; 		
}
			*/
\"[^\"]*\"	{
					std::cout << "string literal" << std::endl; 
					/* yytext??*/
					if(LFLAG){
						outL << "< STRING_LITERAL > ";
					}
					return STRING_LITERAL;
				}
"->"			{
					if(LFLAG){
						outL << "< -> > ";
					}
					return PTR_OP;
				}
"++"			{
					if(LFLAG){
						outL << "< ++ > ";
					}
					return INC_OP;
				}
"--"			{
					if(LFLAG){
						outL << "< -- > ";
					}
					return DEC_OP;
				}
"<<"			{
					if(LFLAG){
						outL << "< << > ";
					}
					return LEFT_OP;
				}
">>"			{
					if(LFLAG){
						outL << "< -> > ";
					}
					return RIGHT_OP;
				}
"<="			{
					if(LFLAG){
						outL << "< <= > ";
					}
					return LE_OP;
				}
">="			{
					if(LFLAG){
						outL << "< >= > ";
					}
					return GE_OP;
				}
"=="			{
					if(LFLAG){
						outL << "< == > ";
					}
					return EQ_OP;
				}
"!="			{
					if(LFLAG){
						outL << "< != >";
					}
					return NE_OP;
				}
"&&"			{
					if(LFLAG){
						outL << "< && >";
					}
					return AND_OP;
				}
"||"			{
					if(LFLAG){
						outL << "< || >";
					}
					return OR_OP;
				}
"*="			{
					if(LFLAG){
						outL << "< *= >";
					}
					return MUL_ASSIGN;
				}
"/="			{
					if(LFLAG){
						outL << "< /= >";
					}
					return DIV_ASSIGN;
				}
"%="			{
					if(LFLAG){
						outL << "< %= >";
					}
					return MOD_ASSIGN;
				}
"+="			{
					if(LFLAG){
						outL << "< += >";
					}
					return ADD_ASSIGN;
				}
"-="			{
					if(LFLAG){
						outL << "< -= >";
					}
					return SUB_ASSIGN;
				}
"<<="			{
					if(LFLAG){
						outL << "< <<= >";
					}
					return LEFT_ASSIGN;
				}
">>="			{
					if(LFLAG){
						outL << "< >>= >";
					}
					return RIGHT_ASSIGN;
				}
"&="			{
					if(LFLAG){
						outL << "< &= >";
					}
					return AND_ASSIGN;
				}
"^="			{
					if(LFLAG){
						outL << "< ^= >";
					}
					return XOR_ASSIGN;
				}
"|="			{
					if(LFLAG){
						outL << "< |= >";
					}
					return XOR_ASSIGN;
				}
"+"				{
					if(LFLAG){
						outL << "< + > ";
					} 
					return PLUS;
				}
"-"				{
					if(LFLAG){
						outL << "< - > ";
					} 
					return MINUS;
				}
"*"				{
					if(LFLAG){
						outL << "< * > ";
					} 
					return MULT;
				}
"/"				{
					if(LFLAG){
						outL << "< / > ";
					} 
					return DIV;
				}
"%"				{
					if(LFLAG){
						outL << "< % > ";
					} 
					return MOD;
				}
";"				{
					if(LFLAG){
						outL << "< ; > ";
					} 
					return SEMI;
				}
":"				{
					if(LFLAG){
						outL << "< : > ";
					} 
					return COLON;
				}
","				{
					if(LFLAG){
						outL << "< , > ";
					} 
					return COMMA;
				}
"&"				{
					if(LFLAG){
						outL << "< & > ";
					} 
					return AMP;
				}
"="				{
					if(LFLAG){
						outL << "< = > ";
					} 
					return ASSIGN;
				}
"~"				{
					if(LFLAG){
						outL << "< ~ > ";
					} 
					return TILDE;
				}
"|"				{
					if(LFLAG){
						outL << "< | > ";
					} 
					return PIPE;
				}
"^"				{
					if(LFLAG){
						outL << "< ^ > ";
					} 
					return CARROT;
				}
"."				{
					if(LFLAG){
						outL << "< . > ";
					} 
					return DOT;
				}
"!"				{
					if(LFLAG){
						outL << "< ! > ";
					} 
					return BANG;
				}
"?"				{
					if(LFLAG){
						outL << "< ? > ";
					} 
					return QUESTION;
				}
"("				{
					if(LFLAG){
						outL << "< ( > ";
					} 
					return LPAREN;
				}
"["				{
					if(LFLAG){
						outL << "< [ > ";
					} 
					return LBRACK;
				}
"{"				{
					if(LFLAG){
						outL << "< { > ";
					}
					std::cout << "PUSHING NEW LEVEL ONTO STACK" << std::endl;
					table.pushLevelOn();   
					return LCURL;
				}
")"				{
					if(LFLAG){
						outL << "< ) > ";
					} 
					return RPAREN;
				}
"]"				{
					if(LFLAG){
						outL << "< ] > ";
					} 
					return RBRACK;
				}
"}"				{
					if(LFLAG){
						outL << "< } > ";
					} 
					return RCURL;
				}
"<"				{
					if(LFLAG){
						outL << "< < > ";
					} 
					return LTHAN;
				}
">"				{
					if(LFLAG){
						outL << "< > > ";
					} 
					return GTHAN;
				}
{newline}		{
					if(LFLAG){
						outL << "< NEWLINE >" << std::endl;
					}
					yylineno++; 
					colPosition = 0;
					//cout << "newline" << endl;  
				}
.				{

					/*cout << "ERROR?" << endl; */
					/* found an illegal token, why does this output*/
					/*yyerror("Unknown token..");*/
				}		
%%

/* user code: none for now I think.. */