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
	using namespace std;

	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern ofstream outY;

#line 81 "cParser.tab.c" /* yacc.c:339  */

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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER_CONSTANT = 259,
    FLOATING_CONSTANT = 260,
    CHARACTER_CONSTANT = 261,
    ENUMERATION_CONSTANT = 262,
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
#line 40 "../parser/cParser.y" /* yacc.c:355  */

	char* sVal;
	float numVal;
	class symbolTableEntry* entry; 

#line 216 "cParser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "cParser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1738

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

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
       0,    89,    89,    96,   105,   111,   120,   126,   132,   138,
     147,   153,   162,   168,   177,   183,   189,   195,   201,   207,
     216,   222,   228,   234,   240,   249,   255,   261,   267,   273,
     279,   285,   291,   297,   303,   309,   315,   324,   330,   339,
     345,   351,   360,   366,   375,   381,   390,   396,   405,   411,
     425,   434,   440,   446,   452,   461,   467,   476,   482,   488,
     497,   503,   509,   518,   524,   533,   539,   548,   554,   563,
     569,   575,   581,   587,   593,   599,   608,   614,   620,   626,
     635,   641,   650,   656,   665,   671,   680,   686,   692,   701,
     707,   716,   722,   728,   737,   743,   752,   758,   767,   773,
     779,   788,   795,   801,   807,   813,   819,   825,   831,   837,
     846,   852,   858,   864,   870,   876,   885,   891,   897,   906,
     912,   921,   927,   933,   939,   948,   954,   963,   969,   975,
     984,   990,   996,  1002,  1008,  1014,  1020,  1026,  1032,  1038,
    1047,  1053,  1059,  1065,  1071,  1080,  1086,  1095,  1101,  1110,
    1116,  1122,  1128,  1134,  1140,  1146,  1152,  1158,  1164,  1170,
    1179,  1185,  1194,  1203,  1209,  1218,  1224,  1233,  1239,  1248,
    1254,  1263,  1269,  1278,  1284,  1290,  1299,  1305,  1311,  1317,
    1323,  1332,  1338,  1344,  1353,  1359,  1365,  1374,  1380,  1386,
    1392,  1401,  1407,  1416,  1422,  1428,  1434,  1440,  1446,  1455,
    1461,  1467,  1473,  1479,  1485,  1494,  1500,  1506,  1512,  1518,
    1524,  1530,  1536,  1545,  1551,  1557,  1563,  1572,  1578,  1587,
    1593,  1599,  1605,  1614,  1623
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "ENUMERATION_CONSTANT",
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
  "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept", "translation_unit",
  "external_declaration", "function_definition", "declaration",
  "declaration_list", "declaration_specifiers", "storage_class_specifier",
  "type_specifier", "type_qualifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "init_declarator_list",
  "init_declarator", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_list",
  "selection_statement", "iteration_statement", "jump_statement",
  "expression", "assignment_expression", "assignment_operator",
  "conditional_expression", "constant_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "unary_operator", "postfix_expression", "primary_expression",
  "argument_expression_list", "constant", "string", "identifier", YY_NULLPTR
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

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     883,  -215,  -215,   -15,    61,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,    12,   723,  -215,  -215,  -215,    80,   903,
     903,   903,  -215,    13,  -215,  1640,   184,    39,  -215,  -215,
    -215,   -15,   -30,    33,     7,  -215,  -215,  -215,    47,  -215,
    1596,  -215,  -215,  -215,   373,    18,   453,  -215,  1640,    80,
    -215,   927,  1050,   184,  -215,  -215,  -215,    -8,  -215,    36,
      33,  -215,    61,  1318,  1640,  -215,   373,   373,   674,  -215,
     109,   373,  -215,  -215,  -215,  -215,  -215,  1457,  1503,  1503,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,   795,  -215,  1514,
      65,    71,    75,    94,   682,   104,    33,    14,   119,  1337,
     539,  -215,  -215,  -215,  -215,   345,  -215,  -215,  -215,   156,
    -215,  -215,     2,   147,   142,   131,   182,   289,    -2,   314,
     297,   241,  -215,   261,  1514,   114,  -215,  -215,  -215,   152,
    -215,  -215,   129,  -215,    45,   177,   197,  -215,    62,  -215,
    -215,  -215,   188,  -215,  -215,    33,  -215,  1514,     5,  -215,
    1318,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  1514,   164,
    -215,   207,  1177,   795,  -215,  1514,  -215,  -215,    82,   203,
      81,   225,   682,  1514,  1514,  1514,   185,  1383,   235,  -215,
    -215,  -215,   214,  -215,   625,  -215,  -215,  -215,  1514,  1514,
    1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,
    1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  1514,
    -215,    33,  -215,  -215,    33,   843,  1514,   682,   839,  1061,
    -215,    27,  -215,   285,  -215,  1507,    33,  -215,  -215,  -215,
    -215,  -215,  -215,    35,  -215,  -215,   109,  1514,  -215,   227,
    1552,   287,  -215,  1514,  -215,   682,  -215,    90,    97,   100,
     232,  1400,   256,  -215,  -215,  -215,  -215,   147,   300,   142,
     131,   182,   289,    -2,    -2,   314,   314,   314,   314,   297,
     297,   241,   241,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,   130,    69,  -215,  -215,   246,   249,  -215,   252,   285,
    1664,  1111,  -215,  -215,  -215,   999,  -215,  -215,  -215,  -215,
    -215,  -215,   682,   682,   682,  1514,  1122,   259,  1446,  1514,
    1514,  -215,  -215,  -215,  -215,  -215,  -215,   257,  -215,   260,
    -215,  -215,   212,  -215,  -215,   133,   682,   135,  1171,  1220,
     266,  -215,  -215,  -215,  -215,   682,   278,  -215,   682,   682,
     137,   682,   140,  1269,  -215,  -215,  -215,  -215,   682,  -215,
     682,   682,   141,  -215,  -215,  -215,   682,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   224,    36,    76,     0,    24,    23,    22,    20,    21,
      26,    27,    28,    29,    32,    33,    30,    31,    37,    38,
      25,    42,    43,     0,     0,     2,     4,     5,     0,    14,
      16,    18,    34,     0,    35,     0,    67,     0,    69,    80,
      78,    77,     0,     0,    62,     1,     3,    10,     0,    46,
      48,    15,    17,    19,     0,    41,     0,    12,     0,     0,
       6,     0,     0,    68,    81,    79,    70,     0,    63,    65,
       0,    11,     0,     0,     0,     8,    51,    53,     0,    44,
       0,     0,   219,   221,   220,   222,   223,     0,     0,     0,
     201,   202,   200,   119,   199,   203,   204,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   110,   112,   111,     0,   113,   114,   115,     0,
     145,   147,   160,   163,   165,   167,   169,   171,   173,   176,
     181,   184,   187,   191,     0,   193,   205,   214,   215,   213,
      13,     7,    48,    73,    87,     0,    82,    84,     0,    89,
      71,   162,     0,   191,   213,     0,    60,     0,     0,    47,
       0,    49,    91,     9,    52,    54,    40,    45,     0,     0,
      55,    57,     0,     0,   197,     0,   194,   195,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,     0,   123,     0,   122,   126,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   149,     0,
     196,     0,   211,   212,     0,     0,     0,     0,     0,     0,
      86,    98,    88,    99,    74,     0,     0,    75,    72,    64,
      66,    61,    94,     0,    58,    50,     0,     0,    39,     0,
       0,    98,    97,     0,   216,     0,   118,     0,     0,     0,
       0,     0,     0,   140,   144,   124,   146,   164,     0,   166,
     168,   170,   172,   174,   175,   179,   180,   177,   178,   182,
     183,   185,   186,   188,   189,   190,   148,   210,   209,   207,
     217,     0,     0,   116,   106,     0,     0,   102,     0,   100,
       0,     0,    83,    85,    90,     0,    92,    56,    59,   198,
     192,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   206,   107,   101,   103,   108,     0,   104,     0,
      93,    95,   127,   129,   130,     0,     0,     0,     0,     0,
       0,   161,   218,   109,   105,     0,     0,   132,     0,     0,
       0,     0,     0,     0,   128,   131,   133,   134,     0,   136,
       0,     0,     0,   135,   137,   138,     0,   139
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,   295,  -215,     8,   127,    10,  -215,    57,   240,
    -215,  -215,   244,  -215,   268,   -67,   -51,  -215,    89,  -215,
     277,   176,     1,   -17,     9,  -215,   -58,  -215,   120,  -215,
    -154,  -215,   187,  -109,  -214,   -97,  -215,  -215,   115,   262,
    -215,  -215,  -215,   126,   -71,  -215,   -61,   -90,  -215,   167,
     166,   171,   172,   165,   136,   -10,   132,   150,  -117,     3,
    -215,  -215,  -215,  -215,  -215,  -215,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    57,    58,    59,    29,    30,    31,
      32,    33,    78,    48,    49,    79,    80,   169,   170,    34,
      67,    68,    35,    36,    37,    41,   305,   146,   147,   148,
     161,   253,   179,   306,   243,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   229,   121,   152,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   301,   137,   138,   154
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      38,   151,   162,   145,    38,    42,   252,   186,    27,   181,
      28,   167,    40,   207,   208,     1,     1,   230,   196,     3,
      63,    66,   199,    44,    38,   164,   165,   309,    38,    50,
       1,   155,    27,    55,    28,   242,     1,    38,   151,    51,
      52,    53,     1,    69,   155,   156,   178,   309,     1,   200,
      65,   189,   209,   210,    18,    19,   139,    70,   251,    38,
     142,   149,    43,    54,     1,   153,   140,   250,    81,   262,
      69,   144,    38,   142,   315,   238,   239,   157,   254,     3,
      38,   171,   140,     1,    71,   266,    72,     4,   316,   162,
     174,   176,   177,   238,   239,     3,   151,   196,   293,   294,
     295,   246,   153,   182,   139,   167,   188,   151,   198,     4,
     139,    76,     1,   247,     3,   139,     3,    47,   140,   183,
     198,   332,   178,   184,   231,   232,   233,   276,     4,   198,
     260,   239,   264,    76,    76,    76,   198,   153,    76,   198,
     303,   322,   185,     3,    38,   240,   320,   168,   323,   308,
      60,   324,   187,   241,    76,    69,   190,     4,   296,   234,
     153,   341,   235,   236,   300,    75,   201,   318,   321,   330,
      73,   153,   198,   141,   198,   203,   198,    74,   151,   198,
     198,   331,   139,   110,   356,   202,   358,   261,   368,   163,
     237,   370,   376,   197,   139,   198,   151,   285,   286,   287,
     288,   255,   153,   256,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   339,   204,   180,    63,   342,   343,   344,   244,    76,
      76,   297,    61,    62,   298,   192,   245,   139,    38,    42,
     248,    38,   153,    39,   162,   257,   314,   241,   144,   357,
     151,   274,   337,   198,   263,   144,    38,   171,   364,   352,
     153,   366,   367,   265,   369,   139,   153,   270,   351,   261,
     144,   373,   273,   374,   375,   215,   216,   217,   319,   377,
     325,    64,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   355,   328,    77,   198,   348,   333,   198,   180,
     334,   180,   228,   363,   335,   198,   205,   206,   353,   267,
     268,   269,   354,   272,   153,   365,    77,    77,    77,    46,
     144,    77,   139,   139,   139,   172,   278,   211,   212,   213,
     214,   249,   153,   310,   311,   260,   239,    77,   329,   198,
     159,   283,   284,   289,   290,   317,   139,   158,     1,    82,
      83,    84,    85,    86,    87,   139,    88,    89,   139,   139,
     259,   139,   302,   291,   292,   313,   277,   279,   139,   282,
     139,   139,   194,   280,     0,   281,   139,    90,    91,    92,
       0,     0,    93,     0,     0,    94,     0,    95,     0,     0,
       0,    96,     0,    97,     0,    56,     0,   327,   195,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,    77,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     0,   102,   103,   104,   105,
     106,   107,   108,   109,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,   345,   347,     0,   350,     0,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,   360,   362,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    90,    91,    92,     0,   372,
      93,     0,     0,    94,     0,    95,     0,     0,     0,    96,
       0,    97,     0,    56,     0,     0,    98,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
      99,   100,   101,     0,   102,   103,   104,   105,   106,   107,
     108,   109,     1,    82,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    90,    91,    92,     0,     0,    93,     0,     0,    94,
       0,    95,     0,     0,     0,    96,     0,    97,     0,    56,
       0,     0,   193,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,    99,   100,   101,     0,
     102,   103,   104,   105,   106,   107,   108,   109,     1,    82,
      83,    84,    85,    86,    87,     0,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
       0,     0,    93,     0,     0,    94,     0,    95,     0,     0,
       0,    96,     0,    97,     0,    56,     0,     0,   275,     0,
       0,     0,     0,     0,     0,     1,    82,    83,    84,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     2,   102,   103,   104,   105,
     106,   107,   108,   109,    90,    91,    92,     0,     0,    93,
       0,     0,    94,    45,    95,     0,     1,   166,    96,     0,
      97,     0,    56,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     2,     0,     0,     3,     0,    99,
     100,   101,     0,   102,   103,   104,   105,   106,   107,   108,
     109,     4,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     1,    82,
      83,    84,    85,    86,    87,     0,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    90,    91,    92,
       0,     0,     0,     0,     0,    94,     0,    95,     0,     0,
       0,    96,     1,    97,     0,     0,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       2,     0,     0,     3,     0,    90,    91,    92,     0,     0,
       0,     0,     0,    94,     0,    95,     1,   238,   239,    96,
     304,    97,     0,     0,   299,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     4,     0,     0,     2,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     2,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   143,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     1,    82,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,     0,     0,     0,     0,     0,    94,
       0,    95,     0,     0,     0,    96,     0,    97,     0,   160,
       0,     0,   340,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     0,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,     0,     0,     0,     0,     0,
      94,     0,    95,    90,    91,    92,    96,     0,    97,     0,
       0,    94,   150,    95,     0,     0,     0,    96,     0,    97,
       0,     0,     0,   307,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     0,     1,    82,    83,    84,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,     0,     0,     0,     0,
       0,    94,     0,    95,    90,    91,    92,    96,     0,    97,
       0,     0,    94,   338,    95,     0,     0,     0,    96,     0,
      97,     0,     0,   346,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,     0,     0,     2,     0,
       0,    94,     0,    95,     0,     0,     0,    96,     0,    97,
       0,     0,   359,     1,    82,    83,    84,    85,    86,    87,
     258,    88,    89,     0,     0,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    90,    91,    92,     0,     0,     0,     0,     0,
      94,     0,    95,     0,     0,     0,    96,     0,    97,     0,
       0,   361,     1,    82,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,     0,     0,     0,     0,     0,    94,
       0,    95,     0,     0,     0,    96,     0,    97,     0,     0,
     371,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,    94,     0,
      95,     0,     0,     0,    96,     0,    97,     0,   160,    90,
      91,    92,     0,     0,   191,     0,     0,    94,     0,    95,
       0,     0,     0,    96,     0,    97,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     0,     0,    90,    91,    92,     0,     0,
     271,     0,     0,    94,     0,    95,     0,     0,     0,    96,
       0,    97,    90,    91,    92,     0,     0,   326,     0,     0,
      94,     0,    95,     0,     0,     0,    96,     0,    97,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       1,    82,    83,    84,    85,    86,    87,     0,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,     0,     0,   349,     0,     0,    94,     0,    95,    90,
      91,    92,    96,     0,    97,     0,     0,    94,     0,    95,
       0,     0,     0,    96,     0,   173,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     1,    82,    83,
      84,    85,    86,    87,     0,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,     2,     0,
       0,     0,     0,    94,     0,    95,    90,    91,    92,    96,
       0,   175,     0,     0,    94,     0,    95,     0,     0,     0,
      96,     0,    97,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   312,     2,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,   239,     0,   304,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     2,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   336,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    62,    73,    61,     4,     4,   160,   104,     0,    99,
       0,    78,     3,    15,    16,     3,     3,   134,   115,    34,
      37,    51,    20,    23,    24,    76,    77,   241,    28,    28,
       3,    39,    24,    33,    24,   144,     3,    37,    99,    29,
      30,    31,     3,    43,    39,    53,    97,   261,     3,    47,
      41,    37,    54,    55,    69,    70,    56,    50,    53,    59,
      59,    61,    50,    50,     3,    62,    58,   157,    50,   178,
      70,    61,    72,    72,    39,    48,    49,    41,   168,    34,
      80,    80,    74,     3,    37,   182,    39,    48,    53,   160,
      87,    88,    89,    48,    49,    34,   157,   194,   215,   216,
     217,    39,    99,    38,   104,   172,   106,   168,    39,    48,
     110,    54,     3,    51,    34,   115,    34,    37,   110,    48,
      39,    52,   173,    48,    10,    11,    12,   198,    48,    39,
      48,    49,    51,    76,    77,    78,    39,   134,    81,    39,
     237,    51,    48,    34,   144,   144,   263,    38,    51,   239,
      35,    51,    48,   144,    97,   155,    37,    48,   229,    45,
     157,   315,    48,    49,   235,    50,    19,   257,   265,    39,
      41,   168,    39,    58,    39,    44,    39,    50,   239,    39,
      39,    51,   182,    56,    51,    43,    51,   178,    51,    74,
      38,    51,    51,    37,   194,    39,   257,   207,   208,   209,
     210,    37,   199,    39,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   311,    40,    97,   241,   322,   323,   324,    51,   172,
     173,   231,    48,    49,   234,   109,    39,   237,   238,   238,
      52,   241,   239,     3,   315,    38,   246,   238,   238,   346,
     311,    37,   310,    39,    51,   245,   256,   256,   355,   330,
     257,   358,   359,    38,   361,   265,   263,    82,   329,   260,
     260,   368,    37,   370,   371,    34,    35,    36,    51,   376,
      48,    41,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    80,    37,    54,    39,    37,    51,    39,   173,
      51,   175,    41,    37,    52,    39,    17,    18,    51,   183,
     184,   185,    52,   187,   311,    37,    76,    77,    78,    24,
     310,    81,   322,   323,   324,    81,   200,    13,    14,    32,
      33,   155,   329,    48,    49,    48,    49,    97,    38,    39,
      72,   205,   206,   211,   212,   256,   346,    70,     3,     4,
       5,     6,     7,     8,     9,   355,    11,    12,   358,   359,
     173,   361,   236,   213,   214,   245,   199,   201,   368,   204,
     370,   371,   110,   202,    -1,   203,   376,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    50,    -1,   271,    53,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,   325,   326,    -1,   328,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,   363,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    31,    81,    82,    83,    84,
      85,    86,    87,    88,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    40,     0,    42,    -1,     3,    53,    46,    -1,
      48,    -1,    50,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
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
       3,    48,    -1,    -1,    31,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    31,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    -1,    53,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    32,    33,    34,    46,    -1,    48,    -1,
      -1,    40,    52,    42,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    -1,    52,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    32,    33,    34,    46,    -1,    48,
      -1,    -1,    40,    52,    42,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    31,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    51,     3,     4,     5,     6,     7,     8,     9,
      53,    11,    12,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    51,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,    32,
      33,    34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    32,    33,    34,    -1,    -1,    37,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    32,
      33,    34,    46,    -1,    48,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    31,    -1,
      -1,    -1,    -1,    40,    -1,    42,    32,    33,    34,    46,
      -1,    48,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,    -1,    48,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    31,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    34,    48,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    90,    91,    92,    93,    95,    96,
      97,    98,    99,   100,   108,   111,   112,   113,   155,    98,
     113,   114,   111,    50,   155,     0,    91,    37,   102,   103,
     111,    95,    95,    95,    50,   155,    50,    93,    94,    95,
     127,    48,    49,   112,    98,   113,    51,   109,   110,   155,
      50,    37,    39,    41,    94,   127,    97,    98,   101,   104,
     105,    50,     4,     5,     6,     7,     8,     9,    11,    12,
      32,    33,    34,    37,    40,    42,    46,    48,    53,    77,
      78,    79,    81,    82,    83,    84,    85,    86,    87,    88,
      94,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   135,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   153,   154,   155,
      93,   127,   111,    51,    95,   115,   116,   117,   118,   155,
      52,   135,   136,   148,   155,    39,    53,    41,   109,   103,
      50,   119,   133,   127,   105,   105,    53,   104,    38,   106,
     107,   111,   101,    48,   148,    48,   148,   148,   105,   121,
     132,   136,    38,    48,    48,    48,   124,    48,   155,    37,
      37,    37,   132,    53,   128,    53,   124,    37,    39,    20,
      47,    19,    43,    44,    40,    17,    18,    15,    16,    54,
      55,    13,    14,    32,    33,    34,    35,    36,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    41,   134,
     147,    10,    11,    12,    45,    48,    49,    38,    48,    49,
     111,   113,   122,   123,    51,    39,    39,    51,    52,   110,
     136,    53,   119,   120,   136,    37,    39,    38,    53,   121,
      48,   113,   122,    51,    51,    38,   124,   132,   132,   132,
      82,    37,   132,    37,    37,    53,   133,   138,   132,   139,
     140,   141,   142,   143,   143,   144,   144,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   133,   155,   155,    51,
     133,   152,   132,   124,    51,   115,   122,    52,   136,   123,
      48,    49,    75,   117,   155,    39,    53,   107,   136,    51,
     147,   124,    51,    51,    51,    48,    37,   132,    37,    38,
      39,    51,    52,    51,    51,    52,    51,   115,    52,   136,
      53,   119,   124,   124,   124,   132,    51,   132,    37,    37,
     132,   135,   133,    51,    52,    80,    51,   124,    51,    51,
     132,    51,   132,    37,   124,    37,   124,   124,    51,   124,
      51,    51,   132,   124,   124,   124,    51,   124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   105,   105,   105,   105,   106,   106,   107,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   143,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   151,   151,   152,   152,   153,
     153,   153,   153,   154,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     3,     4,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     1,     3,     1,     3,
       3,     1,     2,     1,     2,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     4,     3,     4,     4,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     2,     1,
       3,     1,     3,     4,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       2,     2,     3,     3,     4,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     7,     8,     7,     8,     8,     9,
       3,     2,     2,     2,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     3,
       3,     2,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1
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
#line 90 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1886 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << endl;
			}
		}
