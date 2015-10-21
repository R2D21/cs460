/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 22 "../parser/cParser.y" /* yacc.c:339  */

	#include <climits>
	#include <fstream>
	#include <iostream>
	#include <string.h>
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
	std::vector<parameter> funcParams;
	std::vector<symbolTableEntry*> funcCallingParams; 
	int unaryOperatorChosen = -1;

	// functions needed by bison
	void assignParams(symbolTableEntry* entry, std::vector<parameter> params);
	//void applyUnaryOperator(void*& value, int unaryToken, symbolTableEntry* entry = NULL)

#line 92 "cParser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cParser.tab.h".  */
#ifndef YY_YY_CPARSER_TAB_H_INCLUDED
# define YY_YY_CPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 49 "../parser/cParser.y" /* yacc.c:355  */

	typedef struct {
		class symbolTableEntry* sEntry;
	    int dataType;
	    typedef union {
	        char _char;
	        long long _number;
	        long double _decimal;     
	        char _str[256];   
	    } vals;
	    vals value;
	} dVal;

#line 136 "cParser.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER_CONSTANT = 259,
    FLOATING_CONSTANT = 260,
    ENUMERATION_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    SIZEOF = 264,
    PTR_OP = 265,
    INC_OP = 266,
    DEC_OP = 267,
    LEFT_OP = 268,
    RIGHT_OP = 269,
    LE_OP = 270,
    GE_OP = 271,
    EQ_OP = 272,
    NE_OP = 273,
    AND_OP = 274,
    OR_OP = 275,
    MUL_ASSIGN = 276,
    DIV_ASSIGN = 277,
    MOD_ASSIGN = 278,
    ADD_ASSIGN = 279,
    SUB_ASSIGN = 280,
    LEFT_ASSIGN = 281,
    RIGHT_ASSIGN = 282,
    AND_ASSIGN = 283,
    XOR_ASSIGN = 284,
    OR_ASSIGN = 285,
    TYPEDEF_NAME = 286,
    PLUS = 287,
    MINUS = 288,
    MULT = 289,
    DIV = 290,
    MOD = 291,
    SEMI = 292,
    COLON = 293,
    COMMA = 294,
    AMP = 295,
    ASSIGN = 296,
    TILDE = 297,
    PIPE = 298,
    CARROT = 299,
    DOT = 300,
    BANG = 301,
    QUESTION = 302,
    LPAREN = 303,
    LBRACK = 304,
    LCURL = 305,
    RPAREN = 306,
    RBRACK = 307,
    RCURL = 308,
    LTHAN = 309,
    GTHAN = 310,
    TYPEDEF = 311,
    EXTERN = 312,
    STATIC = 313,
    AUTO = 314,
    REGISTER = 315,
    CHAR = 316,
    SHORT = 317,
    INT = 318,
    LONG = 319,
    SIGNED = 320,
    UNSIGNED = 321,
    FLOAT = 322,
    DOUBLE = 323,
    CONST = 324,
    VOLATILE = 325,
    VOID = 326,
    STRUCT = 327,
    UNION = 328,
    ENUM = 329,
    ELIPSIS = 330,
    RANGE = 331,
    CASE = 332,
    DEFAULT = 333,
    IF = 334,
    ELSE = 335,
    SWITCH = 336,
    WHILE = 337,
    DO = 338,
    FOR = 339,
    GOTO = 340,
    CONTINUE = 341,
    BREAK = 342,
    RETURN = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 68 "../parser/cParser.y" /* yacc.c:355  */

	char* sVal;
	dVal* val;
	class symbolTableEntry* entry; 

