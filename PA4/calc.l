/*
Name: Wesley Kepke
Assignment: Write the lexical analyzer (using Flex) for a simple 4-function 
calculator.
Last Modified: September 20, 2015
Due Date: September 21, 2015
*/

/* definitions */
%{
	#include "calc.tab.h"
	#include "stdlib.h"
	#include <climits>
	#include <iostream>
	using namespace std; 
	void yyerror(const char* errorMsg);
	int colPosition = 0;
	int tabCount = 0;
%}
 
blankspace	[ ]
tab	[\t]
newline	[\n]
digit	[0-9]
number	{digit}+

/* tell flex to read only one input file */
%option noyywrap

/* rules and actions */
%%
"+"				{colPosition++; return PLUS;}
"-"				{colPosition++; return MINUS;}
"*"				{colPosition++; return MULT;}
"/"				{colPosition++; return DIV;}
";"				{colPosition++; return SEMI;}
"("				{colPosition++; return OPEN;}
")"				{colPosition++; return CLOSE;}
{number}		{	
					long int tempInt = atol(yytext);	
					if (tempInt > INT_MAX) {
						yyerror("Integer out of range.");
					}
					else {
						yylval = atoi(yytext);
						colPosition += yyleng;  	
						return INTEGER;
					}
				}
{blankspace}+	{colPosition += yyleng;}
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
.				{return ERROR;}		
%%

/* user code: none for now I think.. */