#line 1896 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 106 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << endl;
			}
		}
#line 1906 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << endl;
			}
		}
#line 1916 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 121 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << endl;
			}
		}
#line 1926 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 127 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << endl;
			}
		}
#line 1936 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 133 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << endl;
			}
		}
#line 1946 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 139 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << endl;
			}
		}
#line 1956 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << endl << endl;
			}
		}
#line 1966 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << endl << endl;
			}
		}
#line 1976 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 163 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << endl;
			}
		}
#line 1986 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 169 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << endl;
			}
		}
#line 1996 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 178 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << endl;
			}
		}
#line 2006 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << endl;
			}
		}
#line 2016 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 190 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << endl;
			}
		}
#line 2026 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 196 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << endl;
			}
		}
#line 2036 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << endl;
			}
		}
#line 2046 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 208 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << endl;
			}
		}
#line 2056 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 217 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << endl;
			}
		}
#line 2066 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 223 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << endl;
			}
		}
#line 2076 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 229 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << endl;
			}
		}
#line 2086 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 235 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << endl;
			}
		}
#line 2096 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 241 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << endl;
			}
		}
#line 2106 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 250 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << endl;
			}
		}
#line 2116 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 256 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << endl;
			}
		}