#line 243 "cParser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "cParser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  396

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   140,   140,   145,   152,   161,   167,   179,   185,   191,
     197,   209,   215,   224,   230,   239,   245,   251,   257,   263,
     269,   278,   284,   290,   296,   302,   311,   317,   323,   329,
     335,   341,   347,   353,   359,   365,   371,   377,   386,   392,
     401,   407,   413,   422,   428,   437,   443,   452,   458,   467,
     473,   486,   495,   501,   507,   513,   522,   528,   537,   543,
     549,   558,   564,   570,   579,   585,   594,   600,   609,   616,
     625,   632,   638,   644,   655,   661,   671,   680,   686,   692,
     698,   707,   713,   722,   728,   737,   743,   752,   762,   768,
     777,   784,   793,   799,   805,   814,   820,   829,   835,   844,
     850,   856,   865,   872,   878,   884,   890,   896,   902,   908,
     914,   923,   929,   935,   941,   947,   953,   962,   968,   974,
     983,   989,   998,  1004,  1010,  1016,  1024,  1032,  1039,  1045,
    1051,  1057,  1063,  1069,  1078,  1084,  1090,  1099,  1105,  1111,
    1117,  1123,  1129,  1135,  1141,  1147,  1153,  1162,  1168,  1174,
    1180,  1186,  1195,  1201,  1210,  1216,  1225,  1231,  1237,  1243,
    1249,  1255,  1261,  1267,  1273,  1279,  1285,  1294,  1300,  1309,
    1318,  1324,  1333,  1339,  1348,  1354,  1363,  1369,  1378,  1384,
    1393,  1399,  1405,  1414,  1420,  1426,  1432,  1438,  1447,  1453,
    1459,  1468,  1474,  1481,  1491,  1497,  1504,  1514,  1524,  1530,
    1539,  1545,  1551,  1557,  1581,  1587,  1596,  1603,  1610,  1617,
    1624,  1631,  1641,  1647,  1653,  1659,  1670,  1676,  1682,  1688,
    1697,  1704,  1710,  1716,  1725,  1732,  1742,  1750,  1758,  1766,
    1776,  1785
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "ENUMERATION_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF_NAME", "PLUS", "MINUS", "MULT", "DIV", "MOD", "SEMI", "COLON",
  "COMMA", "AMP", "ASSIGN", "TILDE", "PIPE", "CARROT", "DOT", "BANG",
  "QUESTION", "LPAREN", "LBRACK", "LCURL", "RPAREN", "RBRACK", "RCURL",
  "LTHAN", "GTHAN", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELIPSIS",
  "RANGE", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept", "start_unit",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "set_insert_push",
  "set_lookup_pop", "set_lookup", "set_insert", "open_curl", "close_curl",
  "statement_list", "selection_statement", "iteration_statement",
  "jump_statement", "expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "constant_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_expression_list", "constant", "string",
  "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -190

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-190)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     653,  -190,  -190,   -20,   182,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,    13,    37,   653,  -190,  -190,  -190,   105,
    1323,  1323,  1323,  -190,    16,  -190,    36,    76,     6,  -190,
    -190,  -190,   -20,    -6,   132,   112,  -190,  -190,  -190,   165,
    -190,   213,  -190,  -190,  -190,   677,   114,   903,    36,  -190,
    1323,     5,   776,    76,  -190,  -190,  -190,    44,  -190,   141,
     132,  -190,   182,  -190,    36,  -190,   677,   677,   280,  -190,
      75,   677,  -190,  -190,  -190,  -190,  1323,  -190,   105,  -190,
    1323,   132,  -190,  -190,  -190,  -190,  -190,  1183,  1229,  1229,
    -190,  -190,  -190,  -190,  -190,  -190,   565,  -190,  -190,   134,
      -5,   206,   146,   191,   239,   216,    49,   274,   260,   125,
    -190,  -190,  1240,   196,  -190,  -190,  -190,  -190,   132,  -190,
    1240,    63,  -190,   249,  1044,  -190,  -190,  -190,  -190,  -190,
    1240,   178,  -190,   229,  1346,   952,   507,  -190,  -190,    66,
     233,   269,  -190,    34,  -190,   565,  -190,  1240,  -190,  -190,
     103,   259,    90,  -190,  -190,   537,  -190,  1240,  1240,  1240,
    1240,  1240,  1240,  1240,  1240,  1240,  1240,  1240,  1240,  1240,
    1240,  1240,  1240,  1240,  1240,  1240,  -190,   132,  -190,  -190,
     132,   613,  1240,  -190,  -190,  -190,  1044,  -190,  -190,  -190,
    -190,    75,  1240,  -190,  -190,   507,  -190,  1240,   276,   267,
     268,   270,   507,   272,   132,   284,   285,  1063,  -190,  -190,
    -190,  -190,   393,  -190,  -190,  -190,   203,   279,  -190,   609,
     787,  -190,    57,  -190,   247,  -190,  1233,   132,  -190,   277,
    1278,   250,  -190,  1240,  1240,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  1240,   206,   262,
     146,   191,   239,   216,    49,    49,   274,   274,   274,   274,
     260,   260,   125,   125,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,    93,   -13,  -190,    80,  -190,  -190,  -190,  -190,   450,
     287,   507,  1240,  1240,  1240,   241,  1109,   290,  -190,  -190,
    -190,   212,  -190,  -190,  -190,   507,  -190,   278,   281,  -190,
     282,   247,  1302,   837,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  1240,  1240,  -190,  -190,   725,  -190,  -190,
     507,  -190,   170,   204,   217,   283,  1126,   236,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,   286,  -190,   306,  -190,
    -190,  -190,  -190,  -190,  -190,   507,   507,   507,  1240,   848,
     243,  1172,  -190,  -190,   255,  -190,  -190,   221,   507,   223,
     897,   946,   246,   507,   299,  -190,   507,   507,   225,   507,
     226,   995,  -190,  -190,  -190,  -190,   507,  -190,   507,   507,
     227,  -190,  -190,  -190,   507,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   231,    37,    77,     0,    25,    24,    23,    21,    22,
      27,    28,    29,    30,    33,    34,    31,    32,    38,    39,
      26,    43,    44,     0,     0,     2,     3,     5,     6,     0,
      15,    17,    19,    35,     0,    36,   129,    68,     0,    70,
      81,    79,    78,     0,     0,    63,     1,     4,    11,     0,
      47,   129,    16,    18,    20,     0,    42,   130,   129,     7,
       0,   126,     0,    69,    82,    80,    71,     0,    64,    66,
       0,    12,     0,   128,   129,     9,    52,    54,     0,    45,
       0,     0,   122,   129,   128,     8,     0,   128,     0,    74,
       0,     0,   226,   228,   229,   227,   230,     0,     0,     0,
     208,   209,   207,   206,   210,   211,     0,    72,   169,     0,
     167,   170,   172,   174,   176,   178,   180,   183,   188,   191,
     194,   198,     0,   200,   212,   221,   222,   220,     0,    61,
       0,     0,    48,    49,     0,    10,    53,    55,    41,    46,
       0,     0,    56,    58,     0,   128,     0,   128,    13,    88,
       0,    83,    85,     0,    90,     0,   204,     0,   201,   202,
      97,     0,     0,   152,   154,   198,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,   218,   219,
       0,     0,     0,    65,    67,    62,     0,   129,    92,    59,
      51,     0,     0,    40,   127,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   111,
     113,   112,     0,   114,   115,   116,     0,   220,    14,     0,
       0,    87,    99,    89,   100,   131,     0,     0,   129,     0,
       0,    99,    98,     0,     0,   223,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   156,     0,   171,     0,
     173,   175,   177,   179,   181,   182,   186,   187,   184,   185,
     189,   190,   192,   193,   195,   196,   197,   217,   216,   214,
     224,     0,     0,    95,     0,    50,    57,    60,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,     0,   131,   133,   121,     0,   107,     0,     0,   103,
       0,   101,     0,     0,    75,    84,    86,    91,    76,   205,
     199,   153,   155,     0,     0,   215,   213,     0,    93,   127,
       0,   119,     0,     0,     0,     0,     0,     0,   147,   151,
     123,   117,   108,   102,   104,   109,     0,   105,     0,   168,
     225,    94,    96,   125,   118,     0,     0,     0,     0,     0,
       0,     0,   110,   106,   134,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,   135,   138,   140,   141,     0,   143,     0,     0,
       0,   142,   144,   145,     0,   146
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,   313,  -190,    41,   -16,    21,  -190,   -45,
     142,  -190,  -190,   258,  -190,   288,   -54,   -59,  -190,   158,
    -190,   291,   234,    -1,   -33,    -2,  -190,   -88,  -190,   128,
    -190,  -189,  -190,   208,  -119,  -101,    35,  -190,  -190,   195,
     305,    38,   -25,   -47,  -190,    67,   166,  -190,  -190,  -190,
    -100,  -114,  -190,   -19,  -118,  -190,   205,   201,   210,   207,
     202,   129,   -21,   127,   131,  -109,    -4,  -190,  -190,  -190,
    -190,  -190,  -190,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    58,   149,    30,    31,
      32,    33,    34,    78,    49,    50,    79,    80,   141,   142,
      35,    67,    68,    36,    37,    38,    42,   307,   151,   152,
     153,   197,   284,   161,   308,   234,   218,   219,   220,   221,
      83,   288,    91,    60,    84,   314,   222,   223,   224,   225,
     226,   163,   257,   164,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   165,   122,   123,   124,
     281,   125,   126,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    41,   150,    43,    39,    63,   162,   283,  -128,     1,
      76,    86,   194,   186,     3,   167,     1,   136,   137,     1,
     198,    29,   199,    45,   139,    39,   244,    86,    51,    39,
     233,    76,    76,    76,    56,    74,    76,    46,    39,   326,
      65,   242,   168,   108,    69,    66,    29,   160,   134,    18,
      19,    52,    53,    54,     4,   162,    89,   162,   121,   146,
       1,    76,   148,    44,   175,   176,    55,   145,   259,     1,
      69,   133,    39,   237,   274,   275,   276,   280,     1,   143,
      39,    88,   198,   128,   287,   238,    57,   133,    39,   290,
     139,   154,   282,   156,   158,   159,   160,   129,    86,    76,
       3,    87,   128,   177,   178,   229,   230,    88,     1,     3,
      76,   108,   310,   140,   229,   230,   195,   301,   121,   327,
     205,   108,   228,     4,    61,    62,   121,   147,    69,   244,
     321,   311,   324,   328,   320,     1,   121,     3,   352,     3,
     311,   245,    48,   322,   325,    40,   227,   232,   231,    39,
     285,   240,   230,     4,   266,   267,   268,   269,   241,   183,
     184,   185,    70,   121,    81,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   130,   108,    64,     1,   166,   277,   108,   170,
     278,   318,   332,   333,   334,   348,   337,    77,   121,    63,
     143,    39,    71,   121,    72,   227,   187,   188,   189,   244,
     350,   108,   227,   198,   297,   200,     3,   201,    77,    77,
      77,   355,   227,    77,   346,   169,   121,   232,    43,    39,
       4,    59,    39,   173,   174,   171,   360,   317,   241,   121,
     304,   190,   244,   244,   191,   192,    75,   295,    77,   339,
     -49,   244,   -49,    85,    73,   356,   244,   303,   367,   369,
     244,   372,   244,    57,   244,   244,   244,   202,   357,   135,
     378,   380,   374,   361,   376,   244,   386,   388,   394,   172,
     370,   390,   244,   381,   235,   244,    77,   179,   180,   227,
      73,   227,   181,   182,   108,   312,   313,    77,   240,   230,
     323,   244,   264,   265,   349,   227,   270,   271,   236,   121,
     243,     2,   272,   273,   291,   292,   293,   305,   294,   121,
     296,   298,   299,   335,   303,   330,   331,   338,   319,   342,
     227,   358,   343,   138,   344,   373,   383,   362,    47,   144,
     341,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   227,   227,   227,   363,   286,
     132,   131,   193,   239,   316,   354,    90,   353,   227,   340,
     260,   289,   258,   227,   263,     0,   227,   227,   262,   227,
     261,     0,     0,     0,     0,     0,   227,     0,   227,   227,
     364,   365,   366,     0,   227,     0,     1,    92,    93,    94,
      95,    96,    97,   375,    98,    99,     0,     0,   382,     0,
       0,   384,   385,     0,   387,     0,     0,     0,     0,     0,
       0,   391,     0,   392,   393,   100,   101,   102,     0,   395,
     206,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   106,     0,    57,     0,     0,   302,     0,     0,     0,
       0,     0,     0,     1,    92,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   100,   101,   102,     0,     0,   206,     0,     0,
     103,     0,   104,     0,     0,     0,   105,     0,   106,     0,
      57,     0,     0,   329,     0,     0,     0,     0,     0,     0,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   207,   208,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   100,
     101,   102,     0,     0,   206,     0,     0,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,    57,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     1,    92,
      93,    94,    95,    96,    97,     0,    98,    99,   256,     0,
       0,     0,     0,     0,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,     2,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     1,   106,     0,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       2,     0,     0,     3,     0,   100,   101,   102,     0,     0,
       0,     0,     0,   103,     0,   104,     1,   229,   230,   105,
     306,   106,     0,     0,   279,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     2,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     1,    92,
      93,    94,    95,    96,    97,     0,    98,    99,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     0,   106,     0,   196,     0,     0,   351,     1,
      92,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,     0,     0,     0,     0,     0,   103,     0,   104,   100,
     101,   102,   105,     0,   106,     0,     0,   103,   107,   104,
       0,     0,     0,   105,     0,   106,     0,     0,     0,   309,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     1,    92,    93,    94,    95,    96,    97,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,     0,     0,     0,     0,     0,   103,     0,   104,
     100,   101,   102,   105,     0,   106,     0,     0,   103,   347,
     104,     0,     0,     0,   105,     0,   106,     0,     0,   368,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,     0,     0,  -126,     0,     0,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,     0,   377,     1,
      92,    93,    94,    95,    96,    97,    82,    98,    99,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,   100,   101,
     102,     0,     0,  -129,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     0,     0,   379,     1,    92,
      93,    94,    95,    96,    97,   204,    98,    99,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     0,   106,     0,     0,   389,     1,    92,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,   103,     0,   104,     0,     0,     0,
     105,     0,   106,     0,   196,   100,   101,   102,     0,     0,
     300,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   106,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     1,
      92,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,   100,   101,   102,     0,     0,   336,     0,     0,   103,
       0,   104,     0,     0,     0,   105,     0,   106,   100,   101,
     102,     0,     0,   359,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     1,    92,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,     0,     0,   371,
       0,     0,   103,     0,   104,   100,   101,   102,   105,     0,
     106,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   155,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     1,    92,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,     2,     0,     0,     0,     0,   103,
       0,   104,   100,   101,   102,   105,     0,   157,     0,     0,
     103,     0,   104,     0,     0,     0,   105,     0,   106,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   315,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   230,     0,   306,
       0,     0,     0,     2,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   345,     2,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     2,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,   203,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23
};

