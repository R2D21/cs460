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
	#include <climits>
	#include <stdlib.h>
	#include <fstream>
	#include "../parser/cParser.tab.h"
	#include "../classes/symbolTable.h"

	/* externs */
	extern bool LFLAG; 
	extern std::ofstream outL; 
	extern void yyerror(const char* errorMsg);
	bool inInsertMode = false; // false => "lookup mode"
	dVal* temp = NULL; 

	/* variables */
	int colPosition = 0;
	int tabCount = 0; 
	symbolTable table;
	std::string currentSourceCodeLine = ""; 
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
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return AUTO; 
				}
"break"			{
					if(LFLAG){
						outL << "< BREAK >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return BREAK; 
				}
"case"			{
					if(LFLAG){
						outL << " < CASE >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return CASE; 
				}
"char"			{
					if(LFLAG){
						outL << "< CHAR >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return CHAR; 
				}
"const"			{
					if(LFLAG){
						outL << "< CONST >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return CONST; 
				}
"continue"		{
					if(LFLAG){
						outL << "< CONTINUE >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return CONTINUE; 
				}
"default"		{
					if(LFLAG){
						outL << "< DEFAULT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DEFAULT; 
				}
"do"			{
					if(LFLAG){
						outL << "< DO >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DO; 
				}
"double"		{
					if(LFLAG){
						outL << "< DOUBLE >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DOUBLE; 
				}	
"else"			{
					if(LFLAG){
						outL << "< ELSE >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return ELSE; 
				}
"enum"			{
					if(LFLAG){
						outL << "< ENUM >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return ENUM; 
				}
"extern"		{
					if(LFLAG){
						outL << "< EXTERN >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return EXTERN; 
				}
"float"			{
					if(LFLAG){
						outL << "< FLOAT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return FLOAT; 
				}
"for"			{
					if(LFLAG){
						outL << "< FOR >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return FOR; 
				}
"goto"			{
					if(LFLAG){
						outL << "< GOTO >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return GOTO; 
				}
"if"			{
					if(LFLAG){
						outL << "< IF >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return IF;  
				}
"int"			{
					if(LFLAG){
						outL << "< INT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return INT; 	
				}
"long"			{
					if(LFLAG){
						outL << "< LONG >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LONG; 
				}
"register"		{
					if(LFLAG){
						outL << "< REGISTER >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return REGISTER; 
				}
"return"		{
					if(LFLAG){
						outL << "< RETURN >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return RETURN; 
				}
"short"			{
					if(LFLAG){
						outL << "< SHORT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return SHORT; 
				}
"signed"		{
					if(LFLAG){
						outL << "< SIGNED >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return SIGNED; 
				}
"sizeof"		{
					if(LFLAG){
						outL << "< SIZEOF >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return SIZEOF; 
				}	
"static"		{
					if(LFLAG){
						outL << "< STATIC >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return STATIC; 
				}
"struct"		{
					if(LFLAG){
						outL << "< STRUCT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return STRUCT; 
				}
"switch"		{
					if(LFLAG){
						outL << "< SWITCH >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return SWITCH; 
				}
"typedef"		{
					if(LFLAG){
						outL << "< TYPEDEF >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return TYPEDEF; 
				}
"union"			{
					if(LFLAG){
						outL << "< UNION >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return UNION; 
				}
"unsigned"		{
					if(LFLAG){
						outL << "< UNSIGNED >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return UNSIGNED; 
				}
"void"			{
					if(LFLAG){
						outL << "< VOID >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return VOID; 
				}
"volatile"		{
					if(LFLAG){
						outL << "< VOLATILE >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return VOLATILE; 
				}
"while"			{
					if(LFLAG){
						outL << "< WHILE >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return WHILE; 
				}
{identifier}	{
					if(LFLAG){
						outL << "< IDENTIFIER >";
					}

					std::string newEntry(yytext);
					currentSourceCodeLine += newEntry;
					symbolTableEntry* searchResult;
					int level;

					if (inInsertMode) {
						searchResult = table.searchTopOfStack(newEntry);

						if (searchResult != NULL) {
							//std::cout << "found top " << std::endl;
							char lineNum[15];
							//itoa(searchResult->getLineNumber(), lineNum, 10); 
							sprintf(lineNum, "%d", searchResult->getLineNumber());
							newEntry = "Variable " + newEntry + " has already been declared here: \n";
							newEntry += "\tLine " + (std::string)lineNum + ": " + sourceCode[searchResult->getLineNumber() - 1] + "\n";
							yyerror(newEntry.c_str());
						}

						else if( (searchResult =  table.searchForSymbol(newEntry, level)) != NULL){
							char lineNum[15];
							sprintf(lineNum, "%d", searchResult->getLineNumber());
							std::cout << "WARNING: Variable " << newEntry << " shadows a previously declared identifier here: \n";
							std::cout << "\tLine " + (std::string)lineNum + ": " + sourceCode[searchResult->getLineNumber() - 1] + "\n";
						}
						else{
							//std::cout << "not found" << std::endl;
							searchResult = table.insertNewSymbol(newEntry, yylineno); 
							std::cout << "Just inserted: " << newEntry << std::endl;
							colPosition += strlen(yytext);
							yylval.entry = searchResult;
							return IDENTIFIER;
						}
					}
					else{
						searchResult = table.searchForSymbol(newEntry, level);
						if(searchResult == NULL){
							newEntry = "ERROR: " + newEntry + " was not declared in this scope.";
							yyerror(newEntry.c_str());
						}
						else{
							yylval.entry = searchResult;
							return IDENTIFIER;
						}
					}
				}
{number}		{
					if(LFLAG){
						outL << "< INTEGER_CONSTANT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
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
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					temp = new dVal;
					temp->dataType = FLOAT;
					temp->value._float = atof(yytext);
					yylval.val = temp;
					temp = NULL;  
					/*
					yylval.dVal.dataType = FLOAT;
					yylval.dVal.value._float = atof(yytext); */
					return FLOATING_CONSTANT; 		
				}
"'"[a-zA-Z]"'"	{
					if(LFLAG){
						outL << "< CHARACTER_CONSTANT >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					temp = new dVal;
					temp->dataType = CHAR;
					temp->value._char = yytext[1];
					yylval.val = temp;
					temp = NULL;  
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
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return STRING_LITERAL;
				}
"->"			{
					if(LFLAG){
						outL << "< -> > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return PTR_OP;
				}
"++"			{
					if(LFLAG){
						outL << "< ++ > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return INC_OP;
				}
"--"			{
					if(LFLAG){
						outL << "< -- > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DEC_OP;
				}
"<<"			{
					if(LFLAG){
						outL << "< << > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LEFT_OP;
				}
">>"			{
					if(LFLAG){
						outL << "< -> > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return RIGHT_OP;
				}
"<="			{
					if(LFLAG){
						outL << "< <= > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LE_OP;
				}
">="			{
					if(LFLAG){
						outL << "< >= > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return GE_OP;
				}
"=="			{
					if(LFLAG){
						outL << "< == > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return EQ_OP;
				}
"!="			{
					if(LFLAG){
						outL << "< != >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return NE_OP;
				}
"&&"			{
					if(LFLAG){
						outL << "< && >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return AND_OP;
				}
"||"			{
					if(LFLAG){
						outL << "< || >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return OR_OP;
				}
"*="			{
					if(LFLAG){
						outL << "< *= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return MUL_ASSIGN;
				}
"/="			{
					if(LFLAG){
						outL << "< /= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DIV_ASSIGN;
				}
"%="			{
					if(LFLAG){
						outL << "< %= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return MOD_ASSIGN;
				}
"+="			{
					if(LFLAG){
						outL << "< += >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return ADD_ASSIGN;
				}
"-="			{
					if(LFLAG){
						outL << "< -= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return SUB_ASSIGN;
				}
"<<="			{
					if(LFLAG){
						outL << "< <<= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LEFT_ASSIGN;
				}
">>="			{
					if(LFLAG){
						outL << "< >>= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return RIGHT_ASSIGN;
				}
"&="			{
					if(LFLAG){
						outL << "< &= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return AND_ASSIGN;
				}
"^="			{
					if(LFLAG){
						outL << "< ^= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return XOR_ASSIGN;
				}
"|="			{
					if(LFLAG){
						outL << "< |= >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return XOR_ASSIGN;
				}
"+"				{
					if(LFLAG){
						outL << "< + > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return PLUS;
				}
"-"				{
					if(LFLAG){
						outL << "< - > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return MINUS;
				}
"*"				{
					if(LFLAG){
						outL << "< * > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return MULT;
				}
"/"				{
					if(LFLAG){
						outL << "< / > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DIV;
				}
"%"				{
					if(LFLAG){
						outL << "< % > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return MOD;
				}
";"				{
					if(LFLAG){
						outL << "< ; > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return SEMI;
				}
":"				{
					if(LFLAG){
						outL << "< : > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return COLON;
				}
","				{
					if(LFLAG){
						outL << "< , > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return COMMA;
				}
"&"				{
					if(LFLAG){
						outL << "< & > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return AMP;
				}
"="				{
					if(LFLAG){
						outL << "< = > ";
					}					
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return ASSIGN;
				}
"~"				{
					if(LFLAG){
						outL << "< ~ > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return TILDE;
				}
"|"				{
					if(LFLAG){
						outL << "< | > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return PIPE;
				}
"^"				{
					if(LFLAG){
						outL << "< ^ > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return CARROT;
				}
"."				{
					if(LFLAG){
						outL << "< . > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return DOT;
				}
"!"				{
					if(LFLAG){
						outL << "< ! > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return BANG;
				}
"?"				{
					if(LFLAG){
						outL << "< ? > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return QUESTION;
				}
"("				{
					if(LFLAG){
						outL << "< ( > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LPAREN;
				}
"["				{
					if(LFLAG){
						outL << "< [ > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LBRACK;
				}
"{"				{
					if(LFLAG){
						outL << "< { > ";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					std::cout << "PUSHING NEW LEVEL ONTO STACK" << std::endl;
					table.pushLevelOn();   
					return LCURL;
				}
")"				{
					if(LFLAG){
						outL << "< ) > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return RPAREN;
				}
"]"				{
					if(LFLAG){
						outL << "< ] > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return RBRACK;
				}
"}"				{
					if(LFLAG){
						outL << "< } > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return RCURL;
				}
"<"				{
					if(LFLAG){
						outL << "< < > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return LTHAN;
				}
">"				{
					if(LFLAG){
						outL << "< > > ";
					} 
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
					return GTHAN;
				}
{blankspace}	{
					colPosition += yyleng;
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
				}
{newline}		{
					if(LFLAG){
						outL << "< NEWLINE >" << std::endl;
						outL << "Line #" << yylineno << ": ";
						outL << currentSourceCodeLine << std::endl;
						outL << "=================================================================" << std::endl;
					}
					yylineno++; 
					colPosition = 0;
					sourceCode.push_back(currentSourceCodeLine);
					currentSourceCodeLine = "";  
				}
.				{
					if(LFLAG){
						outL << "< NEWLINE >" << std::endl;
						outL << "Line #" << yylineno << ": ";
						outL << currentSourceCodeLine << std::endl;
						outL << "=================================================================" << std::endl;
					}
					/*cout << "ERROR?" << endl; */
					/* found an illegal token, why does this output*/
					/*yyerror("Unknown token..");*/
				}		
%%

/* user code: none for now I think.. */