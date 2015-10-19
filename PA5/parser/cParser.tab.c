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
	#include "../classes/symbolTableEntry.h"
	#include "../classes/symbolTable.h"

	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern std::ofstream outY;
	extern bool inInsertMode;
	extern symbolTable table; 
	std::vector<parameter> funcParams;
	void assignParams(symbolTableEntry* entry, std::vector<parameter> params); 

#line 85 "cParser.tab.c" /* yacc.c:339  */

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
#line 42 "../parser/cParser.y" /* yacc.c:355  */

	typedef struct {
	    int dataType;
	    typedef union {
	        char _char;
	        long long _number;
	        double _decimal;     
	        char _str[256];   
	    } vals;
	    vals value;
	} dVal;

#line 128 "cParser.tab.c" /* yacc.c:355  */

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
#line 60 "../parser/cParser.y" /* yacc.c:355  */

	char* sVal;
	dVal* val;
	class symbolTableEntry* entry; 

#line 235 "cParser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "cParser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

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
       0,   112,   112,   117,   124,   133,   139,   151,   157,   163,
     169,   181,   187,   196,   202,   211,   217,   223,   229,   235,
     241,   250,   256,   262,   268,   274,   283,   289,   295,   301,
     307,   313,   319,   325,   331,   337,   343,   349,   358,   364,
     373,   379,   385,   394,   400,   409,   415,   424,   430,   439,
     445,   456,   465,   471,   477,   483,   492,   498,   507,   513,
     519,   528,   534,   540,   549,   555,   564,   570,   579,   585,
     594,   600,   606,   612,   618,   624,   637,   647,   653,   659,
     665,   674,   680,   689,   695,   704,   722,   744,   755,   761,
     770,   776,   785,   791,   797,   806,   812,   821,   827,   836,
     842,   848,   857,   864,   870,   876,   882,   888,   894,   900,
     906,   915,   921,   927,   933,   939,   945,   954,   960,   966,
     975,   981,   991,   997,  1003,  1009,  1017,  1025,  1032,  1038,
    1044,  1050,  1056,  1065,  1071,  1077,  1086,  1092,  1098,  1104,
    1110,  1116,  1122,  1128,  1134,  1140,  1149,  1155,  1161,  1167,
    1173,  1182,  1188,  1197,  1203,  1212,  1218,  1224,  1230,  1236,
    1242,  1248,  1254,  1260,  1266,  1272,  1281,  1287,  1296,  1305,
    1311,  1320,  1326,  1335,  1341,  1350,  1356,  1365,  1371,  1380,
    1386,  1392,  1401,  1407,  1413,  1419,  1425,  1434,  1440,  1446,
    1455,  1461,  1467,  1476,  1482,  1488,  1494,  1503,  1509,  1518,
    1524,  1530,  1536,  1542,  1548,  1557,  1563,  1569,  1575,  1581,
    1587,  1596,  1602,  1608,  1614,  1620,  1626,  1632,  1638,  1647,
    1657,  1663,  1669,  1678,  1684,  1693,  1700,  1710,  1716,  1725,
    1734
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
  "set_lookup_pop", "set_lookup", "open_curl", "close_curl",
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