#line 2126 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 262 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << endl;
			}
		}
#line 2136 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 268 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << endl;
			}
		}
#line 2146 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 274 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << endl;
			}
		}
#line 2156 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << endl;
			}
		}
#line 2166 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 286 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << endl;
			}
		}
#line 2176 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 292 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << endl;
			}
		}
#line 2186 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 298 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << endl;
			}
		}
#line 2196 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 304 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << endl;
			}
		}
#line 2206 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 310 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << endl;
			}
		}
#line 2216 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 316 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << endl;
			}
		}
#line 2226 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 325 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << endl;
			}
		}
#line 2236 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 331 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << endl;
			}
		}
#line 2246 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 340 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << endl;
			}
		}
#line 2256 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 346 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << endl;
			}
		}
#line 2266 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 352 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << endl;
			}
		}
#line 2276 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 361 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << endl;
			}
		}
#line 2286 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 367 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << endl;
			}
		}
#line 2296 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 376 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << endl;
			}
		}
#line 2306 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 382 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << endl;
			}
		}
#line 2316 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 391 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << endl;
			}
		}
#line 2326 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 397 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << endl;
			}
		}
#line 2336 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 406 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << endl;
			}
		}
#line 2346 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 412 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*cout << "$$: " << $$.sVal << endl;*/
 			cout << "$1 (declarator): " << (yyvsp[-2].entry)->getIdentifierName() << endl;
 			cout << "$2 (assign): " << (yyvsp[-1].numVal) << endl;
 			cout << "$3 (initializer): " << (yyvsp[0].numVal) << endl; 
 			(yyvsp[-2].entry)->setValue((yyvsp[0].numVal));
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << endl;
			}
		}
