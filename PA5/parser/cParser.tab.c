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
	        long double _decimal;     
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
#define YYLAST   1396

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

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
       0,   116,   116,   121,   128,   137,   143,   155,   161,   167,
     173,   185,   191,   200,   206,   215,   221,   227,   233,   239,
     245,   254,   260,   266,   272,   278,   287,   293,   299,   305,
     311,   317,   323,   329,   335,   341,   347,   353,   362,   368,
     377,   383,   389,   398,   404,   413,   419,   428,   434,   443,
     449,   459,   468,   474,   480,   486,   495,   501,   510,   516,
     522,   531,   537,   543,   552,   558,   567,   573,   582,   589,
     598,   605,   611,   617,   640,   646,   660,   670,   676,   682,
     688,   697,   703,   712,   718,   727,   745,   767,   777,   783,
     792,   798,   807,   813,   819,   828,   834,   843,   849,   858,
     864,   870,   879,   886,   892,   898,   904,   910,   916,   922,
     928,   937,   943,   949,   955,   961,   967,   976,   982,   988,
     997,  1003,  1012,  1018,  1024,  1030,  1038,  1046,  1053,  1059,
    1065,  1071,  1077,  1083,  1092,  1098,  1104,  1113,  1119,  1125,
    1131,  1137,  1143,  1149,  1155,  1161,  1167,  1176,  1182,  1188,
    1194,  1200,  1209,  1215,  1224,  1230,  1239,  1245,  1251,  1257,
    1263,  1269,  1275,  1281,  1287,  1293,  1299,  1308,  1314,  1323,
    1332,  1338,  1347,  1353,  1362,  1368,  1377,  1383,  1392,  1398,
    1407,  1413,  1419,  1428,  1434,  1440,  1446,  1452,  1461,  1467,
    1473,  1482,  1488,  1495,  1505,  1511,  1518,  1528,  1538,  1544,
    1553,  1559,  1565,  1571,  1577,  1583,  1592,  1598,  1604,  1610,
    1616,  1622,  1631,  1637,  1643,  1649,  1655,  1661,  1667,  1673,
    1682,  1692,  1698,  1704,  1713,  1719,  1728,  1735,  1745,  1751,
    1760,  1769
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