#define YYPACT_NINF -129

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     643,  -129,  -129,    66,    48,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,    14,    18,   643,  -129,  -129,  -129,    13,
     942,   942,   942,  -129,    16,  -129,  1356,    92,    55,  -129,
    -129,  -129,    66,    53,   121,    82,  -129,  -129,  -129,   174,
    -129,  1312,  -129,  -129,  -129,   667,   126,   340,  -129,  1356,
      13,  -129,     6,   766,    92,  -129,  -129,  -129,   -32,  -129,
     140,   121,  -129,    48,  1034,  1356,  -129,   667,   667,  1402,
    -129,    80,   667,  -129,   942,  -129,  -129,  -129,   159,  -129,
      17,   942,  -129,  -129,  -129,  -129,  -129,  -129,  1173,  1219,
    1219,  -129,  -129,  -129,  -129,  -129,  -129,   555,  -129,  -129,
     152,     2,   196,   179,   183,   192,   260,    30,   269,   257,
     200,  -129,  -129,  1230,    99,  -129,  -129,  -129,  -129,   121,
    -129,  1230,    59,  -129,  1034,  -129,  -129,  -129,   527,  -129,
    -129,  -129,  -129,  -129,  1230,   181,  -129,   199,  1425,   893,
     497,   121,  -129,    45,   188,   207,  -129,   555,  -129,  1230,
    -129,  -129,    71,   198,    87,  -129,  -129,  1230,  1230,  1230,
    1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,
    1230,  1230,  1230,  1230,  1230,  1230,  -129,   121,  -129,  -129,
     121,   603,  1230,  -129,  -129,  -129,  -129,    77,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  1230,
    -129,  -129,    80,  1230,  -129,  -129,   497,  -129,  1230,   217,
     231,   236,   239,   497,   247,   121,   228,   262,  1053,  -129,
    -129,  -129,  -129,   383,  -129,  -129,  -129,   191,   235,  -129,
     599,   777,  -129,    21,  -129,   243,  -129,  1223,   250,  1268,
     245,  -129,  1230,  1230,  -129,   196,   259,   179,   183,   192,
     260,    30,    30,   269,   269,   269,   269,   257,   257,   200,
     200,  -129,  -129,  -129,  -129,  -129,  -129,  -129,    88,    20,
     715,  -129,  -129,  -129,  -129,  -129,   440,   271,   497,  1230,
    1230,  1230,   240,  1099,   270,  -129,  -129,  -129,   221,  -129,
    -129,  -129,   497,  -129,   264,   267,  -129,   272,   243,  1380,
     827,  -129,  -129,  -129,  -129,  -129,  1230,  1230,  -129,  -129,
    -129,  -129,  -129,   497,  -129,    94,   103,   107,   277,  1116,
     225,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   275,
    -129,   276,  -129,  -129,  -129,  -129,   497,   497,   497,  1230,
     838,   232,  1162,  -129,  -129,   249,  -129,  -129,   141,   497,
     144,   887,   936,   233,   497,   290,  -129,   497,   497,   158,
     497,   163,   985,  -129,  -129,  -129,  -129,   497,  -129,   497,
     497,   168,  -129,  -129,  -129,   497,  -129
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   230,    37,    77,     0,    25,    24,    23,    21,    22,
      27,    28,    29,    30,    33,    34,    31,    32,    38,    39,
      26,    43,    44,     0,     0,     2,     3,     5,     6,     0,
      15,    17,    19,    35,     0,    36,     0,    68,     0,    70,
      81,    79,    78,     0,     0,    63,     1,     4,    11,     0,
      47,    49,    16,    18,    20,     0,    42,   129,    13,     0,
       0,     7,   126,     0,    69,    82,    80,    71,     0,    64,
      66,     0,    12,     0,     0,     0,     9,    52,    54,     0,
      45,     0,     0,   122,     0,   128,    14,     8,    49,    74,
       0,     0,    90,   225,   227,   228,   226,   229,     0,     0,
       0,   207,   208,   206,   205,   209,   210,     0,    72,   168,
       0,   166,   169,   171,   173,   175,   177,   179,   182,   187,
     190,   193,   197,     0,   199,   211,   220,   221,   219,     0,
      61,     0,     0,    48,     0,    50,    92,   153,   197,    10,
      53,    55,    41,    46,     0,     0,    56,    58,     0,   128,
       0,     0,    76,    88,     0,    83,    85,     0,   203,     0,
     200,   201,    97,     0,     0,   151,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,     0,   217,   218,
       0,     0,     0,    65,    67,    62,    95,     0,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   155,     0,
      59,    51,     0,     0,    40,   127,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     111,   113,   112,     0,   114,   115,   116,     0,   219,    91,
       0,     0,    87,    99,    89,   100,    75,     0,     0,     0,
      99,    98,     0,     0,   222,   170,     0,   172,   174,   176,
     178,   180,   181,   185,   186,   183,   184,   188,   189,   191,
     192,   194,   195,   196,   216,   215,   213,   223,     0,     0,
       0,    93,   154,    57,    60,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   148,   149,     0,   130,
     132,   121,     0,   107,     0,     0,   103,     0,   101,     0,
       0,    84,    86,   204,   198,   152,     0,     0,   214,   212,
      94,    96,   127,     0,   119,     0,     0,     0,     0,     0,
       0,   146,   150,   123,   117,   108,   102,   104,   109,     0,
     105,     0,   167,   224,   125,   118,     0,     0,     0,     0,
       0,     0,     0,   110,   106,   133,   135,   136,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,   134,   137,   139,   140,     0,   142,     0,
       0,     0,   141,   143,   144,     0,   145
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,   305,  -129,    42,   -41,     1,  -129,   -42,
     226,  -129,  -129,   252,  -129,   258,   -71,   -66,  -129,   123,
    -129,   265,   209,    26,   -33,    36,  -129,   -88,  -129,    95,
    -129,  -128,  -129,   182,   -31,   -94,   -27,  -129,  -129,   142,
     282,    23,   202,  -129,  -129,   133,  -129,  -129,  -129,  -105,
     -54,  -129,   -36,  -116,  -129,   187,   186,   190,   185,   189,
     138,    76,   134,   135,  -109,   -10,  -129,  -129,  -129,  -129,
    -129,  -129,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    58,    59,    60,    30,    31,
      32,    33,    34,    79,    49,    50,    80,    81,   145,   146,
      35,    68,    69,    36,    37,    38,    42,   304,   155,   156,
      90,   135,   197,   163,   305,   245,   229,   230,   231,   232,
      84,   285,   150,    85,   333,   233,   234,   235,   236,   237,
     165,   209,   137,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   138,   123,   124,   125,   278,
     126,   127,   128
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    29,   164,   154,    39,    64,   196,   129,   143,     1,
      75,   140,   141,    77,   186,   194,     1,     1,    46,     1,
     136,   130,   167,    45,     1,    39,    29,   109,   210,    39,
      43,    52,    53,    54,    56,    77,    77,    77,    39,    41,
      77,   162,    28,   149,    70,   175,   176,     3,     1,   168,
      48,     1,   164,   122,   164,    51,   151,    89,     1,   253,
      39,     4,    92,   256,    44,    77,    55,    28,   152,   240,
     241,    70,   319,    39,   271,   272,   273,   143,    66,     3,
     136,    39,     3,     1,   177,   178,    88,   279,   158,   160,
     161,   162,   153,   240,   241,   109,     4,   284,   129,    88,
       3,    86,   287,     4,    67,     3,    77,   147,   109,   187,
     188,   189,   195,   122,     3,    77,   280,    86,   144,   249,
     241,   122,   244,   298,     1,   307,   253,   317,     4,    70,
     281,   251,    71,   253,   122,    18,    19,   277,   254,   318,
      62,    63,   253,   314,   190,   346,   253,   191,   192,   308,
     238,   239,   321,    39,   347,   282,   308,   122,   348,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,    82,   109,    61,   242,
     253,   131,   109,   253,   325,   326,   327,   274,   330,   243,
     275,    86,   365,    76,   341,   367,   292,   253,   250,   315,
      74,    87,   253,   122,   166,   109,   300,   253,   122,   377,
      64,    72,    39,    73,   379,   169,   238,   139,   211,   385,
     212,   339,   170,   238,   351,   294,   136,   171,   301,    40,
     253,   122,   172,   238,   183,   184,   185,   213,   147,   246,
      39,   153,   122,    39,   358,   360,   247,   363,   153,   252,
     153,   263,   264,   265,   266,   288,   369,   371,   332,   300,
     253,   324,   352,   343,   253,   295,    43,   381,    65,   361,
     372,   253,   253,   302,   109,   334,   243,   173,   174,   289,
     342,    78,   179,   180,   290,   250,   238,   291,   238,   181,
     182,   309,   310,   249,   241,   293,   345,   316,   253,   296,
     122,   313,   238,    78,    78,    78,   122,   331,    78,   323,
     153,   261,   262,   267,   268,   335,   269,   270,   336,   355,
     356,   357,   328,   238,   337,   349,   353,   374,   354,   364,
      47,   133,   366,    78,   148,   283,   132,   373,   193,   248,
     375,   376,   312,   378,    91,   344,   238,   238,   238,   286,
     382,   216,   383,   384,   255,   257,   259,     0,   386,   238,
     258,   260,     0,     0,   238,     0,     0,   238,   238,     0,
     238,  -126,     0,     0,    78,     0,     0,   238,     0,   238,
     238,     0,     0,    78,     0,   238,     1,    93,    94,    95,
      96,    97,    98,    83,    99,   100,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,   101,   102,   103,     0,     0,
     217,     0,     0,   104,     0,   105,     0,     0,     0,   106,
       0,   107,     0,    57,     0,     0,   299,     0,     0,     0,
       0,     0,     0,     1,    93,    94,    95,    96,    97,    98,
       0,    99,   100,     0,     0,     0,     0,     0,     0,     0,
     218,   219,   220,     0,   221,   222,   223,   224,   225,   226,
     227,   228,   101,   102,   103,     0,     0,   217,     0,     0,
     104,     0,   105,     0,     0,     0,   106,     0,   107,     0,
      57,     0,     0,   322,     0,     0,     0,     0,     0,     0,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       0,     0,     0,     0,     0,     0,     0,   218,   219,   220,
       0,   221,   222,   223,   224,   225,   226,   227,   228,   101,
     102,   103,     0,     0,   217,     0,     0,   104,     0,   105,
       0,     0,     0,   106,     0,   107,     0,    57,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     1,    93,
      94,    95,    96,    97,    98,     0,    99,   100,   208,     0,
       0,     0,     0,     0,   218,   219,   220,     0,   221,   222,
     223,   224,   225,   226,   227,   228,     2,   101,   102,   103,
       0,     0,     0,     0,     0,   104,     0,   105,     0,     0,
       0,   106,     1,   107,     0,     0,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       2,     0,     0,     3,     0,   101,   102,   103,     0,     0,
       0,     0,     0,   104,     0,   105,     1,   240,   241,   106,
     303,   107,     0,     0,   276,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     2,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     1,    93,
      94,    95,    96,    97,    98,     0,    99,   100,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,   101,   102,   103,
       0,     0,     0,     0,     0,   104,     0,   105,     0,     0,
       0,   106,     0,   107,     0,   134,     0,     0,   320,     1,
      93,    94,    95,    96,    97,    98,     0,    99,   100,     0,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,     0,     0,     0,     0,     0,   104,     0,   105,   101,
     102,   103,   106,     0,   107,     0,     0,   104,   108,   105,
       0,     0,     0,   106,     0,   107,     0,     0,     0,   306,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       0,     1,    93,    94,    95,    96,    97,    98,     0,    99,
     100,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,     0,     0,     0,     0,     0,   104,     0,   105,
     101,   102,   103,   106,     0,   107,     0,     0,   104,   340,
     105,     0,     0,     0,   106,     0,   107,     0,     0,   359,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,     0,     0,     2,     0,     0,   104,     0,   105,
       0,     0,     0,   106,     0,   107,     0,     0,   368,     1,
      93,    94,    95,    96,    97,    98,   215,    99,   100,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   101,   102,
     103,     0,     0,     2,     0,     0,   104,     0,   105,     0,
       0,     0,   106,     0,   107,     0,     0,   370,     1,    93,
      94,    95,    96,    97,    98,     0,    99,   100,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   101,   102,   103,
       0,     0,     0,     0,     0,   104,     0,   105,     0,     0,
       0,   106,     0,   107,     0,     0,   380,     1,    93,    94,
      95,    96,    97,    98,     0,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,   101,   102,   103,     0,
       0,     0,     0,     0,   104,     0,   105,     0,     0,     0,
     106,     0,   107,     0,   134,   101,   102,   103,     0,     0,
     297,     0,     0,   104,     0,   105,     0,     0,     0,   106,
       0,   107,     1,    93,    94,    95,    96,    97,    98,     0,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     1,
      93,    94,    95,    96,    97,    98,     0,    99,   100,     0,
       0,   101,   102,   103,     0,     0,   329,     0,     0,   104,
       0,   105,     0,     0,     0,   106,     0,   107,   101,   102,
     103,     0,     0,   350,     0,     0,   104,     0,   105,     0,
       0,     0,   106,     0,   107,     1,    93,    94,    95,    96,
      97,    98,     0,    99,   100,     0,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,     0,     0,   362,
       0,     0,   104,     0,   105,   101,   102,   103,   106,     0,
     107,     0,     0,   104,     0,   105,     0,     0,     0,   106,
       0,   157,     1,    93,    94,    95,    96,    97,    98,     0,
      99,   100,     0,     1,    93,    94,    95,    96,    97,    98,
       0,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,     2,     0,     0,     0,     0,   104,
       0,   105,   101,   102,   103,   106,     0,   159,     0,     0,
     104,     0,   105,     0,     0,     0,   106,     0,   107,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   311,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,   241,     0,   303,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     2,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   338,     0,     2,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   142,     2,     0,     0,     0,
       0,     0,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,   214,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,     0,   107,    91,     4,    38,   134,    39,    79,     3,
      51,    77,    78,    55,   123,   131,     3,     3,     0,     3,
      74,    53,    20,    23,     3,    25,    25,    63,   144,    29,
       4,    30,    31,    32,    34,    77,    78,    79,    38,     3,
      82,   107,     0,    84,    44,    15,    16,    34,     3,    47,
      37,     3,   157,    63,   159,    29,    39,    51,     3,    39,
      60,    48,    62,   168,    50,   107,    50,    25,    51,    48,
      49,    71,    52,    73,   183,   184,   185,   148,    42,    34,
     134,    81,    34,     3,    54,    55,    60,   192,    98,    99,
     100,   157,    91,    48,    49,   131,    48,   213,    39,    73,
      34,    59,   218,    48,    51,    34,   148,    81,   144,    10,
      11,    12,    53,   123,    34,   157,    39,    75,    38,    48,
      49,   131,   153,   228,     3,   241,    39,    39,    48,   129,
      53,   162,    50,    39,   144,    69,    70,   191,    51,    51,
      48,    49,    39,   252,    45,    51,    39,    48,    49,   243,
     150,   151,   280,   153,    51,   209,   250,   167,    51,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    50,   213,    36,   153,
      39,    41,   218,    39,   289,   290,   291,   187,   293,   153,
     190,   149,    51,    51,   310,    51,   223,    39,   162,   253,
      41,    59,    39,   213,    52,   241,   233,    39,   218,    51,
     243,    37,   212,    39,    51,    19,   216,    75,    37,    51,
      39,   309,    43,   223,   329,   225,   280,    44,    37,     3,
      39,   241,    40,   233,    34,    35,    36,    38,   212,    51,
     240,   240,   252,   243,   349,   350,    39,   352,   247,    51,
     249,   175,   176,   177,   178,    38,   361,   362,    37,   286,
      39,   288,    37,   317,    39,    37,   240,   372,    42,    37,
      37,    39,    39,    38,   310,   302,   240,    17,    18,    48,
     316,    55,    13,    14,    48,   249,   286,    48,   288,    32,
      33,    48,    49,    48,    49,    48,   323,    38,    39,    37,
     310,    51,   302,    77,    78,    79,   316,    37,    82,    38,
     309,   173,   174,   179,   180,    51,   181,   182,    51,   346,
     347,   348,    82,   323,    52,    48,    51,    37,    52,    80,
      25,    73,   359,   107,    82,   212,    71,   364,   129,   157,
     367,   368,   247,   370,    62,   322,   346,   347,   348,   216,
     377,   149,   379,   380,   167,   169,   171,    -1,   385,   359,
     170,   172,    -1,    -1,   364,    -1,    -1,   367,   368,    -1,
     370,    31,    -1,    -1,   148,    -1,    -1,   377,    -1,   379,
     380,    -1,    -1,   157,    -1,   385,     3,     4,     5,     6,
       7,     8,     9,    53,    11,    12,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    32,    33,    34,    -1,    -1,
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
       5,     6,     7,     8,     9,    -1,    11,    12,    56,    57,
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
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    31,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    51,    -1,    31,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    53,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    34,    48,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    90,    91,    92,    93,    94,    96,
      97,    98,    99,   100,   101,   109,   112,   113,   114,   161,
      99,   114,   115,   112,    50,   161,     0,    92,    37,   103,
     104,   112,    96,    96,    96,    50,   161,    50,    94,    95,
      96,   128,    48,    49,   113,    99,   114,    51,   110,   111,
     161,    50,    37,    39,    41,    95,   128,    98,    99,   102,
     105,   106,    50,    53,   129,   132,    94,   128,   112,    51,
     119,   129,   161,     4,     5,     6,     7,     8,     9,    11,
      12,    32,    33,    34,    40,    42,    46,    48,    52,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   159,   160,   161,    39,
      53,    41,   110,   104,    50,   120,   139,   141,   154,   128,
     106,   106,    53,   105,    38,   107,   108,   112,   102,    95,
     131,    39,    51,    96,   116,   117,   118,    48,   154,    48,
     154,   154,   106,   122,   138,   139,    52,    20,    47,    19,
      43,    44,    40,    17,    18,    15,    16,    54,    55,    13,
      14,    32,    33,    34,    35,    36,   153,    10,    11,    12,
      45,    48,    49,   111,   142,    53,   120,   121,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    41,   140,
     142,    37,    39,    38,    53,    53,   131,    37,    77,    78,
      79,    81,    82,    83,    84,    85,    86,    87,    88,   125,
     126,   127,   128,   134,   135,   136,   137,   138,   161,   161,
      48,    49,   112,   114,   123,   124,    51,    39,   122,    48,
     114,   123,    51,    39,    51,   144,   138,   145,   146,   147,
     148,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   161,   161,    51,   139,   158,   138,
      39,    53,   139,   108,   142,   130,   134,   142,    38,    48,
      48,    48,   125,    48,   161,    37,    37,    37,   138,    53,
     125,    37,    38,    51,   116,   123,    52,   142,   124,    48,
      49,    75,   118,    51,   153,   139,    38,    39,    51,    52,
      53,   120,    53,    38,   125,   138,   138,   138,    82,    37,
     138,    37,    37,   133,   125,    51,    51,    52,    51,   116,
      52,   142,   141,   139,   130,   125,    51,    51,    51,    48,
      37,   138,    37,    51,    52,   125,   125,   125,   138,    51,
     138,    37,    37,   138,    80,    51,   125,    51,    51,   138,
      51,   138,    37,   125,    37,   125,   125,    51,   125,    51,
      51,   138,   125,   125,   125,    51,   125
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
     133,   134,   134,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   137,   137,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   141,   141,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   149,   149,   149,   149,   149,   150,   150,   150,
     151,   151,   151,   152,   152,   152,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   155,
     155,   156,   156,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   157,   158,   158,   159,   159,   159,   159,   160,
     161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     3,     3,
       4,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     1,     3,     1,
       3,     3,     1,     2,     1,     2,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     4,     3,     5,     4,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     2,
       1,     3,     1,     3,     4,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     2,     2,     6,     5,     7,     0,     0,     0,     0,
       0,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       7,     8,     7,     8,     8,     9,     3,     2,     2,     2,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     4,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     3,     2,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1
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
#line 112 "../parser/cParser.y" /* yacc.c:1646  */
    {	
								table.popLevelOff();}
