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

#line 83 "cParser.tab.c" /* yacc.c:339  */

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
#line 40 "../parser/cParser.y" /* yacc.c:355  */

	typedef struct {
	    int dataType;
	    typedef union {
	        char _char;
	        short _short;
	        int _int;
	        long _long;
	        float _float; 
	        double _double;        
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
#define YYLAST   1519

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

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
       0,   110,   110,   115,   122,   131,   137,   149,   155,   161,
     167,   179,   185,   194,   200,   209,   215,   221,   227,   233,
     239,   248,   254,   260,   266,   272,   281,   287,   293,   299,
     305,   311,   317,   323,   329,   335,   341,   347,   356,   362,
     371,   377,   383,   392,   398,   407,   413,   422,   428,   437,
     443,   461,   470,   476,   482,   488,   497,   503,   512,   518,
     524,   533,   539,   545,   554,   560,   569,   575,   584,   590,
     599,   605,   611,   617,   623,   629,   635,   644,   650,   656,
     662,   671,   677,   686,   692,   701,   707,   716,   722,   728,
     737,   743,   752,   758,   764,   773,   779,   788,   794,   803,
     809,   815,   824,   831,   837,   843,   849,   855,   861,   867,
     873,   882,   888,   894,   900,   906,   912,   921,   927,   933,
     942,   948,   958,   964,   970,   976,   984,   994,  1003,  1010,
    1018,  1024,  1030,  1039,  1045,  1051,  1060,  1066,  1072,  1078,
    1084,  1090,  1096,  1102,  1108,  1114,  1123,  1129,  1135,  1141,
    1147,  1156,  1162,  1171,  1177,  1186,  1192,  1198,  1204,  1210,
    1216,  1222,  1228,  1234,  1240,  1246,  1255,  1261,  1270,  1279,
    1285,  1294,  1300,  1309,  1315,  1324,  1330,  1339,  1345,  1354,
    1360,  1366,  1375,  1381,  1387,  1393,  1399,  1408,  1414,  1420,
    1429,  1435,  1441,  1450,  1456,  1462,  1468,  1477,  1483,  1492,
    1498,  1504,  1510,  1516,  1522,  1531,  1537,  1543,  1549,  1555,
    1561,  1570,  1576,  1582,  1588,  1594,  1600,  1606,  1612,  1621,
    1631,  1637,  1643,  1652,  1658,  1667,  1674,  1684,  1690,  1699,
    1708
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

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     642,  -148,  -148,    19,    72,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,    13,     2,   642,  -148,  -148,  -148,    17,
     662,   662,   662,  -148,    16,  -148,  1399,   210,    28,  -148,
    -148,  -148,    19,   -43,    24,   -28,  -148,  -148,  -148,    45,
    -148,  1355,  -148,  -148,  -148,   710,   -17,   339,  -148,  1399,
      17,  -148,   686,   809,   210,  -148,  -148,  -148,   -13,  -148,
      20,    24,  -148,    72,  1077,  1399,  -148,   710,   710,   985,
    -148,    69,   710,  -148,   662,  -148,  -148,  -148,    68,  -148,
      21,    -9,    96,  -148,    94,  -148,  -148,  -148,  -148,  -148,
    -148,  1216,  1262,  1262,  -148,  -148,  -148,  -148,  -148,  -148,
     554,  -148,  -148,    86,     1,   122,   103,   117,   130,   258,
     206,   267,   257,   129,  -148,  -148,  1273,   274,  -148,  -148,
    -148,  -148,    24,  -148,  1273,    -7,  -148,  1077,  -148,  -148,
    -148,   526,  -148,  -148,  -148,  -148,  -148,  1273,    54,  -148,
     189,  1445,   936,   496,   598,   820,  -148,    53,  -148,   243,
    -148,  1266,    24,  -148,   554,  -148,  1273,  -148,  -148,    88,
     154,   100,  -148,  -148,  1273,  1273,  1273,  1273,  1273,  1273,
    1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,
    1273,  1273,  1273,  -148,    24,  -148,  -148,    24,   602,  1273,
    -148,  -148,  -148,  -148,    77,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  1273,  -148,  -148,    69,
    1273,  -148,  -148,   496,  -148,  1273,   193,   176,   190,   204,
     496,   214,    24,   228,   233,  1096,  -148,  -148,  -148,  -148,
     382,  -148,  -148,  -148,    76,   203,  -148,   222,   236,  -148,
     231,   243,  1423,   870,  -148,  -148,  -148,   250,  1311,   245,
    -148,  1273,  1273,  -148,   122,   261,   103,   117,   130,   258,
     206,   206,   267,   267,   267,   267,   257,   257,   129,   129,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   101,    66,   758,
    -148,  -148,  -148,  -148,  -148,   439,   269,   496,  1273,  1273,
    1273,   223,  1142,   259,  -148,  -148,  -148,   208,  -148,  -148,
    -148,   496,  -148,  -148,  -148,  -148,   263,  -148,   266,  -148,
    -148,  -148,  1273,  1273,  -148,  -148,  -148,  -148,  -148,   496,
    -148,   105,   109,   116,   272,  1159,   212,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   496,   496,   496,
    1273,   881,   229,  1205,   247,  -148,  -148,   149,   496,   151,
     930,   979,   232,   496,   291,  -148,   496,   496,   167,   496,
     175,  1028,  -148,  -148,  -148,  -148,   496,  -148,   496,   496,
     186,  -148,  -148,  -148,   496,  -148
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
       0,     7,     0,     0,    69,    82,    80,    71,     0,    64,
      66,     0,    12,     0,     0,     0,     9,    52,    54,     0,
      45,     0,     0,   122,     0,   128,    14,     8,    49,    74,
      88,     0,    83,    85,     0,    90,   225,   227,   228,   226,
     229,     0,     0,     0,   207,   208,   206,   205,   209,   210,
       0,    72,   168,     0,   166,   169,   171,   173,   175,   177,
     179,   182,   187,   190,   193,   197,     0,   199,   211,   220,
     221,   219,     0,    61,     0,     0,    48,     0,    50,    92,
     153,   197,    10,    53,    55,    41,    46,     0,     0,    56,
      58,     0,   128,     0,     0,     0,    87,    99,    89,   100,
      75,     0,     0,    76,     0,   203,     0,   200,   201,    97,
       0,     0,   151,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,   217,   218,     0,     0,     0,
      65,    67,    62,    95,     0,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   155,     0,    59,    51,     0,
       0,    40,   127,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   111,   113,   112,
       0,   114,   115,   116,     0,   219,   107,     0,     0,   103,
       0,   101,     0,     0,    84,    86,    91,     0,     0,    99,
      98,     0,     0,   222,   170,     0,   172,   174,   176,   178,
     180,   181,   185,   186,   183,   184,   188,   189,   191,   192,
     194,   195,   196,   216,   215,   213,   223,     0,     0,     0,
      93,   154,    57,    60,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   147,   148,   149,     0,   130,   132,
     121,     0,   108,   102,   104,   109,     0,   105,     0,   204,
     198,   152,     0,     0,   214,   212,    94,    96,   127,     0,
     119,     0,     0,     0,     0,     0,     0,   146,   150,   123,
     117,   110,   106,   167,   224,   125,   118,     0,     0,     0,
       0,     0,     0,     0,   133,   135,   136,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
       0,     0,   134,   137,   139,   140,     0,   142,     0,     0,
       0,   141,   143,   144,     0,   145
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,   284,  -148,    52,   -34,     5,  -148,   157,
     200,  -148,  -148,   248,  -148,   260,   -68,   -65,  -148,   112,
    -148,   265,   202,    14,   -31,    44,  -148,   -53,  -148,   171,
    -148,  -131,  -148,   173,   -75,  -147,   -23,  -148,  -148,    49,
    -148,    10,   187,  -148,  -148,   118,  -148,  -148,  -148,  -107,
     -73,  -148,   -24,  -106,  -148,   168,   169,   177,   172,   178,
     123,    26,   126,   127,  -112,    -5,  -148,  -148,  -148,  -148,
    -148,  -148,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    58,    59,    60,    30,    31,
      32,    33,    34,    79,    49,    50,    80,    81,   148,   149,
      35,    68,    69,    36,    37,    38,    42,   247,    92,    93,
      94,   138,   204,   170,   248,   159,   236,   237,   238,   239,
      84,   294,   153,    85,   339,   240,   241,   242,   243,   244,
     172,   216,   140,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   141,   126,   127,   128,   287,
     129,   130,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   139,    46,   171,    39,    29,   203,    64,    67,    91,
     251,   146,   143,   144,   193,   158,     1,    75,    43,     1,
       1,   174,    71,    45,     1,    39,   132,     1,   201,    39,
      29,     1,   132,    82,    56,    52,    53,    54,    39,   112,
     133,   217,   160,    51,    70,   169,   202,    41,   175,   250,
     152,     3,    28,     3,    48,     3,     1,   171,   125,   171,
      39,   134,    95,    44,   139,     4,    55,    90,   265,   154,
     155,    70,     1,    39,    88,     1,     4,    28,   280,   281,
     282,    39,    72,   146,    73,    61,    66,    88,    18,    19,
      39,   218,   288,   219,   260,   150,   165,   167,   168,   169,
      76,   154,   155,     3,   156,   262,     3,   147,    87,    74,
     112,    86,   251,   310,   293,   262,   289,     4,   325,   296,
       4,   125,     3,   112,   142,   286,    64,    86,   307,   125,
     290,   112,    70,   162,   157,   161,   258,   155,   173,   262,
     323,   176,   125,   291,   262,   163,   177,   318,   262,   320,
     125,   263,   324,   245,    39,   262,   347,    39,   327,    90,
     348,   178,   256,   190,   191,   192,    90,   349,    43,   125,
     179,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   262,   321,
     262,   331,   332,   333,   283,   336,   112,   284,   157,   316,
     364,   112,   366,    40,    86,   261,   262,   301,   272,   273,
     274,   275,    77,   259,   262,   125,   139,   309,   376,    39,
     125,   182,   183,   245,   298,   262,   378,   220,   352,   112,
     245,   297,   303,   150,    77,    77,    77,   384,   299,    77,
     245,   311,    65,   357,   359,   338,   362,   262,   125,   353,
     344,   262,   300,   368,   370,    78,   125,    90,    62,    63,
     184,   185,   302,    90,   380,   304,   360,    77,   262,   371,
     305,   262,   309,   312,   330,   180,   181,    78,    78,    78,
     186,   187,    78,   314,   194,   195,   196,   313,   340,   188,
     189,   252,   253,   258,   155,   245,   337,   245,   343,   322,
     262,   319,   259,   270,   271,   334,   346,   329,    77,    47,
      78,   245,   276,   277,   341,   278,   279,   125,   342,   197,
     350,    77,   198,   199,   354,   355,   356,   363,   373,   245,
     151,   292,   255,   136,   200,   365,   135,   257,   345,   223,
     372,   295,   264,   374,   375,   266,   377,   245,   245,   245,
     268,    78,     0,   381,   267,   382,   383,   269,   245,     0,
       0,   385,     0,   245,    78,     0,   245,   245,     0,   245,
    -126,     0,     0,     0,     0,     0,   245,     0,   245,   245,
       0,     0,     0,     0,   245,     1,    96,    97,    98,    99,
     100,   101,    83,   102,   103,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,   104,   105,   106,     0,     0,   224,
       0,     0,   107,     0,   108,     0,     0,     0,   109,     0,
     110,     0,    57,     0,     0,   308,     0,     0,     0,     0,
       0,     0,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   104,   105,   106,     0,     0,   224,     0,     0,   107,
       0,   108,     0,     0,     0,   109,     0,   110,     0,    57,
       0,     0,   328,     0,     0,     0,     0,     0,     0,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,   225,   226,   227,     0,
     228,   229,   230,   231,   232,   233,   234,   235,   104,   105,
     106,     0,     0,   224,     0,     0,   107,     0,   108,     0,
       0,     0,   109,     0,   110,     0,    57,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,     1,    96,    97,
      98,    99,   100,   101,     0,   102,   103,   215,     0,     0,
       0,     0,     0,   225,   226,   227,     0,   228,   229,   230,
     231,   232,   233,   234,   235,     2,   104,   105,   106,     0,
       0,     0,     0,     0,   107,     0,   108,     0,     0,     0,
     109,     1,   110,     0,     0,     1,    96,    97,    98,    99,
     100,   101,     0,   102,   103,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     2,
       0,     0,     3,     0,   104,   105,   106,     0,     0,     0,
       0,     0,   107,     0,   108,     1,   154,   155,   109,   246,
     110,     0,     0,   285,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     2,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       4,     0,     0,     2,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     2,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    89,     0,     0,
       0,     2,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     1,    96,    97,    98,    99,   100,   101,     0,   102,
     103,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
     104,   105,   106,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,   109,     0,   110,     0,   137,     0,
       0,   326,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     0,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,     0,     0,     0,     0,     0,   107,
       0,   108,   104,   105,   106,   109,     0,   110,     0,     0,
     107,   111,   108,     0,     0,     0,   109,     0,   110,     0,
       0,     0,   249,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     1,    96,    97,    98,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,     0,     0,     0,     0,     0,
     107,     0,   108,   104,   105,   106,   109,     0,   110,     0,
       0,   107,   317,   108,     0,     0,     0,   109,     0,   110,
       0,     0,   358,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,     0,     0,     2,     0,     0,
     107,     0,   108,     0,     0,     0,   109,     0,   110,     0,
       0,   367,     1,    96,    97,    98,    99,   100,   101,   222,
     102,   103,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   104,   105,   106,     0,     0,     2,     0,     0,   107,
       0,   108,     0,     0,     0,   109,     0,   110,     0,     0,
     369,     1,    96,    97,    98,    99,   100,   101,   145,   102,
     103,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     104,   105,   106,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,   109,     0,   110,     0,     0,   379,
       1,    96,    97,    98,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,   107,     0,   108,
       0,     0,     0,   109,     0,   110,     0,   137,   104,   105,
     106,     0,     0,   306,     0,     0,   107,     0,   108,     0,
       0,     0,   109,     0,   110,     1,    96,    97,    98,    99,
     100,   101,     0,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     0,     0,   104,   105,   106,     0,     0,   335,
       0,     0,   107,     0,   108,     0,     0,     0,   109,     0,
     110,   104,   105,   106,     0,     0,   351,     0,     0,   107,
       0,   108,     0,     0,     0,   109,     0,   110,     1,    96,
      97,    98,    99,   100,   101,     0,   102,   103,     0,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
       0,     0,   361,     0,     0,   107,     0,   108,   104,   105,
     106,   109,     0,   110,     0,     0,   107,     0,   108,     0,
       0,     0,   109,     0,   164,     1,    96,    97,    98,    99,
     100,   101,     0,   102,   103,     0,     1,    96,    97,    98,
      99,   100,   101,     0,   102,   103,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,     2,     0,     0,
       0,     0,   107,     0,   108,   104,   105,   106,   109,     0,
     166,     0,     0,   107,     0,   108,     0,     0,     0,   109,
       0,   110,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   254,     2,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   258,
     155,     0,   246,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     2,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   315,     0,     2,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   221,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    74,     0,   110,     4,     0,   137,    38,    51,    62,
     157,    79,    77,    78,   126,    90,     3,    51,     4,     3,
       3,    20,    50,    23,     3,    25,    39,     3,   134,    29,
      25,     3,    39,    50,    34,    30,    31,    32,    38,    63,
      53,   147,    51,    29,    44,   110,    53,     3,    47,   155,
      84,    34,     0,    34,    37,    34,     3,   164,    63,   166,
      60,    41,    62,    50,   137,    48,    50,    62,   175,    48,
      49,    71,     3,    73,    60,     3,    48,    25,   190,   191,
     192,    81,    37,   151,    39,    36,    42,    73,    69,    70,
      90,    37,   199,    39,   169,    81,   101,   102,   103,   164,
      51,    48,    49,    34,    90,    39,    34,    38,    59,    41,
     134,    59,   259,    37,   220,    39,    39,    48,    52,   225,
      48,   126,    34,   147,    75,   198,   157,    75,   235,   134,
      53,   155,   132,    39,    90,    39,    48,    49,    52,    39,
      39,    19,   147,   216,    39,    51,    43,   253,    39,   261,
     155,    51,    51,   153,   154,    39,    51,   157,   289,   154,
      51,    44,   162,    34,    35,    36,   161,    51,   154,   174,
      40,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    39,   262,
      39,   298,   299,   300,   194,   302,   220,   197,   154,   252,
      51,   225,    51,     3,   152,    51,    39,   230,   182,   183,
     184,   185,    55,   169,    39,   220,   289,   240,    51,   219,
     225,    15,    16,   223,    48,    39,    51,    38,   335,   253,
     230,    38,   232,   219,    77,    78,    79,    51,    48,    82,
     240,    38,    42,   350,   351,    37,   353,    39,   253,    37,
     323,    39,    48,   360,   361,    55,   261,   252,    48,    49,
      54,    55,    48,   258,   371,    37,    37,   110,    39,    37,
      37,    39,   295,    51,   297,    17,    18,    77,    78,    79,
      13,    14,    82,    52,    10,    11,    12,    51,   311,    32,
      33,    48,    49,    48,    49,   295,    37,   297,   322,    38,
      39,    51,   258,   180,   181,    82,   329,    38,   151,    25,
     110,   311,   186,   187,    51,   188,   189,   322,    52,    45,
      48,   164,    48,    49,   347,   348,   349,    80,    37,   329,
      82,   219,   161,    73,   132,   358,    71,   164,   328,   152,
     363,   223,   174,   366,   367,   176,   369,   347,   348,   349,
     178,   151,    -1,   376,   177,   378,   379,   179,   358,    -1,
      -1,   384,    -1,   363,   164,    -1,   366,   367,    -1,   369,
      31,    -1,    -1,    -1,    -1,    -1,   376,    -1,   378,   379,
      -1,    -1,    -1,    -1,   384,     3,     4,     5,     6,     7,
       8,     9,    53,    11,    12,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    50,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    41,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,     3,    48,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    31,
      -1,    -1,    34,    -1,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,     3,    48,    49,    46,    51,
      48,    -1,    -1,    51,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      48,    -1,    -1,    31,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    31,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    51,    -1,    -1,
      -1,    31,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,    -1,
      -1,    53,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    32,    33,    34,    46,    -1,    48,    -1,    -1,
      40,    52,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    -1,    52,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    32,    33,    34,    46,    -1,    48,    -1,
      -1,    40,    52,    42,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    51,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,    31,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    51,     3,     4,     5,     6,     7,     8,     9,    53,
      11,    12,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    32,    33,    34,    -1,    -1,    31,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,     3,     4,     5,     6,     7,     8,     9,    53,    11,
      12,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    50,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,    -1,
      48,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    40,    -1,    42,    32,    33,
      34,    46,    -1,    48,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    31,    -1,    -1,
      -1,    -1,    40,    -1,    42,    32,    33,    34,    46,    -1,
      48,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    31,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    51,    -1,    31,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    53,    -1,
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
      96,   116,   117,   118,   119,   161,     4,     5,     6,     7,
       8,     9,    11,    12,    32,    33,    34,    40,    42,    46,
      48,    52,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   159,
     160,   161,    39,    53,    41,   110,   104,    50,   120,   139,
     141,   154,   128,   106,   106,    53,   105,    38,   107,   108,
     112,   102,    95,   131,    48,    49,   112,   114,   123,   124,
      51,    39,    39,    51,    48,   154,    48,   154,   154,   106,
     122,   138,   139,    52,    20,    47,    19,    43,    44,    40,
      17,    18,    15,    16,    54,    55,    13,    14,    32,    33,
      34,    35,    36,   153,    10,    11,    12,    45,    48,    49,
     111,   142,    53,   120,   121,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    41,   140,   142,    37,    39,
      38,    53,    53,   131,    37,    77,    78,    79,    81,    82,
      83,    84,    85,    86,    87,    88,   125,   126,   127,   128,
     134,   135,   136,   137,   138,   161,    51,   116,   123,    52,
     142,   124,    48,    49,    75,   118,   161,   122,    48,   114,
     123,    51,    39,    51,   144,   138,   145,   146,   147,   148,
     149,   149,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   161,   161,    51,   139,   158,   138,    39,
      53,   139,   108,   142,   130,   134,   142,    38,    48,    48,
      48,   125,    48,   161,    37,    37,    37,   138,    53,   125,
      37,    38,    51,    51,    52,    51,   116,    52,   142,    51,
     153,   139,    38,    39,    51,    52,    53,   120,    53,    38,
     125,   138,   138,   138,    82,    37,   138,    37,    37,   133,
     125,    51,    52,   141,   139,   130,   125,    51,    51,    51,
      48,    37,   138,    37,   125,   125,   125,   138,    51,   138,
      37,    37,   138,    80,    51,   125,    51,    51,   138,    51,
     138,    37,   125,    37,   125,   125,    51,   125,    51,    51,
     138,   125,   125,   125,    51,   125
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
       1,     3,     3,     4,     3,     4,     4,     1,     2,     2,
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
#line 110 "../parser/cParser.y" /* yacc.c:1646  */
    {	std::cout << "FINISHED THE PROGRAM" << std::endl; 
								table.popLevelOff();}
#line 1868 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 116 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1879 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 123 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
#line 1889 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 132 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
#line 1899 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 138 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
#line 1909 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 150 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
#line 1919 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 156 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1929 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 162 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
#line 1939 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 168 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1949 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 180 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl << std::endl;
			}
		}
