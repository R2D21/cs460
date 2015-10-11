/*
Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
File: symbolTable.cpp
Created: September 28, 2015
Last Modified: September 28, 2015
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
	#include "../classes/symbolTableEntry.h"
	using namespace std;

	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern ofstream outY;
%}
/* end of declarations and definitions */

/* Since we can get away without redefining the type of YYSTYPE, 
yylval will remain as an integer in this program. */
%union {
	char* sVal;
	float numVal;
	class symbolTableEntry* entry; 
};

/* start of tokens for ANSI C grammar */
%token <entry> IDENTIFIER
%token <numVal> INTEGER_CONSTANT FLOATING_CONSTANT
%token CHARACTER_CONSTANT ENUMERATION_CONSTANT 
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
%token <numVal> ASSIGN TILDE PIPE CARROT DOT
%token BANG QUESTION
%token LPAREN LBRACK LCURL
%token RPAREN RBRACK RCURL
%token LTHAN GTHAN



%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token <numVal> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELIPSIS RANGE

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit

%type <entry> translation_unit 
%type <entry> init_declarator
%type <numVal> initializer     /* this could be anything? */
%type <entry> identifier
%type <entry> declarator
/* end of tokens for ANSI C grammar */ 

/* start of ANSI C grammar and actions */
%%		 
translation_unit
	: external_declaration
		{
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << endl;
				/*outY << $$ << "->" << $1; */
			}
		}
	| translation_unit external_declaration
		{
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << endl;
			}
		}
	;

external_declaration
	: function_definition
		{
			if(YFLAG){
				outY << "external_declaration : function_definition;" << endl;
			}
		}
	| declaration
		{
			if(YFLAG){
				outY << "external_declaration : declaration;" << endl;
			}
		}
	;

function_definition
	: declarator compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << endl;
			}
		}
	| declarator declaration_list compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << endl;
			}
		}
	| declaration_specifiers declarator compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << endl;
			}
		}
	| declaration_specifiers declarator declaration_list compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << endl;
			}
		}
	;

declaration
	: declaration_specifiers SEMI
		{
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << endl << endl;
			}
		}
	| declaration_specifiers init_declarator_list SEMI
		{
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << endl << endl;
			}
		}
	;

declaration_list
	: declaration
		{
			if(YFLAG){
				outY << "declaration_list : declaration;" << endl;
			}
		}
	| declaration_list declaration
		{
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << endl;
			}
		}
	;

declaration_specifiers
	: storage_class_specifier
		{
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << endl;
			}
		}
	| storage_class_specifier declaration_specifiers
		{
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << endl;
			}
		}
	| type_specifier
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << endl;
			}
		}
	| type_specifier declaration_specifiers
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << endl;
			}
		}
	| type_qualifier 
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << endl;
			}
		}
	| type_qualifier declaration_specifiers
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << endl;
			}
		}
	;

storage_class_specifier
	: AUTO
		{
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << endl;
			}
		}
	| REGISTER
		{
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << endl;
			}
		}
	| STATIC
		{
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << endl;
			}
		}
	| EXTERN
		{
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << endl;
			}
		}
	| TYPEDEF
		{
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << endl;
			}
		}
	;

type_specifier
	: VOID
		{
			if(YFLAG){
				outY << "type_specifier : VOID;" << endl;
			}
		}
	| CHAR
		{
			if(YFLAG){
				outY << "type_specifier : CHAR;" << endl;
			}
		}
	| SHORT
		{
			if(YFLAG){
				outY << "type_specifier : SHORT;" << endl;
			}
		}
	| INT
		{
			if(YFLAG){
				outY << "type_specifier : INT;" << endl;
			}
		}
	| LONG
		{
			if(YFLAG){
				outY << "type_specifier : LONG;" << endl;
			}
		}
	| FLOAT
 		{
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << endl;
			}
		}
	| DOUBLE
 		{
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << endl;
			}
		}
	| SIGNED
 		{
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << endl;
			}
		}
	| UNSIGNED
 		{
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << endl;
			}
		}
	| struct_or_union_specifier
 		{
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << endl;
			}
		}
	| enum_specifier
 		{
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << endl;
			}
		}
	| TYPEDEF_NAME
 		{
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << endl;
			}
		}
	;

