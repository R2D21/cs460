/*
Name: Wesley Kepke
Assignment: Write the LALR parser (using Bison) for a simple 4-function 
calculator.
Last Modified: September 18, 2015
Due Date: September 21, 2015

Grammar - we'll be using the "Old Faithful" grammar for this calculator. 
Expr -> Expr + Term | Expr - Term | Term
Term -> Term * Factor | Term / Factor | Factor
Factor -> ( Expr ) | Id

However, to allow the user to continue using the calculator, two new 
rules have been added to the grammar:
Input -> Line Input | {epsilon}
Line -> Expr SEMI

Finally, I have added some error checking components. For example,
the results of some of the mathematical operations (addition and multiplication) 
are checked to ensure the result does not proceed past the bounds of what can be
represented with an integer datatype. Subtraction and division were not checked
because the grammar does not account for negative numbers and the input for 
division will be checked during lexical analsys (if the numbers being divided 
are too large, the lexer will catch them). 
*/

/* declarations and definitions */
%{
	#include <climits>
	#include <iostream>
	using namespace std;
	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
%}

/* Since we can get away without redefining the type of YYSTYPE, 
yylval will remain as an integer in this program. */

/* tokens */
%start Input
%token PLUS
%token MINUS
%token MULT
%token DIV
%token INTEGER
%token SEMI
%token OPEN
%token CLOSE
%token ERROR

/* grammar and actions */
%%		 
Input	:	Line Input
			|
		;

Line 	:	Expr SEMI {cout << ">> Result: " << $1 << endl;}
		;

Expr	:	Expr PLUS Term		{	unsigned long long int plusResult = $1 + $3;
									if (plusResult > INT_MAX) {
										yyerror("Integer out of range.");
									}
									else {
										$$ = $1 + $3;
									}
								}
			|
			Expr MINUS Term		{$$ = $1 - $3;}
			|
			Term				{$$ = $1;}
		;

Term	:	Term MULT Factor	{	long long int multResult = $1 * $3;
									if ( (multResult > INT_MAX) || 
										(multResult < INT_MIN) ) {
										yyerror("Integer out of range.");
									}
									else { 
										$$ = $1 * $3;
									}
								}
			|
			Term DIV Factor		{	if ($3 == 0) {
										yyerror("Division by 0.");
									}
									else {
										$$ = $1 / $3;
									}
								}
			|	
			Factor				{$$ = $1;}
		;

Factor	:	OPEN Expr CLOSE		{$$ = $2;}
			|
			INTEGER				{$$ = $1;}
		;

%%

/* user code */
void yyerror(const char* s) {
	for (int i = 0; i < colPosition; i++) {
		cout << "-";
	}
	cout << "^" << endl; 
	cout << "Error on line #" << yylineno << ": " << s << endl;
	exit(-1);
}

int main(void) {
	yyparse();
	return 0; 
}