#line 1959 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 186 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl << std::endl;
			}
		}
#line 1969 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 195 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
#line 1979 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 201 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
#line 1989 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 210 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
#line 1999 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 216 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2009 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 222 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
#line 2019 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 228 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2029 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 234 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
#line 2039 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 240 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
#line 2049 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 249 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
#line 2059 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 255 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
#line 2069 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 261 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
#line 2079 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 267 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
#line 2089 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 273 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
#line 2099 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 282 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
#line 2109 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 288 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
#line 2119 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 294 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
#line 2129 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 300 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
#line 2139 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 306 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
#line 2149 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 312 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
#line 2159 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 318 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
#line 2169 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 324 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
#line 2179 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 330 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
#line 2189 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 336 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
#line 2199 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 342 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
#line 2209 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 348 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
#line 2219 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 357 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
#line 2229 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 363 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
#line 2239 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 372 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2249 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 378 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2259 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 384 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
#line 2269 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 393 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
#line 2279 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 399 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
#line 2289 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 408 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
#line 2299 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 414 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
#line 2309 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 423 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
#line 2319 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 429 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
#line 2329 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 438 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
#line 2339 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 444 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*std::cout << "$$: " << $$.sVal << std::endl;*/
 			std::cout << "$1 (declarator): " << (yyvsp[-2].entry)->getIdentifierName() << std::endl;
 			//std::cout << "$2 (assign): " << $2 << std::endl;
 			//std::cout << "$3 (initializer): " << $3 << std::endl; 
 			(yyvsp[-2].entry)->setIdentifierValue(*((yyvsp[0].val)), (yyvsp[0].val)->dataType);
 			//dVal temp = $1->getIdentifierValue(); 
 			std::cout << "Value returned from symbol table entry: ";
 			(yyvsp[-2].entry)->printIdentifierValue(); 
 			std::cout << std::endl; 
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
		}