type_qualifier
	: CONST
 		{
			if(YFLAG){
				outY << "type_qualifier : CONST;" << endl;
			}
		}
	| VOLATILE
 		{
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << endl;
			}
		}
	;

struct_or_union_specifier
	: struct_or_union identifier LCURL struct_declaration_list RCURL
 		{
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << endl;
			}
		}
	| struct_or_union LCURL struct_declaration_list RCURL
 		{
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << endl;
			}
		}
	| struct_or_union identifier
 		{
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << endl;
			}
		}
	;

struct_or_union
	: STRUCT
 		{
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << endl;
			}
		}
	| UNION
 		{
			if(YFLAG){
				outY << "struct_or_union : UNION;" << endl;
			}
		}
	;

struct_declaration_list
	: struct_declaration
 		{
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << endl;
			}
		}
	| struct_declaration_list struct_declaration
 		{
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << endl;
			}
		}
	;

init_declarator_list
	: init_declarator
 		{
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << endl;
			}
		}
	| init_declarator_list COMMA init_declarator
 		{
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << endl;
			}
		}
	;

init_declarator
	: declarator
 		{
			if(YFLAG){
				outY << "init_declarator : declarator;" << endl;
			}
		}
	| declarator ASSIGN initializer
 		{
 			/*cout << "$$: " << $$.sVal << endl;*/
 			cout << "$1 (declarator): " << $1->getIdentifierName() << endl;
 			cout << "$2 (assign): " << $2 << endl;
 			cout << "$3 (initializer): " << $3 << endl; 
 			$1->setValue($3);
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << endl;
			}
		}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMI
 		{
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << endl << endl;
			}
		}
	;

specifier_qualifier_list
	: type_specifier
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << endl;
			}
		}
	| type_specifier specifier_qualifier_list
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << endl;
			}
		}
	| type_qualifier
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << endl;
			}
		}
	| type_qualifier specifier_qualifier_list
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << endl;
			}
		}
	;

struct_declarator_list
	: struct_declarator
 		{
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << endl;
			}
		}
	| struct_declarator_list COMMA struct_declarator
 		{
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << endl;
			}
		}
	;

struct_declarator
	: declarator
 		{
			if(YFLAG){
				outY << "struct_declarator : declarator;" << endl;
			}
		}
	| COLON constant_expression
 		{
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << endl;
			}
		}
	| declarator COLON constant_expression
 		{
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << endl;
			}
		}
	;

enum_specifier
	: ENUM LCURL enumerator_list RCURL
 		{
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << endl;
			}
		}
	| ENUM identifier LCURL enumerator_list RCURL
 		{
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << endl;
			}
		}
	| ENUM identifier
 		{
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << endl;
			}
		}
	;

enumerator_list
	: enumerator
 		{
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << endl;
			}
		}
	| enumerator_list COMMA enumerator
 		{
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << endl;
			}
		}
	;

enumerator
	: identifier
 		{
			if(YFLAG){
				outY << "enumerator : identifier;" << endl;
			}
		}
	| identifier ASSIGN constant_expression
 		{
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << endl;
			}
		}
	;

declarator
	: direct_declarator
 		{
			if(YFLAG){
				outY << "declarator : direct_declarator;" << endl;
			}
		}
	| pointer direct_declarator
 		{
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << endl;
			}
		}
	;

direct_declarator
	: identifier
 		{
			if(YFLAG){
				outY << "direct_declarator : identifier;" << endl;
			}
		}
	| LPAREN declarator RPAREN
 		{
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << endl;
			}
		}
	| direct_declarator LBRACK RBRACK
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << endl;
			}
		}
	| direct_declarator LBRACK constant_expression RBRACK
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << endl;
			}
		}
	| direct_declarator LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << endl;
			}
		}
	| direct_declarator LPAREN parameter_type_list RPAREN
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << endl;
			}
		}
	| direct_declarator LPAREN identifier_list RPAREN
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << endl;
			}
		}
	;

pointer
	: MULT
 		{
			if(YFLAG){
				outY << "pointer : MULT;" << endl;
			}
		}
	| MULT type_qualifier_list
 		{
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << endl;
			}
		}
	| MULT pointer
 		{
			if(YFLAG){
				outY << "pointer : MULT pointer;" << endl;
			}
		}
	| MULT type_qualifier_list pointer
 		{
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << endl;
			}
		}
	;