#line 2361 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 426 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << endl << endl;
			}
		}
#line 2371 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 435 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << endl;
			}
		}
#line 2381 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 441 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << endl;
			}
		}
#line 2391 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 447 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << endl;
			}
		}
#line 2401 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 453 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << endl;
			}
		}
#line 2411 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 462 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << endl;
			}
		}
#line 2421 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 468 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << endl;
			}
		}
#line 2431 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 477 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << endl;
			}
		}
#line 2441 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 483 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << endl;
			}
		}
#line 2451 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 489 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << endl;
			}
		}
#line 2461 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 498 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << endl;
			}
		}
#line 2471 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 504 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << endl;
			}
		}
#line 2481 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 510 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << endl;
			}
		}
#line 2491 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 519 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << endl;
			}
		}
#line 2501 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 525 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << endl;
			}
		}
#line 2511 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 534 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << endl;
			}
		}
#line 2521 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 540 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << endl;
			}
		}
#line 2531 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 549 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : direct_declarator;" << endl;
			}
		}
#line 2541 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 555 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << endl;
			}
		}
#line 2551 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 564 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : identifier;" << endl;
			}
		}
#line 2561 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 570 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << endl;
			}
		}
#line 2571 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 576 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << endl;
			}
		}
