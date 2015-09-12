/*
Name: Wesley Kepke
Assignment: Write the lexical analyzer (using FLEX) for a simple 4-function calculator.
Last Modified: September 12, 2015
Due Date: September 16, 2015
*/

/* definitions */
%{
	#include "calc.tab.h"
	#include "stdlib.h"
%}

delim	[ \t\n]
ws		{delim}+
digit	[0-9]
number	{digit}+

/* tell flex to read only one input file */
%option noyywrap

/* rules and actions */
%%
"+"				{	return PLUS;	}
"-"				{	return MINUS;	}
"*"				{	return MULT;	}
"/"				{	return DIV;		}
";"				{	return SEMI;	}
"("				{	return OPEN;	}
")"				{	return CLOSE;	}
{number}		{	yylval = atoi(yytext);	
					return INTEGER; }
{ws}			{}
.				{	return ERROR;	}		

%%
/* user code */