#line 1864 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 118 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1875 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 125 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
#line 1885 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 134 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
#line 1895 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 140 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
#line 1905 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 152 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
#line 1915 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 158 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1925 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 164 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
#line 1935 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 170 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1945 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 182 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl << std::endl;
			}
		}
#line 1955 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 188 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl << std::endl;
			}
		}
#line 1965 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 197 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
#line 1975 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 203 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
#line 1985 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 212 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
#line 1995 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 218 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2005 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 224 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
#line 2015 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 230 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2025 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 236 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
#line 2035 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 242 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
#line 2045 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 251 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
#line 2055 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 257 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
#line 2065 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 263 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
#line 2075 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 269 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
#line 2085 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 275 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
#line 2095 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 284 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
#line 2105 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 290 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
#line 2115 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 296 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
#line 2125 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 302 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
#line 2135 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 308 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
#line 2145 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 314 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
#line 2155 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 320 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
#line 2165 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 326 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
#line 2175 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 332 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
#line 2185 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 338 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
#line 2195 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 344 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
#line 2205 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 350 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
#line 2215 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 359 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
#line 2225 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 365 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
#line 2235 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 374 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2245 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 380 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2255 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 386 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
#line 2265 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 395 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
#line 2275 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 401 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
#line 2285 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 410 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
#line 2295 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 416 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
#line 2305 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 425 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
#line 2315 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 431 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
#line 2325 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 440 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
#line 2335 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 446 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyvsp[-2].entry)->setIdentifierValue(*((yyvsp[0].val)), (yyvsp[0].val)->dataType);

			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
		}