#line 2581 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 582 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << endl;
			}
		}
#line 2591 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 588 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << endl;
			}
		}
#line 2601 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 594 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << endl;
			}
		}
#line 2611 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 600 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << endl;
			}
		}
#line 2621 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 609 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT;" << endl;
			}
		}
#line 2631 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 615 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << endl;
			}
		}
#line 2641 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 621 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << endl;
			}
		}
#line 2651 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 627 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << endl;
			}
		}
#line 2661 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 636 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << endl;
			}
		}
#line 2671 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 642 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << endl;
			}
		}
#line 2681 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 651 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << endl;
			}
		}
#line 2691 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 657 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << endl;
			}
		}
#line 2701 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 666 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << endl;
			}
		}
#line 2711 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 672 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << endl;
			}
		}
#line 2721 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 681 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << endl;
			}
		}
#line 2731 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 687 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << endl;
			}
		}
#line 2741 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 693 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << endl;
			}
		}
#line 2751 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 702 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier;" << endl;
			}
		}
#line 2761 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 708 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << endl;
			}
		}
#line 2771 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 717 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << endl;
			}
		}
#line 2781 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 723 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << endl;
			}
		}
#line 2791 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 729 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << endl;
			}
		}
#line 2801 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 738 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << endl;
			}
		}
