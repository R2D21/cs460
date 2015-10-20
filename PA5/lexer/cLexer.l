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
	#include <cstdlib>
	#include <fstream>
	#include <algorithm>
	#include "../parser/cParser.tab.h"
	#include "../classes/symbolTable.h"


	#define MAX_ID_LEN 64
	#define MAX_STR_LEN 256

	/* externs */
	extern bool LFLAG; 
	extern std::ofstream outL; 
	extern void yyerror(const char* errorMsg);


	/* variables */
	bool inInsertMode = true; // false => "lookup mode"
	dVal* temp = NULL; 
	int colPosition = 0;
	int tabCount = 0; 
	symbolTable table;
	std::string currentSourceCodeLine = ""; 
	std::vector<std::string> sourceCode;
	std::vector<int> typeSpecifiers;   
	bool endline = false;
	bool tab = false;
	bool space = false;
	int numStar = 0;

	/* functions */
	int isValidType(std::vector<int> type);
%}

/* token definitions */
blankspace	[ ]
tab	[\t]
newline	[\n]
digit	[0-9]
number	{digit}+
decimal	{digit}+"."{digit}+
character [a-zA-Z]+
identifier [a-zA-Z][a-zA-Z0-9]*

/* tell flex to read only one input file - THIS COULD CHANGE */
%option noyywrap

/* rules and actions */
%% 
 endline = false;
 space = false;

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
   					typeSpecifiers.push_back(CHAR); 
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
   					typeSpecifiers.push_back(DOUBLE);
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
   					typeSpecifiers.push_back(FLOAT);
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
   					typeSpecifiers.push_back(INT);
					return INT; 	
				}