#line 2347 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 457 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl << std::endl;
			}
		}
#line 2357 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 466 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
#line 2367 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 472 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2377 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 478 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2387 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 484 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2397 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 493 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
#line 2407 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 499 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
#line 2417 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 508 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
#line 2427 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 514 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
#line 2437 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 520 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
#line 2447 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 529 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2457 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 535 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2467 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 541 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
#line 2477 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 550 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
#line 2487 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 556 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
#line 2497 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 565 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
#line 2507 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 571 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
#line 2517 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 580 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
#line 2527 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 586 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
#line 2537 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 595 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
#line 2547 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 601 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
#line 2557 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 607 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2567 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 613 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2577 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 619 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2587 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 625 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			std::string idName = (yyvsp[-4].entry)->getIdentifierName();
 			std::cout << "ID Name: " << idName << " has ";
 			std::cout << (yyvsp[-4].entry)->getNumberOfParams() << " parameters." << std::endl;  
 			assignParams((yyvsp[-4].entry), funcParams);
 			std::cout << "PRINTING FUNCTION PARAMETERS LOLZ HUEHUE" << std::endl;
 			(yyvsp[-4].entry)->viewParams();  
 			funcParams.clear(); 
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2604 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 638 "../parser/cParser.y" /* yacc.c:1646  */
    {

			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
#line 2615 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 648 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
#line 2625 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 654 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
#line 2635 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 660 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
#line 2645 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 666 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
#line 2655 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 675 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2665 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 681 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}
#line 2675 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 690 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}
#line 2685 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 696 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}
#line 2695 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 705 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			std::cout << "==========================================================" << std::endl;
 			std::cout << "ID Type: " << $1->getIdentifierType() << std::endl;
 			std::cout << "ID Name: ";
 			std::string temp = $1->getIdentifierName(); 
 			std::cout << temp << std::endl;
 			std::cout << "==========================================================" << std::endl; 
 			std::cout << "parameter_list : parameter_declaration;" << std::endl;
  			parameter tempParam;
 			tempParam.dataType = $1->getIdentifierType();
 			tempParam.formalParam = temp; 
 			funcParams.push_back(tempParam); */
 			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << std::endl;
			}
		}