#line 2811 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 744 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << endl;
			}
		}
#line 2821 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 753 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << endl;
			}
		}
#line 2831 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 759 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << endl;
			}
		}
#line 2841 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 768 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << endl;
			}
		}
#line 2851 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 774 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << endl;
			}
		}
#line 2861 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 780 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << endl;
			}
		}
#line 2871 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 789 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << endl;
			}
		}
#line 2881 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 796 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << endl;
			}
		}
#line 2891 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 802 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << endl;
			}
		}
#line 2901 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 808 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << endl;
			}
		}
#line 2911 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 814 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << endl;
			}
		}
#line 2921 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 820 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << endl;
			}
		}
#line 2931 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 826 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << endl;
			}
		}
#line 2941 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 832 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << endl;
			}
		}
#line 2951 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 838 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << endl;
			}
		}
#line 2961 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 847 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << endl;
			}
		}
#line 2971 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 853 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << endl;
			}
		}
#line 2981 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 859 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << endl;
			}
		}
#line 2991 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 865 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << endl;
			}
		}
#line 3001 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 871 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << endl;
			}
		}
#line 3011 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 877 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << endl;
			}
		}
#line 3021 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 886 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << endl;
			}
		}
#line 3031 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 892 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << endl;
			}
		}