#define YYPACT_NINF -207

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-207)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     635,  -207,  -207,    16,   182,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,    12,   106,   635,  -207,  -207,  -207,   104,
     825,   825,   825,  -207,    15,  -207,    85,    48,     6,  -207,
    -207,  -207,    16,   108,   179,   136,  -207,  -207,  -207,   114,
    -207,   165,  -207,  -207,  -207,   970,   139,   376,    85,  -207,
     825,     5,   638,    48,  -207,  -207,  -207,    90,  -207,   184,
     179,  -207,   182,  -207,    85,  -207,   970,   970,   874,  -207,
      66,   970,  -207,  -207,  -207,  -207,   825,  -207,   104,  -207,
     825,   179,  -207,  -207,  -207,  -207,  -207,  1203,  1249,  1249,
    -207,  -207,  -207,  -207,  -207,  -207,   591,  -207,  -207,   232,
      19,   228,   219,   221,   250,   115,   100,   126,   255,   173,
    -207,  -207,  1260,   112,  -207,  -207,  -207,  -207,   179,  -207,
    1260,   103,  -207,   261,  1064,  -207,  -207,  -207,  -207,  -207,
    1260,   125,  -207,   266,   923,   776,   533,  -207,  -207,    11,
     263,   267,  -207,    51,  -207,   591,  -207,  1260,  -207,  -207,
      71,   264,    62,  -207,  -207,   563,  -207,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  -207,   179,  -207,  -207,
     179,   819,  1260,  -207,  -207,  -207,  1064,  -207,  -207,  -207,
    -207,    66,  1260,  -207,  -207,   533,  -207,  1260,   278,   272,
     273,   274,   533,   275,   179,   287,   288,  1083,  -207,  -207,
    -207,  -207,   419,  -207,  -207,  -207,   229,   293,  -207,   279,
     758,  -207,    60,  -207,   244,  -207,  1253,   179,  -207,   281,
    1298,   247,  -207,  1260,  1260,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  1260,   228,   260,
     219,   221,   250,   115,   100,   100,   126,   126,   126,   126,
     255,   255,   173,   173,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,   194,   -15,  -207,   178,  -207,  -207,  -207,  -207,   476,
     296,   533,  1260,  1260,  1260,   276,  1129,   289,  -207,  -207,
    -207,   238,  -207,  -207,  -207,   533,  -207,   308,   309,  -207,
     310,   244,  1322,   769,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  1260,  1260,  -207,  -207,   707,  -207,  -207,   533,
    -207,   195,   202,   203,   313,  1146,   239,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,   312,  -207,   314,  -207,  -207,
    -207,  -207,  -207,  -207,   533,   533,   533,  1260,   868,   242,
    1192,  -207,  -207,   284,  -207,  -207,   205,   533,   210,   917,
     966,   246,   533,   328,  -207,   533,   533,   212,   533,   213,
    1015,  -207,  -207,  -207,  -207,   533,  -207,   533,   533,   216,
    -207,  -207,  -207,   533,  -207
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
       0,    87,    99,    89,   100,    75,     0,     0,   129,     0,
       0,    99,    98,     0,     0,   223,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   156,     0,   171,     0,
     173,   175,   177,   179,   181,   182,   186,   187,   184,   185,
     189,   190,   192,   193,   195,   196,   197,   217,   216,   214,
     224,     0,     0,    95,     0,    50,    57,    60,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,     0,   131,   133,   121,     0,   107,     0,     0,   103,
       0,   101,     0,     0,    84,    86,    91,    76,   205,   199,
     153,   155,     0,     0,   215,   213,     0,    93,   127,     0,
     119,     0,     0,     0,     0,     0,     0,   147,   151,   123,
     117,   108,   102,   104,   109,     0,   105,     0,   168,   225,
      94,    96,   125,   118,     0,     0,     0,     0,     0,     0,
       0,   110,   106,   134,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
       0,   135,   138,   140,   141,     0,   143,     0,     0,     0,
     142,   144,   145,     0,   146
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,   343,  -207,   -40,   -10,    17,  -207,   -45,
     142,  -207,  -207,   290,  -207,   297,   -62,   -25,  -207,   169,
    -207,   303,   249,    -1,   -33,    -2,  -207,   -88,  -207,   138,
    -207,  -189,  -207,   224,  -130,  -206,    28,  -207,  -207,   185,
     319,    53,   -20,   -47,  -207,  -207,   181,  -207,  -207,  -207,
    -100,  -113,  -207,   -19,  -118,  -207,   222,   223,   220,   225,
     226,   127,    96,   128,   130,  -109,    -4,  -207,  -207,  -207,
    -207,  -207,  -207,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    58,   149,    30,    31,
      32,    33,    34,    78,    49,    50,    79,    80,   141,   142,
      35,    67,    68,    36,    37,    38,    42,   307,   151,   152,
     153,   197,   284,   161,   308,   234,   218,   219,   220,   221,
      83,   288,    91,    60,    84,   339,   222,   223,   224,   225,
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
      76,    86,   194,   186,     1,     1,   139,    29,     1,   233,
      87,   198,   199,    45,   244,    39,   311,    86,    51,    39,
     242,    76,    76,    76,    56,   311,    76,   325,    39,   167,
      65,    74,    29,   108,    69,     3,   147,    52,    53,    54,
       3,   136,   137,   134,     4,   162,    89,   162,   121,   229,
     230,    76,    44,     1,   146,    55,   168,   148,   259,     1,
      69,   133,    39,   145,   274,   275,   276,    88,   280,   143,
      39,   160,   139,   198,   287,    18,    19,   133,    39,   290,
     237,   154,   282,   156,   158,   159,    61,    62,    86,    76,
       3,   244,   238,    88,   140,     3,    46,     1,   229,   230,
      76,   108,   310,   245,     4,   175,   176,   301,   121,   240,
     230,   108,   187,   188,   189,   205,   121,   228,    69,   128,
     160,   320,   173,   174,   319,    57,   121,   351,     3,   179,
     180,    48,   128,   129,   321,    40,   227,   232,   231,    39,
     285,    71,     4,    72,   177,   178,   195,   190,   241,    66,
     191,   192,   200,   121,   201,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,     1,   108,    64,     1,    70,   277,   108,    81,
     278,   317,   331,   332,   333,   347,   336,    77,   121,    63,
     143,    39,   -49,   121,   -49,   227,    73,   183,   184,   185,
     349,   108,   227,   198,   297,    57,     3,   326,    77,    77,
      77,    59,   227,    77,   345,   130,   121,   232,    43,    39,
       4,   327,    39,   323,   244,   359,    75,   316,   241,   121,
     295,   244,   244,    85,   244,   324,   354,   169,    77,   244,
     303,   244,   244,   355,   356,   244,   373,   366,   368,   135,
     371,   375,   170,   385,   387,   171,   304,   393,   244,   377,
     379,   266,   267,   268,   269,   338,   360,   244,   244,   369,
     389,   244,     1,   380,   166,   244,    77,   181,   182,   227,
     172,   227,   312,   313,   108,   240,   230,    77,   322,   244,
     264,   265,    73,   348,   202,   227,   236,   270,   271,   121,
       2,   272,   273,     3,   235,   243,   291,   303,   121,   330,
     292,   293,   294,   296,   298,   299,   337,   229,   230,   227,
     306,   305,   318,   340,   329,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   227,   227,   227,   353,   334,   341,
     342,   357,   343,   361,   372,   382,   362,   227,    47,   132,
     286,   144,   227,   131,   315,   227,   227,   193,   227,   239,
      90,   352,   363,   364,   365,   227,   289,   227,   227,   258,
     261,     0,   260,   227,     0,   374,   262,     0,   263,     0,
     381,     0,     0,   383,   384,     0,   386,  -126,     0,     0,
       0,     0,     0,   390,     0,   391,   392,     0,     0,     0,
       0,   394,     1,    92,    93,    94,    95,    96,    97,    82,
      98,    99,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,   100,   101,   102,     0,     0,   206,     0,     0,   103,
       0,   104,     0,     0,     0,   105,     0,   106,     0,    57,
       0,     0,   302,     0,     0,     0,     0,     0,     0,     1,
      92,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   100,   101,
     102,     0,     0,   206,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     0,    57,     0,     0,   328,
       0,     0,     0,     0,     0,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   100,   101,   102,     0,     0,
     206,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   106,     0,    57,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     1,    92,    93,    94,    95,    96,
      97,     0,    98,    99,   256,     0,     0,     0,     0,     0,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,     2,   100,   101,   102,     0,     0,     0,     0,
       0,   103,     0,   104,     0,     0,     0,   105,     1,   106,
       0,     1,    92,    93,    94,    95,    96,    97,     0,    98,
      99,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     2,     0,     0,     3,
     100,   101,   102,     0,     0,     0,     0,     0,   103,     0,
     104,     0,     0,     4,   105,     0,   106,     0,     0,     0,
     107,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,     0,     0,     0,     0,     0,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,   196,     0,     0,
     350,     1,    92,    93,    94,    95,    96,    97,     0,    98,
      99,     0,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,     0,     0,     0,     0,     0,   103,     0,
     104,   100,   101,   102,   105,     0,   106,  -129,     0,   103,
     309,   104,     0,     0,     0,   105,     0,   106,     0,     0,
       0,   346,     1,    92,    93,    94,    95,    96,    97,   204,
      98,    99,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,   100,   101,   102,     0,     0,     2,     0,     0,   103,
       0,   104,     0,     0,     0,   105,     0,   106,     0,     0,
     279,     1,    92,    93,    94,    95,    96,    97,     0,    98,
      99,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     100,   101,   102,     0,     0,     2,     0,     0,   103,     0,
     104,     0,     0,     0,   105,     0,   106,     0,     0,   367,
       1,    92,    93,    94,    95,    96,    97,   138,    98,    99,
       0,     0,     0,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   100,
     101,   102,     0,     0,     2,     0,     0,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,     0,   376,     1,
      92,    93,    94,    95,    96,    97,   203,    98,    99,     0,
       0,     0,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   100,   101,
     102,     2,     0,     0,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     0,     0,   378,     1,    92,
      93,    94,    95,    96,    97,     0,    98,    99,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     0,   106,     0,     0,   388,     1,    92,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,   103,     0,   104,     0,     0,     0,
     105,     0,   106,     0,   196,   100,   101,   102,     0,     0,
     300,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   106,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     1,
      92,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,   100,   101,   102,     0,     0,   335,     0,     0,   103,
       0,   104,     0,     0,     0,   105,     0,   106,   100,   101,
     102,     0,     0,   358,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     1,    92,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,     0,     0,   370,
       0,     0,   103,     0,   104,   100,   101,   102,   105,     0,
     106,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   155,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     1,    92,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,     2,     0,     0,     0,     0,   103,
       0,   104,   100,   101,   102,   105,     0,   157,     0,     0,
     103,     0,   104,     0,     0,     0,   105,     0,   106,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   314,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   230,     0,   306,
       0,     0,     0,     2,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   344,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,     3,    90,     4,     4,    38,   106,   196,     3,     3,
      55,    58,   130,   122,     3,     3,    78,     0,     3,   149,
      60,   134,   140,    23,    39,    25,   232,    74,    29,    29,
     160,    76,    77,    78,    34,   241,    81,    52,    38,    20,
      42,    51,    25,    62,    44,    34,    86,    30,    31,    32,
      34,    76,    77,    73,    48,   155,    51,   157,    62,    48,
      49,   106,    50,     3,    84,    50,    47,    87,   168,     3,
      70,    72,    72,    83,   183,   184,   185,    60,   191,    80,
      80,   106,   144,   196,   202,    69,    70,    88,    88,   207,
      39,    91,   192,    97,    98,    99,    48,    49,   145,   144,
      34,    39,    51,    86,    38,    34,     0,     3,    48,    49,
     155,   130,   230,    51,    48,    15,    16,   217,   122,    48,
      49,   140,    10,    11,    12,   145,   130,   147,   128,    39,
     155,   244,    17,    18,   243,    50,   140,   326,    34,    13,
      14,    37,    39,    53,   257,     3,   146,   149,   149,   149,
     197,    37,    48,    39,    54,    55,    53,    45,   160,    51,
      48,    49,    37,   167,    39,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,     3,   202,    42,     3,    50,   187,   207,    50,
     190,   238,   292,   293,   294,   313,   296,    55,   202,   232,
     201,   201,    37,   207,    39,   205,    41,    34,    35,    36,
     323,   230,   212,   326,   214,    50,    34,    39,    76,    77,
      78,    36,   222,    81,   312,    41,   230,   229,   229,   229,
      48,    53,   232,    39,    39,   335,    51,   237,   240,   243,
     212,    39,    39,    58,    39,    51,    51,    19,   106,    39,
     222,    39,    39,    51,    51,    39,    51,   357,   358,    74,
     360,    51,    43,    51,    51,    44,    37,    51,    39,   369,
     370,   175,   176,   177,   178,    37,    37,    39,    39,    37,
     380,    39,     3,    37,    52,    39,   144,    32,    33,   289,
      40,   291,    48,    49,   313,    48,    49,   155,    38,    39,
     173,   174,    41,   322,    38,   305,    39,   179,   180,   313,
      31,   181,   182,    34,    51,    51,    38,   289,   322,   291,
      48,    48,    48,    48,    37,    37,    37,    48,    49,   329,
      51,    38,    51,   305,    38,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   354,   355,   356,   329,    82,    51,
      51,    48,    52,    51,    80,    37,    52,   367,    25,    72,
     201,    81,   372,    70,   236,   375,   376,   128,   378,   155,
      61,   328,   354,   355,   356,   385,   205,   387,   388,   167,
     170,    -1,   169,   393,    -1,   367,   171,    -1,   172,    -1,
     372,    -1,    -1,   375,   376,    -1,   378,    31,    -1,    -1,
      -1,    -1,    -1,   385,    -1,   387,   388,    -1,    -1,    -1,
      -1,   393,     3,     4,     5,     6,     7,     8,     9,    53,
      11,    12,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    -1,    50,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    41,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    46,     3,    48,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    31,    -1,    -1,    34,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    48,    46,    -1,    48,    -1,    -1,    -1,
      52,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    50,    -1,    -1,
      53,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    32,    33,    34,    46,    -1,    48,    31,    -1,    40,
      52,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,     3,     4,     5,     6,     7,     8,     9,    53,
      11,    12,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    32,    33,    34,    -1,    -1,    31,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      32,    33,    34,    -1,    -1,    31,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       3,     4,     5,     6,     7,     8,     9,    53,    11,    12,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    32,
      33,    34,    -1,    -1,    31,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,     3,
       4,     5,     6,     7,     8,     9,    53,    11,    12,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    32,    33,
      34,    31,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    32,    33,    34,
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
      72,    73,    74,    51,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74
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
     143,   124,    48,    49,    75,   118,   162,   132,    51,   154,
     140,   140,    38,    39,    51,    52,    39,    53,    53,    38,
     125,   139,   139,   139,    82,    37,   139,    37,    37,   134,
     125,    51,    51,    52,    51,   116,    52,   143,   142,   140,
      53,   120,   130,   125,    51,    51,    51,    48,    37,   139,
      37,    51,    52,   125,   125,   125,   139,    51,   139,    37,
      37,   139,    80,    51,   125,    51,    51,   139,    51,   139,
      37,   125,    37,   125,   125,    51,   125,    51,    51,   139,
     125,   125,   125,    51,   125
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
       1,     3,     3,     4,     3,     5,     6,     1,     2,     2,
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
#line 116 "../parser/cParser.y" /* yacc.c:1646  */
    {	
								table.popLevelOff();}