#line 2358 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 462 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl << std::endl;
			}
		}
#line 2368 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 471 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
#line 2378 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 477 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2388 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 483 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2398 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 489 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2408 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 498 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
#line 2418 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 504 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
#line 2428 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 513 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
#line 2438 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 519 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
#line 2448 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 525 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
#line 2458 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 534 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2468 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 540 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2478 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 546 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
#line 2488 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 555 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
#line 2498 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 561 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
#line 2508 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 570 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
#line 2518 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 576 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
#line 2528 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 585 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
#line 2538 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 591 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
#line 2548 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 600 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
#line 2558 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 606 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
#line 2568 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 612 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2578 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 618 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2588 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 624 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2598 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 630 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2608 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 636 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
#line 2618 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 645 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
#line 2628 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 651 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
#line 2638 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 657 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
#line 2648 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 663 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
#line 2658 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 672 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2668 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 678 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}
#line 2678 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 687 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}
#line 2688 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 693 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}
#line 2698 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 702 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << std::endl;
			}
		}
#line 2708 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 708 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << std::endl;
			}
		}
#line 2718 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 717 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
#line 2728 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 723 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
#line 2738 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 729 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
#line 2748 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 738 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
#line 2758 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 744 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
#line 2768 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 753 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
#line 2778 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 759 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
#line 2788 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 765 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
#line 2798 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 774 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
#line 2808 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 780 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
#line 2818 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 789 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
#line 2828 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 795 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
#line 2838 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 804 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
#line 2848 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 810 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
#line 2858 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 816 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
#line 2868 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 825 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
#line 2878 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 832 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
#line 2888 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 838 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2898 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 844 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2908 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 850 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
#line 2918 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 856 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
#line 2928 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 862 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2938 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 868 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2948 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 874 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2958 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 883 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
#line 2968 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 889 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
#line 2978 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 895 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
#line 2988 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 901 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
#line 2998 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 907 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
#line 3008 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 913 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
#line 3018 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 922 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
#line 3028 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 928 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
#line 3038 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 934 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
#line 3048 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 943 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
#line 3058 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 949 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
#line 3068 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 959 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}
#line 3078 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 965 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}
#line 3088 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 971 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}
#line 3098 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 976 "../parser/cParser.y" /* yacc.c:1646  */
    {
		  if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
	      }
	    }