#line 2717 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 723 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			std::cout << "==========================================================" << std::endl;
			std::cout << "ID Type: " << $3->getIdentifierType() << std::endl;
 			std::cout << "ID Name: ";
 			std::string temp = $3->getIdentifierName(); 
 			std::cout << temp << std::endl;
 			parameter tempParam;
 			tempParam.dataType = $3->getIdentifierType();
 			tempParam.formalParam = temp; 
 			funcParams.push_back(tempParam);
 			std::cout << "==========================================================" << std::endl; 
 			
 			std::cout << "parameter_list : parameter_list COMMA parameter_declaration;!!!!!" << std::endl; */
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << std::endl;
			}
		}
#line 2740 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 745 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			std::cout << "I'm here: parameter_declaration : declaration_specifiers declarator;" << std::endl;
 			parameter tempParam;
 			tempParam.dataType = (yyvsp[0].entry)->getIdentifierType();
 			tempParam.formalParam = (yyvsp[0].entry)->getIdentifierName(); 
 			funcParams.push_back(tempParam); 
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
#line 2755 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 756 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
#line 2765 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 762 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
#line 2775 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 771 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
#line 2785 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 777 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
#line 2795 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 786 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
#line 2805 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 792 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
#line 2815 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 798 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
#line 2825 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 807 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
#line 2835 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 813 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
#line 2845 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 822 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
#line 2855 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 828 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
#line 2865 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 837 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
#line 2875 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 843 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
#line 2885 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 849 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
#line 2895 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 858 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
#line 2905 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 865 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
#line 2915 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 871 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2925 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 877 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2935 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 883 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
#line 2945 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 889 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
#line 2955 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 895 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2965 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 901 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2975 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 907 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2985 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 916 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
#line 2995 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 922 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
#line 3005 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 928 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
#line 3015 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 934 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
#line 3025 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 940 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
#line 3035 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 946 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
#line 3045 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 955 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
#line 3055 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 961 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
#line 3065 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 967 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
#line 3075 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 976 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
#line 3085 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 982 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
#line 3095 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 992 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}
#line 3105 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 998 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}
#line 3115 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1004 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}
#line 3125 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1009 "../parser/cParser.y" /* yacc.c:1646  */
    {
		  if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
	      }
	    }