#line 1847 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 122 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1858 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 129 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
#line 1868 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 138 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
#line 1878 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 144 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
#line 1888 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 156 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
#line 1898 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 162 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1908 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
#line 1918 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 174 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1928 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl;
			}
		}
#line 1938 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 192 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl;
			}
		}
#line 1948 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 201 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
#line 1958 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 207 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
#line 1968 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 216 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
#line 1978 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 222 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 1988 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 228 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
#line 1998 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 234 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2008 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 240 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
#line 2018 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 246 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
#line 2028 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 255 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
#line 2038 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 261 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
#line 2048 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 267 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
#line 2058 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 273 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
#line 2068 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 279 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
#line 2078 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 288 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
#line 2088 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 294 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
#line 2098 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 300 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
#line 2108 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 306 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
#line 2118 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 312 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
#line 2128 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 318 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
#line 2138 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 324 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
#line 2148 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 330 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
#line 2158 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 336 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
#line 2168 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 342 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
#line 2178 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 348 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
#line 2188 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 354 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
#line 2198 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 363 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
#line 2208 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 369 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
#line 2218 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 378 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2228 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 384 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2238 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 390 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
#line 2248 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 399 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
#line 2258 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 405 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
#line 2268 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 414 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
#line 2278 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 420 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
#line 2288 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 429 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
#line 2298 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 435 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
#line 2308 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 444 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
#line 2318 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 450 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyvsp[-4].entry)->setIdentifierValue(*((yyvsp[-1].val)));
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
		}