#line 3108 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 984 "../parser/cParser.y" /* yacc.c:1646  */
    {

		std::cout << "Table goes from size " << table.getTableSize();
		table.pushLevelOn();
		std::cout << " to " << table.getTableSize() << std::endl; 
		inInsertMode = true;
		}
#line 3120 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 994 "../parser/cParser.y" /* yacc.c:1646  */
    {
		std::cout << "Table goes from size " << table.getTableSize();
		table.popLevelOff(); 
		std::cout << " to " << table.getTableSize() << std::endl; 
		inInsertMode = false;  
		}
#line 3131 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1003 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = false; 
		std::cout << "lookup mode" << std::endl; 
		}
#line 3140 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1010 "../parser/cParser.y" /* yacc.c:1646  */
    {
		std::cout << "Table goes from size " << table.getTableSize();
		table.pushLevelOn();
		std::cout << " to " << table.getTableSize() << std::endl;  
	   }
#line 3150 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1018 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff();  
		}
#line 3158 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1025 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
#line 3168 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1031 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
#line 3178 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1040 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3188 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1046 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
#line 3198 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1052 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3208 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1061 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3218 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1067 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
#line 3228 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1073 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3238 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1079 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3248 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1085 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3258 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1091 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3268 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1097 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3278 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1103 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3288 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1109 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3298 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1115 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3308 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1124 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
#line 3318 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1130 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
#line 3328 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1136 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
#line 3338 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1142 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
#line 3348 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1148 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
#line 3358 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1157 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
#line 3368 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1163 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
#line 3378 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1172 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
#line 3388 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1178 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
#line 3398 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1187 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
#line 3408 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1193 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
#line 3418 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1199 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
#line 3428 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1205 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
#line 3438 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1211 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
#line 3448 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1217 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
#line 3458 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1223 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
#line 3468 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1229 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
#line 3478 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1235 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
#line 3488 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1241 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
#line 3498 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1247 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
#line 3508 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1256 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
#line 3518 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1262 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
#line 3528 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1271 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
#line 3538 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1280 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
#line 3548 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1286 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
#line 3558 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1295 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
#line 3568 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1301 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
#line 3578 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1310 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
#line 3588 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1316 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
#line 3598 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1325 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
#line 3608 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1331 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
#line 3618 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1340 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
#line 3628 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1346 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
#line 3638 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1355 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
#line 3648 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1361 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
#line 3658 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1367 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
#line 3668 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1376 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
#line 3678 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1382 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
#line 3688 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1388 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
#line 3698 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1394 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
#line 3708 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1400 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
#line 3718 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1409 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
#line 3728 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1415 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
#line 3738 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1421 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
#line 3748 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1430 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
#line 3758 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1436 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
#line 3768 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1442 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
#line 3778 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1451 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
#line 3788 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1457 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
#line 3798 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1463 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
#line 3808 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1469 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
#line 3818 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1478 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
#line 3828 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1484 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
#line 3838 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1493 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
#line 3848 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1499 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
#line 3858 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1505 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
#line 3868 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1511 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << std::endl;
			}
		}
