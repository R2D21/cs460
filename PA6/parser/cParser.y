/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 28, 2015
Last Modified: October 27, 2015
Class: CS 460 (Compiler Construction)

This is the input file to Bison that will be used in the front end of our
compiler. 

The parser is responsible for two main tasks:
1. Checking for syntax analysis as the tokens are passed from the lexer to the
parser.
2. Performing the appropriate semantic action for each production of the ANSI C
grammar. 

This file is used to created cParser.tab.h, the header file containing all of 
the token declarations that will be used in the lexer.  
*/

/* start of declarations and definitions */
%{
	#include <climits>
	#include <fstream>
	#include <iostream>
	#include <string>
	#include "../classes/symbolTableEntry.h"
	#include "../classes/symbolTable.h"
	#include "../lexer/Escape_Sequences_Colors.h"

	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern std::ofstream outY;
	extern bool inInsertMode;
	extern symbolTable table; 
	//std::vector<parameter> funcParams;
	std::vector<symbolTableEntry*> funcCallingParams; 
	int unaryOperatorChosen = -1;

	// functions needed by bison
	//void assignParams(symbolTableEntry* entry, std::vector<parameter> params);
	//void applyUnaryOperator(void*& value, int unaryToken, symbolTableEntry* entry = NULL)
%}
/* end of declarations and definitions */

/*

*/
%code requires {
	typedef union {
		char _char;
		long long _num;
		long double _dec; // decimal
		char _str[256];
		class symbolTableEntry* _ste;   
	} vals;

	typedef struct {
		int valType; 
		vals val;
		class astNode* astPtr;
	} node;
}

/*

*/
%union {
	node* n;
}

/* inform bison that there will be 1 shift-reduce conflict */
%expect 1

/* Since we can get away without redefining the type of YYSTYPE, 
yylval will remain as an integer in this program. */

/*
%union {
	char* sVal;
	dVal* val;
	class symbolTableEntry* entry; 
};
*/


/* catfishC tokens */
%token IDENTIFIER
%token INTEGER_CONSTANT 
%token FLOATING_CONSTANT 
%token ENUMERATION_CONSTANT 
%token CHARACTER_CONSTANT 
%token STRING_LITERAL 
%token SIZEOF
%token PTR_OP 
%token INC_OP DEC_OP 
%token LEFT_OP RIGHT_OP 
%token LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP 
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN 
%token LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN 
%token TYPEDEF_NAME
%token PLUS MINUS MULT DIV MOD
%token SEMI COLON COMMA AMP
%token ASSIGN TILDE PIPE CARROT DOT
%token BANG QUESTION
%token LPAREN LBRACK LCURL
%token RPAREN RBRACK RCURL
%token LTHAN GTHAN
%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELIPSIS RANGE
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

/* catfishC starting left hand side */
%start translation_unit

/*
%type <entry> translation_unit 
%type <entry> init_declarator
%type <val> initializer     
%type <entry> identifier
%type <entry> declarator
%type <entry> parameter_declaration
%type <entry> direct_declarator
%type <val> constant
*/

	/*
%type <val> constant_expression
%type <val> assignment_expression
%type <val> conditional_expression
%type <val> logical_or_expression
%type <val> logical_and_expression
%type <val> inclusive_or_expression
%type <val> exclusive_or_expression
%type <val> and_expression
%type <val> equality_expression
%type <val> relational_expression
%type <val> shift_expression
%type <val> additive_expression
%type <val> multiplicative_expression
%type <val> cast_expression
%type <val> unary_expression
%type <val> postfix_expression
%type <val> primary_expression
*/

/* end of tokens for ANSI C grammar */ 

/* start of ANSI C grammar and actions */
%%

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declarator compound_statement
	| declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declaration_specifiers declarator declaration_list compound_statement
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier 
	| type_qualifier declaration_specifiers
	;

storage_class_specifier
	: AUTO
	| REGISTER
	| STATIC
	| EXTERN
	| TYPEDEF
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT 
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME
	;

type_qualifier
	: CONST
	| VOLATILE
	;

struct_or_union_specifier
	: struct_or_union identifier '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union identifier
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier
	| type_specifier specifier_qualifier_list
	| type_qualifier
	| type_qualifier specifier_qualifier_list
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM identifier '{' enumerator_list '}'
	| ENUM identifier
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: identifier
	| identifier '=' constant_expression
	;

declarator
	: direct_declarator
	| pointer direct_declarator
	;

direct_declarator
	: identifier
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '(' ')'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	| declaration_specifiers abstract_declarator
	;

identifier_list
	: identifier
	| identifier_list ',' identifier
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: identifier ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

expression_statement
	: ';'
	| expression ';'
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

statement_list
	: statement
	| statement_list statement
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' ';' ';' ')' statement
	| FOR '(' ';' ';' expression ')' statement
	| FOR '(' ';' expression ';' ')' statement
	| FOR '(' ';' expression ';' expression ')' statement
	| FOR '(' expression ';' ';' ')' statement
	| FOR '(' expression ';' ';' expression ')' statement
	| FOR '(' expression ';' expression ';' ')' statement
	| FOR '(' expression ';' expression ';' expression ')' statement
	;

jump_statement
	: GOTO identifier ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

constant_expression
	: conditional_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' identifier
	| postfix_expression PTR_OP identifier
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

primary_expression
	: identifier
	| constant
	| string
	| '(' expression ')'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

constant
	: INTEGER_CONSTANT
	| CHARACTER_CONSTANT
	| FLOATING_CONSTANT
	| ENUMERATION_CONSTANT
	;

string
	: STRING_LITERAL
	;

identifier
	: IDENTIFIER
	;


%% /* end of ANSI C grammar and actions */

/* user code */
void yyerror(const char* s) {

	std::cout << s << std::endl;
	exit(-1);
}

/*
void assignParams(symbolTableEntry* entry, std::vector<parameter> params) {
	if (entry != NULL) {
		for(unsigned int i = 0; i < params.size(); i++) {
			entry->addParameter(params[i]);
		}
	}
} */