#line 2329 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 460 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl;
			}
		}
#line 2339 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 469 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
#line 2349 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 475 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2359 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 481 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2369 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 487 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2379 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 496 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
#line 2389 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 502 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
#line 2399 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 511 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
#line 2409 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 517 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
#line 2419 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 523 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
#line 2429 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 532 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2439 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 538 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2449 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 544 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
#line 2459 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 553 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
#line 2469 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 559 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
#line 2479 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 568 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
#line 2489 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 574 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
#line 2499 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 583 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			{(yyval.entry) = (yyvsp[0].entry);}
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
#line 2510 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 590 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
#line 2520 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 599 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			{(yyval.entry) = (yyvsp[0].entry);}
			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
#line 2531 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 606 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
#line 2541 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 612 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2551 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 618 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			std::cout << "Array! Name is ";
 			std::string nameTemp = (yyvsp[-3].entry)->getIdentifierName(); 
 			std::cout << nameTemp << std::endl;
 			(yyvsp[-3].entry)->setArray();
 			//std::cout << "ARRAY'S DIMENSION IS: " << $3->value._number << std::endl;  
 			(yyvsp[-3].entry)->addArrayDimension((yyvsp[-1].val)->value._number); 

 			std::vector<int> tempVector = (yyvsp[-3].entry)->getArrayDimensions(); 

 			std::cout << "NUmber of Dimensions: " << (yyvsp[-3].entry)->getNumArrDims() << std::endl; 
 			for(int i = 0; i < (yyvsp[-3].entry)->getNumArrDims(); i++) {
 				std::cout << tempVector[i] << std::endl; 
 			}

 			
 			/*std::cout << "0: " << tempVector[0] << std::endl;
 			std::cout << "1: " << tempVector[1] << std::endl; */
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2578 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 641 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2588 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 647 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			std::string idName = (yyvsp[-4].entry)->getIdentifierName();
 			assignParams((yyvsp[-4].entry), funcParams);
 			std::cout << "ID Name: " << idName << " has ";
 			std::cout << (yyvsp[-4].entry)->getNumberOfParams() << " parameters." << std::endl;  
 			std::cout << "PRINTING FUNCTION PARAMETERS LOLZ HUEHUE" << std::endl;
 			(yyvsp[-4].entry)->viewParams();  
 			funcParams.clear(); 
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
	
		}