static const yytype_int16 yycheck[] =
{
       0,     3,    90,     4,     4,    38,   106,   196,     3,     3,
      55,    58,   130,   122,    34,    20,     3,    76,    77,     3,
     134,     0,   140,    23,    78,    25,    39,    74,    29,    29,
     149,    76,    77,    78,    34,    51,    81,     0,    38,    52,
      42,   160,    47,    62,    44,    51,    25,   106,    73,    69,
      70,    30,    31,    32,    48,   155,    51,   157,    62,    84,
       3,   106,    87,    50,    15,    16,    50,    83,   168,     3,
      70,    72,    72,    39,   183,   184,   185,   191,     3,    80,
      80,    60,   196,    39,   202,    51,    50,    88,    88,   207,
     144,    91,   192,    97,    98,    99,   155,    53,   145,   144,
      34,    60,    39,    54,    55,    48,    49,    86,     3,    34,
     155,   130,   230,    38,    48,    49,    53,   217,   122,    39,
     145,   140,   147,    48,    48,    49,   130,    86,   128,    39,
     244,   232,    39,    53,   243,     3,   140,    34,   327,    34,
     241,    51,    37,   257,    51,     3,   146,   149,   149,   149,
     197,    48,    49,    48,   175,   176,   177,   178,   160,    34,
      35,    36,    50,   167,    50,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    41,   202,    42,     3,    52,   187,   207,    43,
     190,   238,   292,   293,   294,   313,   296,    55,   202,   232,
     201,   201,    37,   207,    39,   205,    10,    11,    12,    39,
     324,   230,   212,   327,   214,    37,    34,    39,    76,    77,
      78,    51,   222,    81,   312,    19,   230,   229,   229,   229,
      48,    36,   232,    17,    18,    44,   336,   237,   240,   243,
      37,    45,    39,    39,    48,    49,    51,   212,   106,    37,
      37,    39,    39,    58,    41,    51,    39,   222,   358,   359,
      39,   361,    39,    50,    39,    39,    39,    38,    51,    74,
     370,   371,    51,    37,    51,    39,    51,    51,    51,    40,
      37,   381,    39,    37,    51,    39,   144,    13,    14,   289,
      41,   291,    32,    33,   313,    48,    49,   155,    48,    49,
      38,    39,   173,   174,   323,   305,   179,   180,    39,   313,
      51,    31,   181,   182,    38,    48,    48,    38,    48,   323,
      48,    37,    37,    82,   289,    38,   291,    37,    51,    51,
     330,    48,    51,    53,    52,    80,    37,    51,    25,    81,
     305,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   355,   356,   357,    52,   201,
      72,    70,   128,   155,   236,   330,    61,   329,   368,   302,
     169,   205,   167,   373,   172,    -1,   376,   377,   171,   379,
     170,    -1,    -1,    -1,    -1,    -1,   386,    -1,   388,   389,
     355,   356,   357,    -1,   394,    -1,     3,     4,     5,     6,
       7,     8,     9,   368,    11,    12,    -1,    -1,   373,    -1,
      -1,   376,   377,    -1,   379,    -1,    -1,    -1,    -1,    -1,
      -1,   386,    -1,   388,   389,    32,    33,    34,    -1,   394,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    32,    33,    34,    -1,    -1,    37,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    32,
      33,    34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    50,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    41,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,     3,    48,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      31,    -1,    -1,    34,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,     3,    48,    49,    46,
      51,    48,    -1,    -1,    51,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    31,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    50,    -1,    -1,    53,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    32,
      33,    34,    46,    -1,    48,    -1,    -1,    40,    52,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      32,    33,    34,    46,    -1,    48,    -1,    -1,    40,    52,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    31,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,     3,
       4,     5,     6,     7,     8,     9,    53,    11,    12,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    32,    33,
      34,    -1,    -1,    31,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,     3,     4,
       5,     6,     7,     8,     9,    53,    11,    12,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,    -1,    48,    -1,    50,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,    42,    32,    33,    34,    46,    -1,
      48,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    31,    -1,    -1,    -1,    -1,    40,
      -1,    42,    32,    33,    34,    46,    -1,    48,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    31,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    51,    31,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    31,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    34,    48,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    90,    91,    92,    93,    94,    96,
      97,    98,    99,   100,   101,   109,   112,   113,   114,   162,
      99,   114,   115,   112,    50,   162,     0,    92,    37,   103,
     104,   112,    96,    96,    96,    50,   162,    50,    95,   128,
     132,    48,    49,   113,    99,   114,    51,   110,   111,   162,
      50,    37,    39,    41,    95,   128,    98,    99,   102,   105,
     106,    50,    53,   129,   133,   128,   132,    94,    96,    51,
     129,   131,     4,     5,     6,     7,     8,     9,    11,    12,
      32,    33,    34,    40,    42,    46,    48,    52,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   160,   161,   162,    39,    53,
      41,   110,   104,   112,   131,   128,   106,   106,    53,   105,
      38,   107,   108,   112,   102,    95,   131,    94,   131,    96,
     116,   117,   118,   119,   162,    48,   155,    48,   155,   155,
     106,   122,   139,   140,   142,   155,    52,    20,    47,    19,
      43,    44,    40,    17,    18,    15,    16,    54,    55,    13,
      14,    32,    33,    34,    35,    36,   154,    10,    11,    12,
      45,    48,    49,   111,   143,    53,    50,   120,   140,   143,
      37,    39,    38,    53,    53,   131,    37,    77,    78,    79,
      81,    82,    83,    84,    85,    86,    87,    88,   125,   126,
     127,   128,   135,   136,   137,   138,   139,   162,   131,    48,
      49,   112,   114,   123,   124,    51,    39,    39,    51,   122,
      48,   114,   123,    51,    39,    51,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    41,   141,   145,   139,
     146,   147,   148,   149,   150,   150,   151,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   162,   162,    51,
     140,   159,   139,   120,   121,   132,   108,   143,   130,   135,
     143,    38,    48,    48,    48,   125,    48,   162,    37,    37,
      37,   139,    53,   125,    37,    38,    51,   116,   123,    52,
     143,   124,    48,    49,   134,    75,   118,   162,   132,    51,
     154,   140,   140,    38,    39,    51,    52,    39,    53,    53,
      38,   125,   139,   139,   139,    82,    37,   139,    37,    37,
     134,   125,    51,    51,    52,    51,   116,    52,   143,   142,
     140,    53,   120,   130,   125,    51,    51,    51,    48,    37,
     139,    37,    51,    52,   125,   125,   125,   139,    51,   139,
      37,    37,   139,    80,    51,   125,    51,    51,   139,    51,
     139,    37,   125,    37,   125,   125,    51,   125,    51,    51,
     139,   125,   125,   125,    51,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   130,   131,   132,
     133,   134,   135,   135,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   150,   151,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   158,   159,   159,   160,   160,   160,   160,
     161,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     1,     3,     1,
       5,     3,     1,     2,     1,     2,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     4,     3,     6,     6,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     2,
       1,     3,     1,     3,     4,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     2,     2,     6,     5,     7,     0,     0,     0,     0,
       0,     0,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     7,     8,     7,     8,     8,     9,     3,     2,     2,
       2,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       1,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 140 "../parser/cParser.y" /* yacc.c:1646  */
    {	
								table.popLevelOff();}
#line 1861 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 146 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1872 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 153 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
#line 1882 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
#line 1892 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 168 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
#line 1902 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 180 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
#line 1912 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 186 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1922 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 192 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
#line 1932 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 198 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1942 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 210 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl;
			}
		}