#line 3041 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 898 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << endl;
			}
		}
#line 3051 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 907 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << endl;
			}
		}
#line 3061 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 913 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << endl;
			}
		}
#line 3071 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 922 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << endl;
			}
		}
#line 3081 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 928 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << endl;
			}
		}
#line 3091 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 934 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << endl;
			}
		}
#line 3101 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 940 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << endl;
			}
		}
#line 3111 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 949 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement;" << endl;
			}
		}
#line 3121 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 955 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << endl;
			}
		}
#line 3131 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 964 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << endl;
			}
		}
#line 3141 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 970 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << endl;
			}
		}
#line 3151 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 976 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << endl;
			}
		}
#line 3161 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 985 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << endl;
			}
		}
#line 3171 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 991 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << endl;
			}
		}
#line 3181 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 997 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << endl;
			}
		}
#line 3191 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1003 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << endl;
			}
		}
#line 3201 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1009 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << endl;
			}
		}
#line 3211 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1015 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << endl;
			}
		}
#line 3221 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1021 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << endl;
			}
		}
#line 3231 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1027 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << endl;
			}
		}
#line 3241 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1033 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << endl;
			}
		}
#line 3251 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1039 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << endl;
			}
		}
#line 3261 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1048 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << endl;
			}
		}
#line 3271 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1054 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << endl;
			}
		}
#line 3281 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1060 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << endl;
			}
		}
#line 3291 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1066 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << endl;
			}
		}
#line 3301 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1072 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << endl;
			}
		}
#line 3311 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1081 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << endl;
			}
		}
#line 3321 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1087 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << endl;
			}
		}
#line 3331 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1096 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << endl;
			}
		}
#line 3341 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1102 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << endl;
			}
		}
#line 3351 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1111 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << endl;
			}
		}
#line 3361 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1117 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << endl;
			}
		}
#line 3371 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1123 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << endl;
			}
		}