type_qualifier_list
	: type_qualifier
 		{
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << endl;
			}
		}
	| type_qualifier_list type_qualifier
 		{
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << endl;
			}
		}	
	;

parameter_type_list
	: parameter_list
 		{
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << endl;
			}
		}	
	| parameter_list COMMA ELIPSIS
 		{
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << endl;
			}
		}	
	;

parameter_list
	: parameter_declaration
 		{
			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << endl;
			}
		}	
	| parameter_list COMMA parameter_declaration
 		{
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << endl;
			}
		}	
	;

parameter_declaration
	: declaration_specifiers declarator
 		{
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << endl;
			}
		}
	| declaration_specifiers
 		{
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << endl;
			}
		}
	| declaration_specifiers abstract_declarator
 		{
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << endl;
			}
		}
	;

identifier_list
	: identifier
 		{
			if(YFLAG){
				outY << "identifier_list : identifier;" << endl;
			}
		}
	| identifier_list COMMA identifier
 		{
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << endl;
			}
		}
	;

initializer
	: assignment_expression
 		{
			if(YFLAG){
				outY << "initializer : assignment_expression;" << endl;
			}
		}
	| LCURL initializer_list RCURL
 		{
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << endl;
			}
		}
	| LCURL initializer_list COMMA RCURL
 		{
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << endl;
			}
		}
	;

initializer_list
	: initializer
 		{
			if(YFLAG){
				outY << "initializer_list : initializer;" << endl;
			}
		}
	| initializer_list COMMA initializer
 		{
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << endl;
			}
		}
	;

type_name
	: specifier_qualifier_list
 		{
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << endl;
			}
		}
	| specifier_qualifier_list abstract_declarator
 		{
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << endl;
			}
		}
	;

abstract_declarator
	: pointer
 		{
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << endl;
			}
		}
	| direct_abstract_declarator
 		{
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << endl;
			}
		}
	| pointer direct_abstract_declarator
 		{
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << endl;
			}
		}
	;

direct_abstract_declarator
	: LPAREN abstract_declarator RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << endl;
			}
		}
	;
	| LBRACK RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << endl;
			}
		}
	| LBRACK constant_expression RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << endl;
			}
		}
	| direct_abstract_declarator LBRACK RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << endl;
			}
		}
	| direct_abstract_declarator LBRACK constant_expression RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << endl;
			}
		}
	| LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << endl;
			}
		}
	| LPAREN parameter_type_list RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << endl;
			}
		}
	| direct_abstract_declarator LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << endl;
			}
		}
	| direct_abstract_declarator LPAREN parameter_type_list RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << endl;
			}
		}
	;

statement
	: labeled_statement
 		{
			if(YFLAG){
				outY << "statement : labeled_statement;" << endl;
			}
		}
	| compound_statement
 		{
			if(YFLAG){
				outY << "statement : compound_statement;" << endl;
			}
		}
	| expression_statement
 		{
			if(YFLAG){
				outY << "statement : expression_statement;" << endl;
			}
		}
	| selection_statement
 		{
			if(YFLAG){
				outY << "statement : selection_statement;" << endl;
			}
		}
	| iteration_statement
 		{
			if(YFLAG){
				outY << "statement : iteration_statement;" << endl;
			}
		}
	| jump_statement
 		{
			if(YFLAG){
				outY << "statement : jump_statement;" << endl;
			}
		}
	;

labeled_statement
	: identifier COLON statement
 		{
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << endl;
			}
		}
	| CASE constant_expression COLON statement
 		{
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << endl;
			}
		}
	| DEFAULT COLON statement
 		{
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << endl;
			}
		}
	;

expression_statement
	: SEMI
 		{
			if(YFLAG){
				outY << "expression_statement : SEMI;" << endl;
			}
		}
	| expression SEMI
 		{
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << endl;
			}
		}
	;

compound_statement
	: LCURL RCURL
 		{
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << endl;
			}
		}						
	| LCURL statement_list RCURL
 		{
			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << endl;
			}
		}					
	| LCURL declaration_list RCURL	
 		{
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << endl;
			}
		}				
	| LCURL declaration_list statement_list RCURL
 		{
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << endl;
			}
		}
	;