#line 1952 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 216 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl;
			}
		}
#line 1962 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 225 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
#line 1972 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 231 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
#line 1982 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 240 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
#line 1992 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 246 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2002 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 252 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
#line 2012 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 258 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2022 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 264 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
#line 2032 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 270 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
#line 2042 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 279 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
#line 2052 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 285 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
#line 2062 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
#line 2072 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 297 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
#line 2082 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 303 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
#line 2092 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 312 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
#line 2102 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 318 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
#line 2112 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 324 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
#line 2122 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 330 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
#line 2132 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 336 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
#line 2142 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 342 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
#line 2152 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 348 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
#line 2162 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 354 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
#line 2172 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 360 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
#line 2182 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 366 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
#line 2192 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 372 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
#line 2202 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 378 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
#line 2212 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 387 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
#line 2222 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 393 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
#line 2232 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 402 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2242 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 408 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2252 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 414 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
#line 2262 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
#line 2272 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 429 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
#line 2282 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 438 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
#line 2292 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 444 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
#line 2302 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 453 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
#line 2312 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 459 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
#line 2322 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 468 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
#line 2332 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 474 "../parser/cParser.y" /* yacc.c:1646  */
    { 
 			if (!(yyvsp[-4].entry)->setIdentifierValue(*((yyvsp[-1].val)))) {
 				std::cout << COLOR_NORMAL << COLOR_CYAN_NORMAL << "ERROR:" << COLOR_NORMAL << " Invalid assignment." << std::endl;
 				yyerror("");
 			}
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
		}