#line 3381 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1129 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << endl;
			}
		}
#line 3391 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1135 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << endl;
			}
		}
#line 3401 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1141 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << endl;
			}
		}
#line 3411 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1147 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << endl;
			}
		}
#line 3421 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1153 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << endl;
			}
		}
#line 3431 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1159 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << endl;
			}
		}
#line 3441 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1165 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << endl;
			}
		}
#line 3451 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1171 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << endl;
			}
		}
#line 3461 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1180 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << endl;
			}
		}
#line 3471 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1186 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << endl;
			}
		}
#line 3481 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1195 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << endl;
			}
		}
#line 3491 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1204 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << endl;
			}
		}
#line 3501 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1210 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << endl;
			}
		}
#line 3511 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1219 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << endl;
			}
		}
#line 3521 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1225 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << endl;
			}
		}
#line 3531 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1234 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << endl;
			}
		}
#line 3541 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1240 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << endl;
			}
		}
#line 3551 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1249 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << endl;
			}
		}
#line 3561 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1255 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << endl;
			}
		}
#line 3571 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1264 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << endl;
			}
		}
#line 3581 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1270 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << endl;
			}
		}
#line 3591 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1279 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << endl;
			}
		}
#line 3601 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1285 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << endl;
			}
		}
#line 3611 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1291 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << endl;
			}
		}
#line 3621 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1300 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << endl;
			}
		}
#line 3631 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1306 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << endl;
			}
		}
#line 3641 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1312 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << endl;
			}
		}
#line 3651 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1318 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << endl;
			}
		}
#line 3661 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1324 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << endl;
			}
		}
#line 3671 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1333 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << endl;
			}
		}
#line 3681 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1339 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << endl;
			}
		}
#line 3691 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1345 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << endl;
			}
		}
#line 3701 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1354 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << endl;
			}
		}
#line 3711 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1360 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << endl;
			}
		}
#line 3721 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1366 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << endl;
			}
		}
#line 3731 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1375 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << endl;
			}
		}
#line 3741 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1381 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << endl;
			}
		}
#line 3751 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1387 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << endl;
			}
		}
#line 3761 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1393 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << endl;
			}
		}
#line 3771 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1402 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << endl;
			}
		}
#line 3781 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1408 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << endl;
			}
		}
#line 3791 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1417 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << endl;
			}
		}
#line 3801 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1423 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << endl;
			}
		}
#line 3811 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1429 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << endl;
			}
		}
#line 3821 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1435 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << endl;
			}
		}
#line 3831 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1441 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << endl;
			}
		}
#line 3841 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1447 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << endl;
			}
		}
#line 3851 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1456 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : AMP;" << endl;
			}
		}
#line 3861 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1462 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MULT;" << endl;
			}
		}
#line 3871 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1468 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : PLUS;" << endl;
			}
		}
#line 3881 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1474 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MINUS;" << endl;
			}
		}
#line 3891 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1480 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : TILDE;" << endl;
			}
		}
#line 3901 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1486 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : BANG;" << endl;
			}
		}
#line 3911 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1495 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << endl;
			}
		}
#line 3921 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1501 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << endl;
			}
		}
#line 3931 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1507 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << endl;
			}
		}
#line 3941 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1513 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << endl;
			}
		}
#line 3951 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1519 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << endl;
			}
		}
#line 3961 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1525 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << endl;
			}
		}
#line 3971 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1531 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << endl;
			}
		}
#line 3981 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1537 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << endl;
			}
		}
#line 3991 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1546 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : identifier;" << endl;
			}
		}
#line 4001 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1552 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : constant;" << endl;
			}
		}
#line 4011 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1558 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : string;" << endl;
			}
		}
#line 4021 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1564 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << endl;
			}
		}
#line 4031 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1573 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << endl;
			}
		}
#line 4041 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1579 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << endl;
			}
		}
#line 4051 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1588 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << endl;
			}
		}
#line 4061 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1594 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << endl;
			}
		}
#line 4071 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1600 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << endl;
			}
		}
#line 4081 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1606 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << endl;
			}
		}
#line 4091 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1615 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << endl;
			}
		}
#line 4101 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1624 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier : IDENTIFIER;" << endl;
			}
		}
#line 4111 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4115 "cParser.tab.c" /* yacc.c:1646  */
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
#line 1630 "../parser/cParser.y" /* yacc.c:1906  */
 /* end of ANSI C grammar and actions */

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

