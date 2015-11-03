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
	#include "../nodes/nodeClassList.h"

	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern std::ofstream outY;
	extern std::ofstream outG;
	extern bool inInsertMode;
	extern symbolTable table; 

	std::vector< std::vector<int> > funcParams;
	std::vector<symbolTableEntry*> funcCallingParams; 
	int unaryOperatorChosen = -1;
	symbolTableEntry* currentFunc;
	void performArithmeticOp(node* result, node* lhs, node* rhs, int token);
	void performArithmeticOp_OneSTE(node* result, node* lhs, node* rhs, 
									int token, bool steIsLeftOperand);
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
The datatype of YYSTYPE will be a union that contains a single element,
which is a pointer to a node object. 
*/
%union {
	node* n;
}

/* inform bison that there will be 1 shift-reduce conflict */
%expect 1

/* catfishC tokens */
%token <n> IDENTIFIER
%token <n> INTEGER_CONSTANT 
%token <n> FLOATING_CONSTANT 
%token <n> ENUMERATION_CONSTANT 
%token <n> CHARACTER_CONSTANT 
%token <n> STRING_LITERAL 
%token <n> SIZEOF
%token <n> PTR_OP 
%token <n> INC_OP DEC_OP 
%token <n> LEFT_OP RIGHT_OP 
%token <n> LE_OP GE_OP EQ_OP NE_OP
%token <n> AND_OP OR_OP 
%token <n> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN 
%token <n> LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN 
%token <n> TYPEDEF_NAME
%token <n> PLUS MINUS MULT DIV MOD
%token <n> SEMI COLON COMMA AMP
%token <n> ASSIGN TILDE PIPE CARROT DOT
%token <n> BANG QUESTION
%token <n> LPAREN LBRACK LCURL
%token <n> RPAREN RBRACK RCURL
%token <n> LTHAN GTHAN
%token <n> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <n> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <n> STRUCT UNION ENUM ELIPSIS RANGE
%token <n> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

/* catfishC starting left hand side */
%start start_unit
%type <n> assignment_expression
%type <n> postfix_expression
%type <n> cast_expression
%type <n> unary_expression
%type <n> multiplicative_expression
%type <n> additive_expression
%type <n> parameter_declaration
%type <n> declarator
%type <n> direct_declarator
%type <n> constant_expression
%type <n> initializer
%type <n> init_declarator
%type <n> identifier
%type <n> primary_expression
%type <n> argument_expression_list
%type <n> string 
%type <n> constant

/* start of ANSI C grammar and actions */
%%

start_unit
	:	translation_unit	{table.popLevelOff();}
	;