statement_list
	: statement
 		{
			if(YFLAG){
				outY << "statement_list : statement;" << endl;
			}
		}
	| statement_list statement
 		{
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << endl;
			}
		}
	;

selection_statement
	: IF LPAREN expression RPAREN statement
 		{
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << endl;
			}
		}
	| IF LPAREN expression RPAREN statement ELSE statement
 		{
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << endl;
			}
		}
	| SWITCH LPAREN expression RPAREN statement
 		{
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << endl;
			}
		}
	;

iteration_statement
	: WHILE LPAREN expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << endl;
			}
		}
	| DO statement WHILE LPAREN expression RPAREN SEMI
 		{
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << endl;
			}
		}
	| FOR LPAREN SEMI SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN SEMI SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN SEMI expression SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN SEMI expression SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN expression SEMI SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN expression SEMI SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN expression SEMI expression SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << endl;
			}
		}
	| FOR LPAREN expression SEMI expression SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << endl;
			}
		}
	;

jump_statement
	: GOTO identifier SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << endl;
			}
		}
	| CONTINUE SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << endl;
			}
		}
	| BREAK SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << endl;
			}
		}
	| RETURN SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << endl;
			}
		}
	| RETURN expression SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << endl;
			}
		}
	;

expression
	: assignment_expression
 		{
			if(YFLAG){
				outY << "expression : assignment_expression;" << endl;
			}
		}
	| expression COMMA assignment_expression
 		{
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << endl;
			}
		}
	;

assignment_expression
	: conditional_expression
 		{
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << endl;
			}
		}
	| unary_expression assignment_operator assignment_expression
 		{
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << endl;
			}
		}
	;

assignment_operator
	: ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << endl;
			}
		}
	| MUL_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << endl;
			}
		}
	| DIV_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << endl;
			}
		}
	| MOD_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << endl;
			}
		}
	| ADD_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << endl;
			}
		}
	| SUB_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << endl;
			}
		}
	| LEFT_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << endl;
			}
		}
	| RIGHT_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << endl;
			}
		}
	| AND_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << endl;
			}
		}
	| XOR_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << endl;
			}
		}
	| OR_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << endl;
			}
		}
	;

conditional_expression
	: logical_or_expression
 		{
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << endl;
			}
		}
	| logical_or_expression QUESTION expression COLON conditional_expression
 		{
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << endl;
			}
		}
	;

constant_expression
	: conditional_expression
 		{
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << endl;
			}
		}
	;

logical_or_expression
	: logical_and_expression
 		{
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << endl;
			}
		}
	| logical_or_expression OR_OP logical_and_expression
 		{
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << endl;
			}
		}
	;

logical_and_expression
	: inclusive_or_expression
 		{
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << endl;
			}
		}
	| logical_and_expression AND_OP inclusive_or_expression
 		{
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << endl;
			}
		}
	;

inclusive_or_expression
	: exclusive_or_expression
 		{
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << endl;
			}
		}
	| inclusive_or_expression PIPE exclusive_or_expression
 		{
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << endl;
			}
		}
	;

exclusive_or_expression
	: and_expression
 		{
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << endl;
			}
		}
	| exclusive_or_expression CARROT and_expression
 		{
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << endl;
			}
		}
	;

and_expression
	: equality_expression
 		{
			if(YFLAG){
				outY << "and_expression : equality_expression;" << endl;
			}
		}
	| and_expression AMP equality_expression
 		{
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << endl;
			}
		}
	;

equality_expression
	: relational_expression
 		{
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << endl;
			}
		}
	| equality_expression EQ_OP relational_expression
 		{
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << endl;
			}
		}
	| equality_expression NE_OP relational_expression
 		{
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << endl;
			}
		}
	;

relational_expression
	: shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << endl;
			}
		}
	| relational_expression LTHAN shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << endl;
			}
		}
	| relational_expression GTHAN shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << endl;
			}
		}
	| relational_expression LE_OP shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << endl;
			}
		}
	| relational_expression GE_OP shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << endl;
			}
		}
	;

shift_expression
	: additive_expression
 		{
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << endl;
			}
		}
	| shift_expression LEFT_OP additive_expression
 		{
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << endl;
			}
		}
	| shift_expression RIGHT_OP additive_expression
 		{
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << endl;
			}
		}
	;