#line 2346 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 487 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl;
			}
		}
#line 2356 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 496 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
#line 2366 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 502 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2376 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 508 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2386 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 514 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2396 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 523 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
#line 2406 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 529 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
#line 2416 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 538 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
#line 2426 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 544 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
#line 2436 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 550 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
#line 2446 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 559 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2456 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 565 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2466 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 571 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
#line 2476 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 580 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
#line 2486 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 586 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
#line 2496 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 595 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
#line 2506 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 601 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
#line 2516 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 610 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			{(yyval.entry) = (yyvsp[0].entry);}
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
#line 2527 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 617 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
#line 2537 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 626 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			{(yyval.entry) = (yyvsp[0].entry);}
			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
#line 2548 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 633 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
#line 2558 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 639 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2568 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 645 "../parser/cParser.y" /* yacc.c:1646  */
    {

 			(yyvsp[-3].entry)->setArray();
 			(yyvsp[-3].entry)->addArrayDimension((yyvsp[-1].val)->value._number); 
			std::vector<int> tempVector = (yyvsp[-3].entry)->getArrayDimensions(); 

			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2583 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 656 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2593 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 662 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			std::string idName = (yyvsp[-5].entry)->getIdentifierName();
 			assignParams((yyvsp[-5].entry), funcParams); 
 			funcParams.clear(); 
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
	
		}