"long"			{
					if(LFLAG){
						outL << "< LONG >";
					}
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
   					typeSpecifiers.push_back(LONG);
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
   					typeSpecifiers.push_back(SHORT);
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
   					typeSpecifiers.push_back(VOID);
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

					if(yyleng > MAX_ID_LEN){
						std::string error = "WARNING: Identifier ";
						error += yytext + (std::string)" exceeds maximum name length";
						std::cout << error << std::endl;
					}


					std::string newEntry(yytext);
					currentSourceCodeLine += newEntry;
					symbolTableEntry* searchResult;
					int level;

					if (inInsertMode) {
						searchResult = table.searchTopOfStack(newEntry);
						if (searchResult != NULL) {
							char lineNum[15];
							sprintf(lineNum, "%d", searchResult->getLineNumber());
							newEntry = "Variable " + newEntry + " has already been declared here: \n";
							newEntry += "\tLine " + (std::string)lineNum + ": " + sourceCode[searchResult->getLineNumber() - 1] + "\n";
							yyerror(newEntry.c_str());
						}

						else if( (searchResult = table.searchForSymbol(newEntry, level)) != NULL){

							char lineNum[15];
							sprintf(lineNum, "%d", searchResult->getLineNumber());
							std::cout << "WARNING: Variable " << newEntry << " shadows a previously declared identifier here: \n";
							std::cout << "\tLine " + (std::string)lineNum + ": " + sourceCode[searchResult->getLineNumber() - 1] + "\n";
							searchResult = table.insertNewSymbol(newEntry, yylineno);
							searchResult->setNumPtrs(numStar);
							numStar = 0;

							if(!searchResult->setIdentifierType(typeSpecifiers)){
								char lineNum[15];
								sprintf(lineNum, "%d", yylineno);
								std::string error = "ERROR: Invalid data type used here:\n";
								error += "\tLine #" + (std::string)lineNum + (std::string)": ";
								error += currentSourceCodeLine;
								yyerror(error.c_str());
							}
							yylval.entry = searchResult;
							typeSpecifiers.clear();						
							return IDENTIFIER;
						}
						else{
							searchResult = table.insertNewSymbol(newEntry, yylineno);
							searchResult->setNumPtrs(numStar);
							numStar = 0;

							if(!searchResult->setIdentifierType(typeSpecifiers)){
								char lineNum[15];
								sprintf(lineNum, "%d", yylineno);
								std::string error = "ERROR: Invalid data type used here:\n";
								error += "\tLine #" + (std::string)lineNum + (std::string)": ";
								error += currentSourceCodeLine;
								yyerror(error.c_str());
							} 
							colPosition += strlen(yytext);
							yylval.entry = searchResult;
							typeSpecifiers.clear();			
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
					temp->dataType = LONG_LONG_T;
					temp->value._number = atoll(yytext); 
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
					temp->dataType = DOUBLE;
					temp->value._decimal = strtold(yytext, NULL);
					yylval.val = temp;
					temp = NULL;  
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
					
					if(LFLAG){
						outL << "< STRING_LITERAL > ";
					}
					if( yyleng > MAX_STR_LEN ){
						std::string error = "WARNING: String ";
						error += yytext + (std::string)" exceeds maximum string length";
						std::cout << error << std:: endl;
					}/*TODO*/
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
					numStar++;
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
					return LCURL;
				}
")"				{
					if(LFLAG){
						outL << "< ) > ";
					} 
					if(typeSpecifiers.size() != 0){
						if(isValidType(typeSpecifiers) == -1){
							char lineNum[15];
							sprintf(lineNum, "%d", yylineno);
							std::string error = "ERROR: Invalid data type used here:\n";
							error += "\tLine #" + (std::string)lineNum + (std::string)": ";
							error += currentSourceCodeLine;
							yyerror(error.c_str());

						}
					}

					typeSpecifiers.clear();
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
					space = true;
					colPosition += yyleng;
					std::string strTemp(yytext);
   					currentSourceCodeLine += strTemp;
				}
{tab}			{

					colPosition ++;
					currentSourceCodeLine += ' ';
				}
{newline}		{
					if(LFLAG){
						outL << "< NEWLINE >" << std::endl;
						outL << "Line #" << yylineno << ": ";
						outL << currentSourceCodeLine << std::endl;
						outL << "=================================================================" << std::endl;
					

					}
					sourceCode.push_back(currentSourceCodeLine);
					currentSourceCodeLine = "";  
					yylineno++; 
					colPosition = 0;
					endline = true;
				}
"!!S"			{
					table.writeToScreen(); 
				}

"/*"[^"*/"]*"*/"	{	
					std::string comment(yytext);
					yylineno += std::count(comment.begin(), comment.end(), '\n');

				}
"//"(.)*		{
				}
.				{
						std::string token(yytext);
						std::string error = (std::string) "ERROR: Unexpected character " + token;
						error += " here:" + (std::string)"\n";
						error += currentSourceCodeLine + token + (std::string)"\n";
						for(unsigned int i = 0; i < currentSourceCodeLine.length(); i++){
							error += "-";
						}
						error += "^";
						yyerror(error.c_str());
				}		
%%

/* user code: none for now I think.. */

int isValidType(std::vector<int> type){

	// populate the map for each symbol table entry
	// ex: "long long, long int, etc."
	std::map<std::vector<int>, int> validTypes; 
	std::map<std::vector<int> , int>::iterator mapItr;

	std::vector<int> validType;

	// char
	validType.push_back(CHAR);
	validTypes.insert(pair(validType, CHAR_T));
	validType.clear();

	// double
	validType.push_back(DOUBLE);
	validTypes.insert(pair(validType, DOUBLE_T));
	validType.clear();

	// float
	validType.push_back(FLOAT);
	validTypes.insert(pair(validType, FLOAT_T));
	validType.clear();

	// int 
	validType.push_back(INT);
	validTypes.insert(pair(validType, INT_T));
	validType.clear();

	// long
	validType.push_back(LONG);
	validTypes.insert(pair(validType, LONG_T));
	validType.clear();

	// long int
	validType.push_back(LONG);
	validType.push_back(INT);
	validTypes.insert(pair(validType, LONG_T));
	validType.clear();

	// long long
	validType.push_back(LONG);
	validType.push_back(LONG);
	validTypes.insert(pair(validType, LONG_LONG_T));
	validType.clear();	

	// long long int
	validType.push_back(LONG);
	validType.push_back(LONG);
	validType.push_back(INT);
	validTypes.insert(pair(validType, LONG_LONG_T));
	validType.clear();

	// long double
	validType.push_back(LONG);
	validType.push_back(DOUBLE);
	validTypes.insert(pair(validType, LONG_DOUBLE_T));
	validType.clear();

	// short
	validType.push_back(SHORT);
	validTypes.insert(pair(validType, SHORT_T));
	validType.clear();	

	// short int
	validType.push_back(SHORT);
	validType.push_back(INT);
	validTypes.insert(pair(validType, SHORT_T));
	validType.clear();	

	// void
	validType.push_back(VOID);
	validTypes.insert(pair(validType, VOID_T));
	validType.clear();	



	mapItr = validTypes.find(type);
	if(mapItr != validTypes.end()){
		return mapItr->second;
	}
	return -1;
}