#line 2606 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 661 "../parser/cParser.y" /* yacc.c:1646  */
    {

			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
#line 2617 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 671 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
#line 2627 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 677 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
#line 2637 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 683 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
#line 2647 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 689 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
#line 2657 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 698 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2667 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 704 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}
#line 2677 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 713 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}
#line 2687 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 719 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}
#line 2697 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 728 "../parser/cParser.y" /* yacc.c:1646  */
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
#line 2719 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 746 "../parser/cParser.y" /* yacc.c:1646  */
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
#line 2742 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 768 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			parameter tempParam;
 			tempParam.dataType = (yyvsp[0].entry)->getIdentifierType();
 			tempParam.formalParam = (yyvsp[0].entry)->getIdentifierName(); 
 			funcParams.push_back(tempParam); 
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
#line 2756 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 778 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
#line 2766 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 784 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
#line 2776 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 793 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
#line 2786 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 799 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
#line 2796 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 808 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
#line 2806 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 814 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
#line 2816 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 820 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
#line 2826 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 829 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
#line 2836 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 835 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
#line 2846 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 844 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
#line 2856 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 850 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
#line 2866 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 859 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
#line 2876 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 865 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
#line 2886 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 871 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
#line 2896 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 880 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
#line 2906 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 887 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
#line 2916 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 893 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2926 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 899 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2936 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 905 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
#line 2946 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 911 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
#line 2956 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 917 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2966 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 923 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2976 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 929 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2986 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 938 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
#line 2996 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 944 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
#line 3006 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 950 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
#line 3016 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 956 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
#line 3026 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 962 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
#line 3036 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 968 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
#line 3046 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 977 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
#line 3056 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 983 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
#line 3066 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 989 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
#line 3076 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 998 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
#line 3086 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1004 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
#line 3096 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1013 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}
#line 3106 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1019 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}
#line 3116 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1025 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}
#line 3126 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1030 "../parser/cParser.y" /* yacc.c:1646  */
    {
		  if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
	      }
	    }