translation_unit
	: external_declaration
		{
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
	| translation_unit external_declaration
		{
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
	;

external_declaration
	: function_definition
		{
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
	| declaration
		{
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
	;

/*
Have stuff for going into the symbol table here. 
*/
function_definition
	: declarator compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
	| declarator declaration_list compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
	| declaration_specifiers declarator compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
	| declaration_specifiers declarator declaration_list compound_statement
		{
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
	;

/*

*/
declaration
	: declaration_specifiers SEMI
		{
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl;
			}
		}
	| declaration_specifiers init_declarator_list SEMI
		{
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl;
			}
		}
	;

declaration_list
	: set_insert declaration set_lookup
		{
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
	| declaration_list set_insert declaration set_lookup
		{
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
	;

declaration_specifiers
	: storage_class_specifier
		{
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
	| storage_class_specifier declaration_specifiers
		{
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
	| type_specifier
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
	| type_specifier declaration_specifiers
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
	| type_qualifier 
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
	| type_qualifier declaration_specifiers
		{
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
	;

storage_class_specifier
	: AUTO
		{
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
	| REGISTER
		{
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
	| STATIC
		{
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
	| EXTERN
		{
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
	| TYPEDEF
		{
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
	;

type_specifier
	: VOID
		{
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
	| CHAR
		{
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
	| SHORT
		{
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
	| INT
		{
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
	| LONG
		{
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
	| FLOAT
 		{
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
	| DOUBLE
 		{
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
	| SIGNED
 		{
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
	| UNSIGNED
 		{
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
	| struct_or_union_specifier
 		{
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
	| enum_specifier
 		{
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
	| TYPEDEF_NAME
 		{
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
	;

type_qualifier
	: CONST
 		{
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
	| VOLATILE
 		{
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
	;

struct_or_union_specifier
	: struct_or_union identifier LCURL struct_declaration_list RCURL
 		{
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
	| struct_or_union LCURL struct_declaration_list RCURL
 		{
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
	| struct_or_union identifier
 		{
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
	;

struct_or_union
	: STRUCT
 		{
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
	| UNION
 		{
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
	;

struct_declaration_list
	: struct_declaration
 		{
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
	| struct_declaration_list struct_declaration
 		{
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
	;

init_declarator_list
	: init_declarator
 		{
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
	| init_declarator_list COMMA init_declarator
 		{
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
	;

init_declarator
	: declarator
 		{
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
	| declarator ASSIGN set_lookup initializer set_insert
 		{ 
 			if (!$1->val._ste->setIdentifierValue(*$4)) {
 				std::cout << COLOR_NORMAL << COLOR_CYAN_NORMAL << "ERROR:" << COLOR_NORMAL << " Invalid assignment." << std::endl;
 				yyerror("");
 			}
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
			//$1->val._ste->printIdentifierValue(); 
			$$ = $1;
		}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMI
 		{
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl;
			}
		}
	;

specifier_qualifier_list
	: type_specifier
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
	| type_specifier specifier_qualifier_list
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
	| type_qualifier
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
	| type_qualifier specifier_qualifier_list
 		{
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
	;

struct_declarator_list
	: struct_declarator
 		{
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
	| struct_declarator_list COMMA struct_declarator
 		{
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
	;

struct_declarator
	: declarator
 		{
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
	| COLON constant_expression
 		{
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
	| declarator COLON constant_expression
 		{
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
	;

enum_specifier
	: ENUM LCURL enumerator_list RCURL
 		{
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
	| ENUM identifier LCURL enumerator_list RCURL
 		{
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
	| ENUM identifier
 		{
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
	;

enumerator_list
	: enumerator
 		{
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
	| enumerator_list COMMA enumerator
 		{
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
	;

enumerator
	: identifier
 		{
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
	| identifier ASSIGN constant_expression
 		{
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
	;

declarator
	: direct_declarator
 		{
 			{$$ = $1;}
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
	| pointer direct_declarator
 		{
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
	;

direct_declarator
	: identifier
 		{
 			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
	| LPAREN declarator RPAREN
 		{
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
	| direct_declarator LBRACK RBRACK 
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
	| direct_declarator LBRACK constant_expression RBRACK
 		{
 			$1->val._ste->setArray();
 			$1->val._ste->addArrayDimension($3->val._num); 
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
	| direct_declarator LPAREN RPAREN set_insert
 		{
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
	| direct_declarator LPAREN  parameter_type_list RPAREN set_insert
 		{
 			
			$1->val._ste->setFunction(); 
			for (unsigned int i = 0; i < funcParams.size(); i++) {
				$1->val._ste->addParameter(funcParams[i]);
			}
			funcParams.clear();
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
	
		}
	| direct_declarator LPAREN set_lookup identifier_list RPAREN set_insert
 		{
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
	;

pointer
	: MULT
 		{
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
	| MULT type_qualifier_list
 		{
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
	| MULT pointer
 		{
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
	| MULT type_qualifier_list pointer
 		{
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
	;

type_qualifier_list
	: type_qualifier
 		{
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
	| type_qualifier_list type_qualifier
 		{
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}	
	;

parameter_type_list
	: parameter_list
 		{
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}	
	| parameter_list COMMA ELIPSIS
 		{
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}	
	;

parameter_list
	: parameter_declaration
 		{
 			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << std::endl;
			}
		}	
	| parameter_list COMMA parameter_declaration
 		{
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << std::endl;
			}
		}	
	;

parameter_declaration
	: declaration_specifiers declarator
 		{
 			std::vector<int> formalParamType;
 			formalParamType = $2->val._ste->getIdentifierType_Vector();
 			std::string name = $2->val._ste->getIdentifierName(); 
			funcParams.push_back(formalParamType);
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
	| declaration_specifiers
 		{
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
	| declaration_specifiers abstract_declarator
 		{
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
	;

identifier_list
	: identifier
 		{
 			
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
	| identifier_list COMMA identifier
 		{
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
	;

initializer
	: assignment_expression
 		{
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
	| LCURL initializer_list RCURL
 		{
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
	| LCURL initializer_list COMMA RCURL
 		{
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
	;

initializer_list
	: initializer
 		{
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
	| initializer_list COMMA initializer
 		{
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
	;

type_name
	: specifier_qualifier_list
 		{
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
	| specifier_qualifier_list abstract_declarator
 		{
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
	;

abstract_declarator
	: pointer
 		{
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
	| direct_abstract_declarator
 		{
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
	| pointer direct_abstract_declarator
 		{
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
	;

direct_abstract_declarator
	: LPAREN abstract_declarator RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
	;
	| LBRACK RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
	| LBRACK constant_expression RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
	| direct_abstract_declarator LBRACK RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
	| direct_abstract_declarator LBRACK constant_expression RBRACK
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
	| LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
	| LPAREN parameter_type_list RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
	| direct_abstract_declarator LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
	| direct_abstract_declarator LPAREN parameter_type_list RPAREN
 		{
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
	;

statement
	:  labeled_statement
 		{
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
	| compound_statement
 		{
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
	| expression_statement
 		{
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
	| selection_statement
 		{
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
	| iteration_statement
 		{
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
	| jump_statement
 		{
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
	;

labeled_statement
	: identifier COLON statement
 		{
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
	| CASE constant_expression COLON statement
 		{
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
	| DEFAULT COLON statement
 		{
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
	;

expression_statement
	: SEMI
 		{
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
	| expression SEMI
 		{
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
	;

compound_statement
	: LCURL RCURL 
 		{
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}						
	| LCURL open_curl set_lookup statement_list RCURL close_curl
 		{
 			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}					
	| LCURL set_insert_push declaration_list RCURL set_lookup_pop	
 		{

 			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}				
	| LCURL set_insert_push declaration_list set_lookup statement_list RCURL set_lookup_pop {
		  if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
	      }
	    } 
	;

set_insert_push
	:	{
		table.pushLevelOn();
		inInsertMode = true;
		}
	;

set_lookup_pop
	:	{
		table.popLevelOff(); 
		inInsertMode = false;  
		}
	;

set_lookup
	:	{
		inInsertMode = false; 
		}
	;

set_insert
	:	{
		inInsertMode = true; 
		}
	;

open_curl
	:  {
		table.pushLevelOn();
	   }
	;

close_curl
	:	{
		table.popLevelOff();  
		}
	;

statement_list
	: statement
 		{
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
	| statement_list statement
 		{
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
	;

selection_statement
	: IF LPAREN expression RPAREN statement
 		{
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
	| IF LPAREN expression RPAREN statement ELSE statement
 		{
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
	| SWITCH LPAREN expression RPAREN statement
 		{
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
	;

iteration_statement
	: WHILE LPAREN expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
	| DO statement WHILE LPAREN expression RPAREN SEMI
 		{
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
	| FOR LPAREN SEMI SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN SEMI SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN SEMI expression SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN SEMI expression SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN expression SEMI SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN expression SEMI SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN expression SEMI expression SEMI RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
	| FOR LPAREN expression SEMI expression SEMI expression RPAREN statement
 		{
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
	;

jump_statement
	: GOTO identifier SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
	| CONTINUE SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
	| BREAK SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
	| RETURN SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
	| RETURN expression SEMI
 		{
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
	;

expression
	: assignment_expression
 		{
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
	| expression COMMA assignment_expression
 		{
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
	;

assignment_expression
	: conditional_expression
 		{
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
	| unary_expression assignment_operator assignment_expression
 		{
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
	;

assignment_operator
	: ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
	| MUL_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
	| DIV_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
	| MOD_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
	| ADD_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
	| SUB_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
	| LEFT_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
	| RIGHT_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
	| AND_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
	| XOR_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
	| OR_ASSIGN
 		{
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
	;

conditional_expression
	: logical_or_expression
 		{
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
	| logical_or_expression QUESTION expression COLON conditional_expression
 		{
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
	;

constant_expression
	: conditional_expression
 		{
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
	;

logical_or_expression
	: logical_and_expression
 		{
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
	| logical_or_expression OR_OP logical_and_expression
 		{
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
	;

logical_and_expression
	: inclusive_or_expression
 		{
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
	| logical_and_expression AND_OP inclusive_or_expression
 		{
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
	;

inclusive_or_expression
	: exclusive_or_expression
 		{
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
	| inclusive_or_expression PIPE exclusive_or_expression
 		{
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
	;

exclusive_or_expression
	: and_expression
 		{
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
	| exclusive_or_expression CARROT and_expression
 		{
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
	;

and_expression
	: equality_expression
 		{
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
	| and_expression AMP equality_expression
 		{
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
	;

equality_expression
	: relational_expression
 		{
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
	| equality_expression EQ_OP relational_expression
 		{
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
	| equality_expression NE_OP relational_expression
 		{
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
	;

relational_expression
	: shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
	| relational_expression LTHAN shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
	| relational_expression GTHAN shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
	| relational_expression LE_OP shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
	| relational_expression GE_OP shift_expression
 		{
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
	;

shift_expression
	: additive_expression
 		{
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
	| shift_expression LEFT_OP additive_expression
 		{
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
	| shift_expression RIGHT_OP additive_expression
 		{
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
	;

additive_expression
	: multiplicative_expression
 		{
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
	| additive_expression PLUS multiplicative_expression
 		{
 			performArithmeticOp($$, $1, $3, PLUS);
			//$$->val._num = $1->val._num + $3->val._num;
 			/*
 			if ($1-> != NULL) {
 				dVal dTemp = $1->sEntry->getIdentifierValue(); 
 				dTemp.value._number = dTemp.value._number + $3->value._number;
 				$$ = &dTemp; 
 			}

 			else {
 				$$->val._num = $1->val._num + $3->val._num;
 			} */
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
	| additive_expression MINUS multiplicative_expression
 		{
 			performArithmeticOp($$, $1, $3, MINUS);
 			//$$->val._num = $1->val._num - $3->val._num;
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
	;

multiplicative_expression
	: cast_expression
 		{
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
	| multiplicative_expression MULT cast_expression
 		{
 			if ($1->valType != STE_T && $3->valType == STE_T) {
 				performArithmeticOp_OneSTE($$, $1, $3, MULT, false);
 			}
 			else if ($1->valType == STE_T && $3->valType != STE_T) {
 				std::cout << "left is an STE and right is not" << std::endl; 
 				performArithmeticOp_OneSTE($$, $1, $3, MULT, true);
 			}

			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
	| multiplicative_expression DIV cast_expression
 		{
 			if ($3->val._num == 0) {
 				yyerror("Unable to divide by 0");
 			}

			if ($1->valType != STE_T && $3->valType == STE_T) {
 				performArithmeticOp_OneSTE($$, $1, $3, DIV, false);
 			}
 			else if ($1->valType == STE_T && $3->valType != STE_T) {
 				std::cout << "left is an STE and right is not" << std::endl; 
 				performArithmeticOp_OneSTE($$, $1, $3, DIV, true);
 			}


			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
	| multiplicative_expression MOD cast_expression
 		{
 			performArithmeticOp($$, $1, $3, MOD);
 			//$$->val._num = $1->val._num % $3->val._num;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
	;

cast_expression
	: unary_expression
 		{
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
	| LPAREN type_name RPAREN cast_expression
 		{
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
	;

unary_expression
	: postfix_expression
 		{
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
	| INC_OP unary_expression /* ++a, ++a[x][y], etc.. */
 		{
 			node* n = $2->val._ste->getIdentifierValue();
 			switch(n->valType) {
 				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
 					n->val._num++;
 					break; 

 				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
 					n->val._dec++;
 					break;

 				case CHAR_T:
 					n->val._char++;
 					break;

 				default:
 					yyerror("Unable to increment.");
 					break;
 			}
 			$2->val._ste->setIdentifierValue(*n);
 			$$ = $2;
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
	| DEC_OP unary_expression /* --a, --a[x][y], etc.. */ 
 		{
 			node* n = $2->val._ste->getIdentifierValue();
 			switch(n->valType) {
 				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
 					n->val._num--;
 					break; 

 				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
 					n->val._dec--;
 					break;

 				case CHAR_T:
 					n->val._char--;
 					break;

 				default:
 					yyerror("Unable to decrement.");
 					break;
 			}
 			$2->val._ste->setIdentifierValue(*n);
 			$$ = $2;
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
	| unary_operator cast_expression /* negative values */
 		{
 			if(unaryOperatorChosen == MINUS) { 
	 			switch($2->valType) {
	 				case LONG_LONG_T:
	 					$2->val._num *= -1;
	 					$$ = $2;  
	 					break; 

	 				case LONG_DOUBLE_T:
	  					$2->val._dec *= -1;
	 					$$ = $2;  
	 					break; 

	 				default:
	 					std::cout << "cast_expression is ???" << std::endl; 
	 					break; 
	 			}
	 			unaryOperatorChosen = -1;
	 		}
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << std::endl;
			}
		}
	| SIZEOF unary_expression
 		{
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
	| SIZEOF LPAREN type_name RPAREN
 		{
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
	;

unary_operator
	: AMP
 		{
 			unaryOperatorChosen = AMP; 
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
	| MULT
 		{
 			unaryOperatorChosen = MULT;
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
	| PLUS
 		{
 			unaryOperatorChosen = PLUS;
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
	| MINUS
 		{
 			unaryOperatorChosen = MINUS;
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
	| TILDE
 		{
 			unaryOperatorChosen = TILDE;
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
	| BANG
 		{
 			unaryOperatorChosen = BANG;
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
	;

postfix_expression
	: primary_expression
 		{
 			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
 			$$ = $1;
 			if($1->valType == STE_T && $1->val._ste->isFunction()){
 				currentFunc = $1->val._ste;
 			} 
 			std::cout << "after assignment" << std::endl; 
 		}
	| postfix_expression set_lookup LBRACK expression RBRACK /* COME BACK TO THIS */
 		{
 			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
	| postfix_expression LPAREN RPAREN
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
	| postfix_expression LPAREN argument_expression_list RPAREN
 		{
 			$1->val._ste = currentFunc; 
  			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}

 			if (!$1->val._ste->checkParams(funcCallingParams)) {
 				std::cout << COLOR_NORMAL << COLOR_CYAN_NORMAL << "ERROR:" << COLOR_NORMAL << " Invalid function arguments." << std::endl;
 				yyerror("");
 			}
 			funcCallingParams.clear();  
		}
	| postfix_expression DOT identifier
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
	| postfix_expression PTR_OP identifier
 		{
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
	| postfix_expression INC_OP /* a++, a[x][y]++. etc.. */
 		{
 			$$ = $1;
 			node* n = $1->val._ste->getIdentifierValue();
 			switch(n->valType) {
 				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
 					n->val._num++;
 					break; 

 				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
 					n->val._dec++;
 					break;

 				case CHAR_T:
 					n->val._char++;
 					break;

 				default:
 					yyerror("Unable to increment.");
 					break;
 			}
 			$1->val._ste->setIdentifierValue(*n);
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
	| postfix_expression DEC_OP /* a--, a[x][y]--, etc.. */
 		{
 			$$ = $1;
 			node* n = $1->val._ste->getIdentifierValue();
 			switch(n->valType) {
 				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
 					n->val._num--;
 					break; 

 				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
 					n->val._dec--;
 					break;

 				case CHAR_T:
 					n->val._char--;
 					break;

 				default:
 					yyerror("Unable to decrement.");
 					break;
 			}
 			$1->val._ste->setIdentifierValue(*n);
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
	;

primary_expression /* no code in this production - just passing stuff up */
	: identifier
 		{
			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
	| constant
 		{
 			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
	| string
 		{
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
	| LPAREN expression RPAREN
 		{
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
	;

argument_expression_list /* used for calling a function with actual parameters */
	: assignment_expression
 		{ 
 			// push back the symbol table entry of the actual parameters
 			funcCallingParams.push_back($1->val._ste);
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
	| argument_expression_list COMMA assignment_expression
 		{
 			// push back the symbol table entry of the actual parameters
 			funcCallingParams.push_back($3->val._ste);
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
	;

constant
	: INTEGER_CONSTANT
 		{
 			// create ast node 
			$1->astPtr = new data_Node($1->val, $1->valType);
			$$ = $1;
 			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}
		}
	| CHARACTER_CONSTANT
 		{
 			// create ast node 
			$1->astPtr = new data_Node($1->val, $1->valType);
			$$ = $1;
			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
	| FLOATING_CONSTANT
 		{
 			// create ast node 
			$1->astPtr = new data_Node($1->val, $1->valType);
			$$ = $1;
 			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
	| ENUMERATION_CONSTANT
 		{
 			/* not sure what to do about this */
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
	;

string
	: STRING_LITERAL
 		{
 			// create ast node
 			$1->astPtr = new data_Node($1->val, $1->valType);
 			$$ = $1; 
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
	;

identifier
	: IDENTIFIER
		{
			// create ast node 
			$1->astPtr = new data_Node($1->val, $1->valType);
			$$ = $1;
			outG << "data_Node -> identifier;" << std::endl;
			if(YFLAG){
				outY << "identifier : IDENTIFIER;" << std::endl;
			}
		}
	;
%% /* end of ANSI C grammar and actions */

/* user code */

/*
Function: yyerror(const char* s)

Description: Used for error messages in both the Flex and Bison files. 
*/
void yyerror(const char* s) {

	std::cout << s << std::endl;
	exit(-1);
}

/*
Function: performArithmeticOp(node* result, node* lhs, node* rhs, int token)

Parameter:
int token: The operator to be applied to the two expressions.
*/
void performArithmeticOp(node* result, node* lhs, node* rhs, int token) {
	bool leftNull = (lhs == NULL);
	bool rightNull = (rhs == NULL);
	bool resultNull = (result == NULL);
	if (leftNull || rightNull || resultNull) {
		yyerror("Unable to perform arithmetic operation; operator is NULL.");
		return; 
	}

	// use the left value as a basis for what to do with the right value
	switch(lhs->valType) {
		// left side is a whole number
		case LONG_LONG_T:
		case LONG_T:
		case INT_T:
		case SHORT_T:
			// determine right side if left side is a whole number
			switch(rhs->valType) {
				// right side is a whole number
				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
					// determine operation
					switch(token) {
						// multiplication
						case MULT:
							result->val._num = lhs->val._num * rhs->val._num; 
							result->valType = LONG_LONG_T;
							break;

						// division
						case DIV:
							result->val._num = lhs->val._num / rhs->val._num; 
							result->valType = LONG_LONG_T;
							break;

						// addition
						case PLUS:
							result->val._num = lhs->val._num + rhs->val._num; 
							result->valType = LONG_LONG_T;
							break;

						// subtraction
						case MINUS:
							result->val._num = lhs->val._num - rhs->val._num; 
							result->valType = LONG_LONG_T;
							break;

						// mod
						case MOD:
							result->val._num = lhs->val._num % rhs->val._num; 
							result->valType = LONG_LONG_T;
							break;

						// unknown
						default:
							yyerror("Unknown operator.");
							break;
					}
					break; 

				// right side is a decimal
				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
					// determine operation
					switch(token) {
						// multiplication
						case MULT:
							result->val._dec = lhs->val._num * rhs->val._dec; 
							result->valType = LONG_DOUBLE_T;
							break;

						// division
						case DIV:
							result->val._dec = lhs->val._num / rhs->val._dec; 
							result->valType = LONG_DOUBLE_T;
							break;

						// addition
						case PLUS:
							result->val._dec = lhs->val._num + rhs->val._dec; 
							result->valType = LONG_DOUBLE_T;
							break;

						// subtraction
						case MINUS:
							result->val._dec = lhs->val._num - rhs->val._dec; 
							result->valType = LONG_DOUBLE_T;
							break;

						// mod
						case MOD:
							yyerror("Modulo not supported between a decimal and a whole number.");
							break;

						// unknown
						default:
							yyerror("Unknown operator.");
							break;
					}
					break;

				// right side is a symbol table entry
				case STE_T:
					// determine type of data from sym. table entry
					node* n = rhs->val._ste->getIdentifierValue(); 
					switch(n->valType) {
						case LONG_LONG_T:
						case LONG_T:
						case INT_T:
						case SHORT_T:
							// determine operation
							switch(token) {
								// multiplication
								case MULT:
									result->val._num = lhs->val._num * n->val._num; 
									result->valType = LONG_LONG_T;	
									break;

								// division
								case DIV:
									result->val._num = lhs->val._num / n->val._num; 
									result->valType = LONG_LONG_T;
									break;

								// addition
								case PLUS:
									result->val._num = lhs->val._num + n->val._num; 
									result->valType = LONG_LONG_T;
									break;

								// subtraction
								case MINUS:
									result->val._num = lhs->val._num - n->val._num; 
									result->valType = LONG_LONG_T;
									break;

								// mod
								case MOD:
									result->val._num = lhs->val._num % n->val._num; 
									result->valType = LONG_LONG_T;
									break;

								// unknown
								default:
									yyerror("Unknown operator.");
									break;
							}
							break;

						case FLOAT_T:
						case DOUBLE_T:
						case LONG_DOUBLE_T:
  							// determine operation
							switch(token) {
								// multiplication
								case MULT:
									result->val._dec = lhs->val._num * n->val._dec; 
									result->valType = LONG_DOUBLE_T;	
									break;

								// division
								case DIV:
									result->val._dec = lhs->val._num / n->val._dec; 
									result->valType = LONG_DOUBLE_T;
									break;

								// addition
								case PLUS:
									result->val._dec = lhs->val._num + n->val._dec; 
									result->valType = LONG_DOUBLE_T;
									break;

								// subtraction
								case MINUS:
									result->val._dec = lhs->val._num - n->val._dec; 
									result->valType = LONG_DOUBLE_T;
									break;

								// mod
								case MOD:
									yyerror("Modulo not supported for whole numbers and decimals");
									break;

								// unknown
								default:
									yyerror("Unknown operator.");
									break;
							}
							break;

						default:
							yyerror("Invalid datatype.");
							break;
					}
					break;
				}
			break; 

		case FLOAT_T:
		case DOUBLE_T:
		case LONG_DOUBLE_T:
			break;

		case STE_T:
			break;

		default:
			yyerror("Unable to perform arithmetic operation; unrecognized data type.");
			break;
	}
}

/*
Function: 
*/
void performArithmeticOp_OneSTE(node* result, node* lhs, node* rhs, 
									int token, bool steIsLeftOperand) {
	bool resultNull = (result == NULL);
	bool lhsNull = (lhs == NULL);
	bool rhsNull = (rhs == NULL);
	node* n = NULL;
	node* staticVal = NULL;  
	int staticValType = 0; 

	// ensure all incoming pointers point to somewhere valid
	if (resultNull || lhsNull || rhsNull) {
		yyerror("Unable to perform arithmetic operation; an operator is NULL.");
		return; 
	}

	// error checking to ensure incoming pointer (node* STE) actually points to
	// a symbol table object 
	if (steIsLeftOperand) {
		if ( (lhs->valType != STE_T) || (lhs->val._ste == NULL) ) {
			yyerror("Variable is not found in symbol table.");
		}
		n = lhs->val._ste->getIdentifierValue();
		staticValType = rhs->valType; 
		staticVal = rhs; 
	}

	else {
		if ( (rhs->valType != STE_T) || (rhs->val._ste == NULL) ) {
			yyerror("Variable is not found in symbol table.");
		}
		n = rhs->val._ste->getIdentifierValue();
		staticValType = lhs->valType;
		staticVal = lhs; 
	}


	// this function was designed to only handle a single symbol table entry pointer
	// and not two of them (see performArithmeticOp_TwoSTE)
	if ( (lhs->valType == STE_T) && (rhs->valType == STE_T) ) {
		yyerror("Function performArithmeticOp_OneSTE can only accept one symbol table entry.");
	}

	// determine data type of the symbol table entry (STE) pointer
	long long wholeVal = n->val._num; 
	long double decimalVal = n->val._dec; 
	switch(n->valType) {
		// STE value is a whole number
		case LONG_LONG_T:
		case LONG_T:
		case INT_T:
		case SHORT_T:
			// determine data type of the static value
			switch(staticValType) {
				// static value is a whole number
				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
					switch(token) {
						case PLUS:
							result->val._num = staticVal->val._num + wholeVal;
							result->valType = LONG_LONG_T;
						break;

						case MINUS:
							if (steIsLeftOperand) {
								result->val._num = wholeVal - staticVal->val._num;
								result->valType = LONG_LONG_T;
							}
							else {
								result->val._num = staticVal->val._num - wholeVal;
								result->valType = LONG_LONG_T;
							}
						break;

						case MULT:
							result->val._num = staticVal->val._num * wholeVal;
							result->valType = LONG_LONG_T;
						break;

						case DIV:
							if (steIsLeftOperand) {
								result->val._num =  wholeVal / staticVal->val._num;
								result->valType = LONG_LONG_T;
							}
							else {
								result->val._num = staticVal->val._num  / wholeVal;
								result->valType = LONG_LONG_T;
							}
						break;

						case MOD: 
							if (steIsLeftOperand) {
								result->val._num = wholeVal % staticVal->val._num;
								result->valType = LONG_LONG_T;
							}
							else {
								result->val._num = staticVal->val._num % wholeVal;
								result->valType = LONG_LONG_T;
							}
						break;

						default:
						break; 
					}
				break;

				// static value is a decimal number
				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
					switch(token) {
						case PLUS:
							result->val._dec = staticVal->val._dec + wholeVal;
							result->valType = LONG_DOUBLE_T;
						break;

						case MINUS:
							if (steIsLeftOperand) {
								result->val._dec = wholeVal - staticVal->val._dec; 
								result->valType = LONG_DOUBLE_T;
							}
							else {
								result->val._dec = staticVal->val._dec - wholeVal;
								result->valType = LONG_DOUBLE_T;
							}
						break;

						case MULT:
							result->val._dec = staticVal->val._dec * wholeVal;
							result->valType = LONG_DOUBLE_T;
						break;

						case DIV:
							if (steIsLeftOperand) {
								result->val._dec = wholeVal / staticVal->val._dec; 
								result->valType = LONG_DOUBLE_T;
							}
							else {
								result->val._dec = staticVal->val._dec / wholeVal;
								result->valType = LONG_DOUBLE_T;
							}
						break;

						case MOD: 
							yyerror("Modulo not supported between whole number and decimal number.");
						break;

						default:
						break; 
					}
				break;

				// static value is a character
				case CHAR_T:
					yyerror("Arithmetic not supported between whole numbers and characters.");
				break;

				default:
				break; 
			}
			break;

		// STE value is a decimal number
		case FLOAT_T:
		case DOUBLE_T:
		case LONG_DOUBLE_T:
			// determine data type of the static value 
			switch(staticValType) {
				// static value is a whole number
				case LONG_LONG_T:
				case LONG_T:
				case INT_T:
				case SHORT_T:
					switch(token) {
						case PLUS:
							result->val._dec = staticVal->val._num + decimalVal;
							result->valType = LONG_DOUBLE_T;
						break;

						case MINUS:
							if (steIsLeftOperand) {
								result->val._dec = decimalVal - staticVal->val._num;
								result->valType = LONG_DOUBLE_T;
							}
							else {
								result->val._dec = staticVal->val._num - decimalVal;
								result->valType = LONG_DOUBLE_T;
							}
						break;

						case MULT:
							result->val._dec = staticVal->val._num * decimalVal;
							result->valType = LONG_DOUBLE_T;
						break;

						case DIV:
							if (steIsLeftOperand) {
								result->val._dec = decimalVal / staticVal->val._num;
								result->valType = LONG_DOUBLE_T;
							}
							else {
								result->val._dec = staticVal->val._num / decimalVal;
								result->valType = LONG_DOUBLE_T;
							}
						break;

						case MOD: 
							yyerror("Modulo not supported between whole number and decimal number.");
						break;

						default:
						break; 
					}
				break;

				// static value is a decimal number
				case FLOAT_T:
				case DOUBLE_T:
				case LONG_DOUBLE_T:
					switch(token) {
						case PLUS:
							result->val._dec = staticVal->val._dec + decimalVal;
							result->valType = LONG_DOUBLE_T;
						break;

						case MINUS:
							if (steIsLeftOperand) {
								result->val._dec = decimalVal - staticVal->val._dec;
								result->valType = LONG_DOUBLE_T;
							}
							else {
								result->val._dec = staticVal->val._dec - decimalVal;
								result->valType = LONG_DOUBLE_T;
							}
						break;

						case MULT:
							result->val._dec = staticVal->val._dec * decimalVal;
							result->valType = LONG_DOUBLE_T;
						break;

						case DIV:
							if (steIsLeftOperand) {
								result->val._dec = decimalVal / staticVal->val._dec;
								result->valType = LONG_DOUBLE_T;
							}
							else {
								result->val._dec = staticVal->val._dec / decimalVal;
								result->valType = LONG_DOUBLE_T;
							}
						break;

						case MOD: 
							yyerror("Modulo not supported between two decimal numbers.");
						break;

						default:
						break; 
					}
				break;

				// static value is a character
				case CHAR_T:
					yyerror("Arithmetic not supported between decimal numbers and characters.");
				break; 
			}
		break;

		// STE value is a character
		case CHAR_T:
			yyerror("Arithmetic not supported for characters.");
			break;

		// STE value is an unrecognized datatype
		default:
			yyerror("Unable to perform arithmetic operation; unrecognized data type.");
			break; 
	}
}