#line 3135 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1017 "../parser/cParser.y" /* yacc.c:1646  */
    {

		table.pushLevelOn();
		inInsertMode = true;
		}
#line 3145 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1025 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff(); 
		inInsertMode = false;  
		}
#line 3154 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1032 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = false; 
		}
#line 3162 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1038 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.pushLevelOn();
	   }
#line 3170 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1044 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff();  
		}
#line 3178 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1051 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
#line 3188 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1057 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
#line 3198 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1066 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3208 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1072 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
#line 3218 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1078 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3228 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1087 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3238 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1093 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
#line 3248 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1099 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3258 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1105 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3268 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1111 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3278 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1117 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3288 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1123 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3298 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1129 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3308 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1135 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3318 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1141 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3328 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1150 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
#line 3338 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1156 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
#line 3348 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1162 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
#line 3358 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1168 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
#line 3368 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1174 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
#line 3378 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1183 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
#line 3388 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1189 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
#line 3398 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1198 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
#line 3408 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1204 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
#line 3418 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1213 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
#line 3428 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1219 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
#line 3438 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1225 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
#line 3448 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1231 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
#line 3458 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1237 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
#line 3468 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1243 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
#line 3478 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1249 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
#line 3488 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1255 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
#line 3498 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1261 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
#line 3508 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1267 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
#line 3518 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1273 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
#line 3528 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1282 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
#line 3538 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1288 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
#line 3548 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1297 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
#line 3558 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1306 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
#line 3568 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1312 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
#line 3578 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1321 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
#line 3588 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1327 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
#line 3598 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1336 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
#line 3608 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1342 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
#line 3618 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1351 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
#line 3628 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1357 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
#line 3638 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1366 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
#line 3648 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1372 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
#line 3658 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1381 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
#line 3668 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1387 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
#line 3678 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1393 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
#line 3688 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1402 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
#line 3698 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1408 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
#line 3708 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1414 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
#line 3718 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1420 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
#line 3728 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1426 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
#line 3738 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1435 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
#line 3748 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1441 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
#line 3758 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1447 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
#line 3768 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1456 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
#line 3778 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1462 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
#line 3788 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1468 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
#line 3798 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1477 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
#line 3808 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1483 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
#line 3818 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1489 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
#line 3828 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1495 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
#line 3838 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1504 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
#line 3848 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1510 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
#line 3858 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1519 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
#line 3868 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1525 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
#line 3878 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1531 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
#line 3888 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1537 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << std::endl;
			}
		}