#line 3136 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1038 "../parser/cParser.y" /* yacc.c:1646  */
    {

		table.pushLevelOn();
		inInsertMode = true;
		}
#line 3146 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1046 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff(); 
		inInsertMode = false;  
		}
#line 3155 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1053 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = false; 
		}
#line 3163 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1059 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = true; 
		}
#line 3171 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1065 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.pushLevelOn();
	   }
#line 3179 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1071 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff();  
		}
#line 3187 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1078 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
#line 3197 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1084 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
#line 3207 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1093 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3217 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1099 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
#line 3227 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1105 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3237 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1114 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3247 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1120 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
#line 3257 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1126 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3267 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1132 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3277 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1138 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3287 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1144 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3297 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1150 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3307 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1156 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3317 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1162 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3327 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1168 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3337 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1177 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
#line 3347 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1183 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
#line 3357 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1189 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
#line 3367 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1195 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
#line 3377 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1201 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
#line 3387 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1210 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
#line 3397 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1216 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
#line 3407 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1225 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
#line 3417 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1231 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
#line 3427 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1240 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
#line 3437 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1246 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
#line 3447 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1252 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
#line 3457 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1258 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
#line 3467 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1264 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
#line 3477 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1270 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
#line 3487 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1276 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
#line 3497 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1282 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
#line 3507 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1288 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
#line 3517 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1294 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
#line 3527 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1300 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
#line 3537 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1309 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
#line 3547 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1315 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
#line 3557 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1324 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
#line 3567 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1333 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
#line 3577 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1339 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
#line 3587 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1348 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
#line 3597 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1354 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
#line 3607 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1363 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
#line 3617 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1369 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
#line 3627 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1378 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
#line 3637 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1384 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
#line 3647 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1393 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
#line 3657 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1399 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
#line 3667 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1408 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
#line 3677 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1414 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
#line 3687 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1420 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
#line 3697 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1429 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
#line 3707 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1435 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
#line 3717 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1441 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
#line 3727 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1447 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
#line 3737 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1453 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
#line 3747 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1462 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
#line 3757 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1468 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
#line 3767 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1474 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
#line 3777 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1483 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
#line 3787 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1489 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number + (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
#line 3798 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1496 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number - (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
#line 3809 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1506 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
#line 3819 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1512 "../parser/cParser.y" /* yacc.c:1646  */
    {
 		 	(yyval.val)->value._number = (yyvsp[-2].val)->value._number * (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
#line 3830 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1519 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if ((yyvsp[0].val)->value._number == 0) {
 				yyerror("Unable to divide by 0");
 			}
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number / (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
#line 3844 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1529 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number % (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
#line 3855 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1539 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
#line 3865 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1545 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
#line 3875 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1554 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
#line 3885 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1560 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
#line 3895 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1566 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
#line 3905 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1572 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << std::endl;
			}
		}