additive_expression
	: multiplicative_expression
 		{
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << endl;
			}
		}
	| additive_expression PLUS multiplicative_expression
 		{
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << endl;
			}
		}
	| additive_expression MINUS multiplicative_expression
 		{
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << endl;
			}
		}
	;

multiplicative_expression
	: cast_expression
 		{
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << endl;
			}
		}
	| multiplicative_expression MULT cast_expression
 		{
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << endl;
			}
		}
	| multiplicative_expression DIV cast_expression
 		{
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << endl;
			}
		}
	| multiplicative_expression MOD cast_expression
 		{
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << endl;
			}
		}
	;

cast_expression
	: unary_expression
 		{
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << endl;
			}
		}
	| LPAREN type_name RPAREN cast_expression
 		{
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << endl;
			}
		}
	;

unary_expression
	: postfix_expression
 		{
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << endl;
			}
		}
	| INC_OP unary_expression
 		{
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << endl;
			}
		}
	| DEC_OP unary_expression
 		{
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << endl;
			}
		}
	| unary_operator cast_expression
 		{
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << endl;
			}
		}
	| SIZEOF unary_expression
 		{
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << endl;
			}
		}
	| SIZEOF LPAREN type_name RPAREN
 		{
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << endl;
			}
		}
	;

unary_operator
	: AMP
 		{
			if(YFLAG){
				outY << "unary_operator : AMP;" << endl;
			}
		}
	| MULT
 		{
			if(YFLAG){
				outY << "unary_operator : MULT;" << endl;
			}
		}
	| PLUS
 		{
			if(YFLAG){
				outY << "unary_operator : PLUS;" << endl;
			}
		}
	| MINUS
 		{
			if(YFLAG){
				outY << "unary_operator : MINUS;" << endl;
			}
		}
	| TILDE
 		{
			if(YFLAG){
				outY << "unary_operator : TILDE;" << endl;
			}
		}
	| BANG
 		{
			if(YFLAG){
				outY << "unary_operator : BANG;" << endl;
			}
		}
	;

postfix_expression
	: primary_expression
 		{
			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << endl;
			}
		}
	| postfix_expression LBRACK expression RBRACK
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << endl;
			}
		}
	| postfix_expression LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << endl;
			}
		}
	| postfix_expression LPAREN argument_expression_list RPAREN
 		{
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << endl;
			}
		}
	| postfix_expression DOT identifier
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << endl;
			}
		}
	| postfix_expression PTR_OP identifier
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << endl;
			}
		}
	| postfix_expression INC_OP
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << endl;
			}
		}
	| postfix_expression DEC_OP
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << endl;
			}
		}
	;

primary_expression
	: identifier
 		{
			if(YFLAG){
				outY << "primary_expression : identifier;" << endl;
			}
		}
	| constant
 		{
			if(YFLAG){
				outY << "primary_expression : constant;" << endl;
			}
		}
	| string
 		{
			if(YFLAG){
				outY << "primary_expression : string;" << endl;
			}
		}
	| LPAREN expression RPAREN
 		{
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << endl;
			}
		}
	;

argument_expression_list
	: assignment_expression
 		{
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << endl;
			}
		}
	| argument_expression_list COMMA assignment_expression
 		{
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << endl;
			}
		}
	;

constant
	: INTEGER_CONSTANT
 		{
			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << endl;
			}
		}
	| CHARACTER_CONSTANT
 		{
			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << endl;
			}
		}
	| FLOATING_CONSTANT
 		{
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << endl;
			}
		}
	| ENUMERATION_CONSTANT
 		{
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << endl;
			}
		}
	;

string
	: STRING_LITERAL
 		{
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << endl;
			}
		}
	;

identifier
	: IDENTIFIER
 		{
			if(YFLAG){
				outY << "identifier : IDENTIFIER;" << endl;
			}
		}
	;
%% /* end of ANSI C grammar and actions */

/* user code */
void yyerror(const char* s) {
	// iterate through 
	for (int i = 0; i < colPosition; i++) {
		cout << "-";
	}
	cout << "^" << endl; 
	cout << "Error on line #" << yylineno << ": " << s << endl;
	exit(-1);
}