#line 2607 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 672 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
#line 2617 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 681 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
#line 2627 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 687 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
#line 2637 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 693 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
#line 2647 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 699 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
#line 2657 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 708 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2667 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 714 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}
#line 2677 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 723 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}
#line 2687 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 729 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}
#line 2697 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 738 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << std::endl;
			}
		}
#line 2707 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 744 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << std::endl;
			}
		}
#line 2717 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 753 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			parameter tempParam;
 			tempParam.dataType = (yyvsp[0].entry)->getIdentifierType();
 			tempParam.formalParam = (yyvsp[0].entry)->getIdentifierName(); 
 			funcParams.push_back(tempParam); 
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
#line 2731 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 763 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
#line 2741 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 769 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
#line 2751 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 778 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
#line 2762 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 785 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
#line 2772 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 794 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
#line 2782 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 800 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
#line 2792 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 806 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
#line 2802 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 815 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
#line 2812 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 821 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
#line 2822 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 830 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
#line 2832 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 836 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
#line 2842 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 845 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
#line 2852 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 851 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
#line 2862 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 857 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
#line 2872 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 866 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
#line 2882 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 873 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
#line 2892 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 879 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2902 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 885 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2912 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 891 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
#line 2922 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 897 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
#line 2932 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 903 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2942 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 909 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2952 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 915 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2962 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 924 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
#line 2972 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 930 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
#line 2982 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 936 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
#line 2992 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 942 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
#line 3002 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 948 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
#line 3012 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 954 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
#line 3022 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 963 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
#line 3032 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 969 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
#line 3042 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 975 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
#line 3052 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 984 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
#line 3062 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 990 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
#line 3072 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 999 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}
#line 3082 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1005 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}
#line 3092 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1011 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}
#line 3102 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1016 "../parser/cParser.y" /* yacc.c:1646  */
    {
		  if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
	      }
	    }