#line 3915 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1578 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
#line 3925 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1584 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
#line 3935 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1593 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
#line 3945 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1599 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
#line 3955 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1605 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
#line 3965 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1611 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
#line 3975 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1617 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
#line 3985 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1623 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
#line 3995 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1632 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
		}
#line 4005 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1638 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
#line 4015 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1644 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
#line 4025 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1650 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}
		}
#line 4035 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1656 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
#line 4045 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1662 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
#line 4055 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1668 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
#line 4065 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1674 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
#line 4075 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1683 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			symbolTableEntry* tempPtr = table.searchTopOfStack($1->getIdentifierName());
 			dVal tempData = tempPtr->getIdentifierValue(); */

			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
#line 4089 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1693 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
#line 4099 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1699 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
#line 4109 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1705 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
#line 4119 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1714 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
#line 4129 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1720 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
#line 4139 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1729 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}

		}
#line 4150 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1736 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/*
 			std::string tempName = $1->getIdentifierName(); 
 			symbolTableEntry* tempPtr = table.searchTopOfStack(tempName); */

			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
#line 4164 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1746 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
#line 4174 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1752 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
#line 4184 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1761 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
#line 4194 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1769 "../parser/cParser.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 4200 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4204 "cParser.tab.c" /* yacc.c:1646  */
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
#line 1771 "../parser/cParser.y" /* yacc.c:1906  */
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