#line 3878 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1517 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
#line 3888 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1523 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
#line 3898 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1532 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
#line 3908 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1538 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
#line 3918 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1544 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
#line 3928 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1550 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
#line 3938 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1556 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
#line 3948 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1562 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
#line 3958 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1571 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
		}
#line 3968 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1577 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
#line 3978 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1583 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
#line 3988 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1589 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}
		}
#line 3998 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1595 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
#line 4008 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1601 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
#line 4018 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1607 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
#line 4028 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1613 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
#line 4038 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1622 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			symbolTableEntry* tempPtr = table.searchTopOfStack($1->getIdentifierName());
 			dVal tempData = tempPtr->getIdentifierValue(); */

			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
#line 4052 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1632 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
#line 4062 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1638 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
#line 4072 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1644 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
#line 4082 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1653 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
#line 4092 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1659 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
#line 4102 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1668 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}

		}
#line 4113 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1675 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			std::string tempName = $1->getIdentifierName(); 
 			symbolTableEntry* tempPtr = table.searchTopOfStack(tempName); */

			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
#line 4127 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1685 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
#line 4137 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1691 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
#line 4147 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1700 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
#line 4157 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1708 "../parser/cParser.y" /* yacc.c:1646  */
    { std::cout << (yyvsp[0].entry)->getIdentifierName() << std::endl; }
#line 4163 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4167 "cParser.tab.c" /* yacc.c:1646  */
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
#line 1710 "../parser/cParser.y" /* yacc.c:1906  */
 /* end of ANSI C grammar and actions */

/* user code */
void yyerror(const char* s) {
	// iterate through 
	for (int i = 0; i < colPosition; i++) {
		std::cout << "-";
	}
	std::cout << "^" << std::endl; 
	std::cout << "Error on line #" << yylineno << ": " << s << std::endl;
	exit(-1);
}