#line 3112 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1024 "../parser/cParser.y" /* yacc.c:1646  */
    {

		table.pushLevelOn();
		inInsertMode = true;
		}
#line 3122 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1032 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff(); 
		inInsertMode = false;  
		}
#line 3131 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1039 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = false; 
		}
#line 3139 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1045 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = true; 
		}
#line 3147 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1051 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.pushLevelOn();
	   }
#line 3155 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1057 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff();  
		}
#line 3163 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1064 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
#line 3173 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1070 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
#line 3183 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1079 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3193 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1085 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
#line 3203 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1091 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3213 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1100 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3223 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1106 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
#line 3233 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1112 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3243 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1118 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3253 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1124 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3263 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1130 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3273 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1136 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3283 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1142 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3293 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1148 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3303 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1154 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3313 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1163 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
#line 3323 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1169 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
#line 3333 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1175 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
#line 3343 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1181 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
#line 3353 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1187 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
#line 3363 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1196 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
#line 3373 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1202 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
#line 3383 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1211 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
#line 3393 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1217 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
#line 3403 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1226 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
#line 3413 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1232 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
#line 3423 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1238 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
#line 3433 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1244 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
#line 3443 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1250 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
#line 3453 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1256 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
#line 3463 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1262 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
#line 3473 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1268 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
#line 3483 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1274 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
#line 3493 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1280 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
#line 3503 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1286 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
#line 3513 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1295 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
#line 3523 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1301 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
#line 3533 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1310 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
#line 3543 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1319 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
#line 3553 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1325 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
#line 3563 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1334 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
#line 3573 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1340 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
#line 3583 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1349 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
#line 3593 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1355 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
#line 3603 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1364 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
#line 3613 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1370 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
#line 3623 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1379 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
#line 3633 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1385 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
#line 3643 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1394 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
#line 3653 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1400 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
#line 3663 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1406 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
#line 3673 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1415 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
#line 3683 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1421 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
#line 3693 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1427 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
#line 3703 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1433 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
#line 3713 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1439 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
#line 3723 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1448 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
#line 3733 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1454 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
#line 3743 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1460 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
#line 3753 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1469 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
#line 3763 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1475 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number + (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
#line 3774 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1482 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number - (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
#line 3785 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1492 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
#line 3795 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1498 "../parser/cParser.y" /* yacc.c:1646  */
    {
 		 	(yyval.val)->value._number = (yyvsp[-2].val)->value._number * (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
#line 3806 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1505 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if ((yyvsp[0].val)->value._number == 0) {
 				yyerror("Unable to divide by 0");
 			}
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number / (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
#line 3820 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1515 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number % (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
#line 3831 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1525 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
#line 3841 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1531 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
#line 3851 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1540 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
#line 3861 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1546 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
#line 3871 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1552 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
#line 3881 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1558 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(unaryOperatorChosen == MINUS) { 
	 			switch((yyvsp[0].val)->dataType) {
	 				case LONG_LONG_T:
	 					(yyval.val)->dataType = (yyvsp[0].val)->dataType;
	 					(yyval.val)->value._number = (yyvsp[0].val)->value._number * -1;  
	 					break; 

	 				case LONG_DOUBLE_T:
	  					(yyval.val)->dataType = (yyvsp[0].val)->dataType;
	 					(yyval.val)->value._decimal = (yyvsp[0].val)->value._decimal;   
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
#line 3909 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1582 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
#line 3919 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1588 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
#line 3929 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1597 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = AMP; 
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
#line 3940 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1604 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = MULT;
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
#line 3951 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1611 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = PLUS;
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
#line 3962 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1618 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = MINUS;
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
#line 3973 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1625 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = TILDE;
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
#line 3984 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1632 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = BANG;
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
#line 3995 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1642 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
		}
#line 4005 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1648 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
#line 4015 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1654 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
#line 4025 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1660 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if (!(yyvsp[-3].val)->sEntry->checkParams(funcCallingParams)) {
 				std::cout << COLOR_NORMAL << COLOR_CYAN_NORMAL << "ERROR:" << COLOR_NORMAL << " Invalid function arguments." << std::endl;
 				yyerror("");
 			}
 			funcCallingParams.clear();  
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}
		}