#line 3898 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1543 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
#line 3908 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1549 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
#line 3918 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1558 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
#line 3928 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1564 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
#line 3938 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1570 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
#line 3948 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1576 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
#line 3958 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1582 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
#line 3968 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1588 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
#line 3978 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1597 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
		}
#line 3988 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1603 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
#line 3998 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1609 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
#line 4008 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1615 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}
		}
#line 4018 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1621 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
#line 4028 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1627 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
#line 4038 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1633 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
#line 4048 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1639 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
#line 4058 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1648 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			symbolTableEntry* tempPtr = table.searchTopOfStack($1->getIdentifierName());
 			dVal tempData = tempPtr->getIdentifierValue(); */

			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
#line 4072 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1658 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
#line 4082 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1664 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
#line 4092 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1670 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
#line 4102 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1679 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
#line 4112 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1685 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
#line 4122 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1694 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}

		}
#line 4133 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1701 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			std::string tempName = $1->getIdentifierName(); 
 			symbolTableEntry* tempPtr = table.searchTopOfStack(tempName); */

			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
#line 4147 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1711 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
#line 4157 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1717 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
#line 4167 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1726 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
#line 4177 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1734 "../parser/cParser.y" /* yacc.c:1646  */
    { }
#line 4183 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4187 "cParser.tab.c" /* yacc.c:1646  */
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
#line 1736 "../parser/cParser.y" /* yacc.c:1906  */
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