#line 4040 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1671 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
#line 4050 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1677 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
#line 4060 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1683 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
#line 4070 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1689 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
#line 4080 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1698 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->sEntry = (yyvsp[0].entry); 
			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
#line 4091 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1705 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
#line 4101 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1711 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
#line 4111 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1717 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
#line 4121 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1726 "../parser/cParser.y" /* yacc.c:1646  */
    { 
 			funcCallingParams.push_back((yyvsp[0].val)->sEntry);
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
#line 4132 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1733 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			funcCallingParams.push_back((yyvsp[0].val)->sEntry);
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
#line 4143 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1743 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[0].val)->value._number; 
 			(yyval.val)->dataType = LONG_LONG_T; 
 			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}
		}
#line 4155 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1751 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._char = (yyvsp[0].val)->value._char;
 			(yyval.val)->dataType = CHAR_T; 
			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
#line 4167 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1759 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._decimal = (yyvsp[0].val)->value._decimal; 
 			(yyval.val)->dataType = LONG_DOUBLE_T; 
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
#line 4179 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1767 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/* not sure what to do about this */
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
#line 4190 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1777 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
#line 4200 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1785 "../parser/cParser.y" /* yacc.c:1646  */
    {	(yyval.entry) = (yyvsp[0].entry);}
#line 4206 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4210 "cParser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1787 "../parser/cParser.y" /* yacc.c:1906  */
 /* end of ANSI C grammar and actions */

/* user code */
void yyerror(const char* s) {

	std::cout << s << std::endl;
	exit(-1);
}

void assignParams(symbolTableEntry* entry, std::vector<parameter> params) {
	if (entry != NULL) {
		for(unsigned int i = 0; i < params.size(); i++) {
			entry->addParameter(params[i]);
		}
	}
}
