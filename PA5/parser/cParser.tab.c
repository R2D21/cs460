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

	int yylex(void);
	void yyerror(const char* errorMsg);
	void write(const dVal& param);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern std::ofstream outY;
	extern bool inInsertMode;

#line 82 "cParser.tab.c" /* yacc.c:339  */

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
#line 39 "../parser/cParser.y" /* yacc.c:355  */

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

#line 127 "cParser.tab.c" /* yacc.c:355  */

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
<<<<<<< HEAD
#line 59 "../parser/cParser.y" /* yacc.c:355  */
=======
#line 56 "../parser/cParser.y" /* yacc.c:355  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238

	char* sVal;
	dVal* val;
	class symbolTableEntry* entry; 

#line 234 "cParser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 249 "cParser.tab.c" /* yacc.c:358  */

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
<<<<<<< HEAD
       0,   108,   108,   115,   124,   130,   142,   148,   154,   160,
     172,   178,   187,   193,   202,   208,   214,   220,   226,   232,
     241,   247,   253,   259,   265,   274,   280,   286,   292,   298,
     304,   310,   316,   322,   328,   334,   340,   349,   355,   364,
     370,   376,   385,   391,   400,   406,   415,   421,   430,   436,
     454,   463,   469,   475,   481,   490,   496,   505,   511,   517,
     526,   532,   538,   547,   553,   562,   568,   577,   583,   592,
     598,   604,   610,   616,   622,   628,   637,   643,   649,   655,
     664,   670,   679,   685,   694,   700,   709,   715,   721,   730,
     736,   745,   751,   757,   766,   772,   781,   787,   796,   802,
     808,   817,   824,   830,   836,   842,   848,   854,   860,   866,
     875,   881,   887,   893,   899,   905,   914,   920,   926,   935,
     941,   950,   956,   962,   968,   977,   983,   992,   998,  1004,
    1013,  1019,  1025,  1031,  1037,  1043,  1049,  1055,  1061,  1067,
    1076,  1082,  1088,  1094,  1100,  1109,  1115,  1124,  1130,  1139,
    1145,  1151,  1157,  1163,  1169,  1175,  1181,  1187,  1193,  1199,
    1208,  1214,  1223,  1232,  1238,  1247,  1253,  1262,  1268,  1277,
    1283,  1292,  1298,  1307,  1313,  1319,  1328,  1334,  1340,  1346,
    1352,  1361,  1367,  1373,  1382,  1388,  1394,  1403,  1409,  1415,
    1421,  1430,  1436,  1445,  1451,  1457,  1463,  1469,  1475,  1484,
    1490,  1496,  1502,  1508,  1514,  1523,  1529,  1535,  1541,  1547,
    1553,  1559,  1565,  1574,  1580,  1586,  1592,  1601,  1607,  1616,
    1622,  1628,  1634,  1643,  1652
=======
       0,   105,   105,   112,   121,   127,   136,   142,   148,   154,
     163,   169,   178,   184,   193,   199,   205,   211,   217,   223,
     232,   238,   244,   250,   256,   265,   271,   277,   283,   289,
     295,   301,   307,   313,   319,   325,   331,   340,   346,   355,
     361,   367,   376,   382,   391,   397,   406,   412,   421,   427,
     445,   454,   460,   466,   472,   481,   487,   496,   502,   508,
     517,   523,   529,   538,   544,   553,   559,   568,   574,   583,
     589,   595,   601,   607,   613,   619,   628,   634,   640,   646,
     655,   661,   670,   676,   685,   691,   700,   706,   712,   721,
     727,   736,   742,   748,   757,   763,   772,   778,   787,   793,
     799,   808,   815,   821,   827,   833,   839,   845,   851,   857,
     866,   872,   878,   884,   890,   896,   905,   911,   917,   926,
     932,   941,   947,   953,   959,   968,   974,   983,   989,   995,
    1004,  1010,  1016,  1022,  1028,  1034,  1040,  1046,  1052,  1058,
    1067,  1073,  1079,  1085,  1091,  1100,  1106,  1115,  1121,  1130,
    1136,  1142,  1148,  1154,  1160,  1166,  1172,  1178,  1184,  1190,
    1199,  1205,  1214,  1223,  1229,  1238,  1244,  1253,  1259,  1268,
    1274,  1283,  1289,  1298,  1304,  1310,  1319,  1325,  1331,  1337,
    1343,  1352,  1358,  1364,  1373,  1379,  1385,  1394,  1400,  1406,
    1412,  1421,  1427,  1436,  1442,  1448,  1454,  1460,  1466,  1475,
    1481,  1487,  1493,  1499,  1505,  1514,  1520,  1526,  1532,  1538,
    1544,  1550,  1556,  1565,  1571,  1577,  1583,  1592,  1598,  1607,
    1613,  1619,  1625,  1634,  1643
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
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
<<<<<<< HEAD
#line 109 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 106 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1904 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
<<<<<<< HEAD
#line 116 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 113 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
#line 1914 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
<<<<<<< HEAD
#line 125 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 122 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
#line 1924 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
<<<<<<< HEAD
#line 131 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 128 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
#line 1934 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
<<<<<<< HEAD
#line 143 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 137 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
#line 1944 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
<<<<<<< HEAD
#line 149 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 143 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1954 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
<<<<<<< HEAD
#line 155 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 149 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
#line 1964 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
<<<<<<< HEAD
#line 161 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 155 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1974 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
<<<<<<< HEAD
#line 173 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 164 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl << std::endl;
			}
		}
#line 1984 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
<<<<<<< HEAD
#line 179 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 170 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl << std::endl;
			}
		}
#line 1994 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
<<<<<<< HEAD
#line 188 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 179 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
#line 2004 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
<<<<<<< HEAD
#line 194 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 185 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
#line 2014 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
<<<<<<< HEAD
#line 203 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 194 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
#line 2024 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
<<<<<<< HEAD
#line 209 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 200 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2034 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
<<<<<<< HEAD
#line 215 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 206 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
#line 2044 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
<<<<<<< HEAD
#line 221 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 212 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2054 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
<<<<<<< HEAD
#line 227 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 218 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
#line 2064 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
<<<<<<< HEAD
#line 233 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 224 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
#line 2074 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
<<<<<<< HEAD
#line 242 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 233 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
#line 2084 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
<<<<<<< HEAD
#line 248 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 239 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
#line 2094 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
<<<<<<< HEAD
#line 254 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 245 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
#line 2104 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
<<<<<<< HEAD
#line 260 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 251 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
#line 2114 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
<<<<<<< HEAD
#line 266 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 257 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
#line 2124 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
<<<<<<< HEAD
#line 275 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 266 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
#line 2134 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
<<<<<<< HEAD
#line 281 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 272 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
#line 2144 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
<<<<<<< HEAD
#line 287 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 278 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
#line 2154 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
<<<<<<< HEAD
#line 293 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 284 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
#line 2164 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
<<<<<<< HEAD
#line 299 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 290 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
#line 2174 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
<<<<<<< HEAD
#line 305 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 296 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
#line 2184 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
<<<<<<< HEAD
#line 311 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 302 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
#line 2194 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
<<<<<<< HEAD
#line 317 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 308 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
#line 2204 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
<<<<<<< HEAD
#line 323 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 314 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
#line 2214 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
<<<<<<< HEAD
#line 329 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 320 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
#line 2224 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
<<<<<<< HEAD
#line 335 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 326 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
#line 2234 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
<<<<<<< HEAD
#line 341 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 332 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
#line 2244 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
<<<<<<< HEAD
#line 350 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 341 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
#line 2254 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
<<<<<<< HEAD
#line 356 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 347 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
#line 2264 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
<<<<<<< HEAD
#line 365 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 356 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2274 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
<<<<<<< HEAD
#line 371 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 362 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2284 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
<<<<<<< HEAD
#line 377 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 368 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
#line 2294 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
<<<<<<< HEAD
#line 386 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 377 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
#line 2304 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
<<<<<<< HEAD
#line 392 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 383 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
#line 2314 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
<<<<<<< HEAD
#line 401 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 392 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
#line 2324 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
<<<<<<< HEAD
#line 407 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 398 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
#line 2334 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
<<<<<<< HEAD
#line 416 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 407 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
#line 2344 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
<<<<<<< HEAD
#line 422 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 413 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
#line 2354 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
<<<<<<< HEAD
#line 431 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 422 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
#line 2364 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
<<<<<<< HEAD
#line 437 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 428 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
 			/*std::cout << "$$: " << $$.sVal << std::endl;*/
 			std::cout << "$1 (declarator): " << (yyvsp[-2].entry)->getIdentifierName() << std::endl;
 			//std::cout << "$2 (assign): " << $2 << std::endl;
 			//std::cout << "$3 (initializer): " << $3 << std::endl; 
 			(yyvsp[-2].entry)->setIdentifierValue(*((yyvsp[0].val)), (yyvsp[0].val)->dataType);
 			dVal temp = (yyvsp[-2].entry)->getIdentifierValue(); 
 			std::cout << "Value returned from symbol table entry: ";
 			write(temp);
 			std::cout << std::endl; 
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
		}
#line 2383 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
<<<<<<< HEAD
#line 455 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 446 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl << std::endl;
			}
		}
#line 2393 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
<<<<<<< HEAD
#line 464 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 455 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
#line 2403 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
<<<<<<< HEAD
#line 470 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 461 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2413 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
<<<<<<< HEAD
#line 476 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 467 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2423 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
<<<<<<< HEAD
#line 482 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 473 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2433 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
<<<<<<< HEAD
#line 491 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 482 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
#line 2443 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
<<<<<<< HEAD
#line 497 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 488 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
#line 2453 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
<<<<<<< HEAD
#line 506 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 497 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
#line 2463 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
<<<<<<< HEAD
#line 512 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 503 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
#line 2473 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
<<<<<<< HEAD
#line 518 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 509 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
#line 2483 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
<<<<<<< HEAD
#line 527 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 518 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2493 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
<<<<<<< HEAD
#line 533 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 524 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2503 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
<<<<<<< HEAD
#line 539 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 530 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
#line 2513 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
<<<<<<< HEAD
#line 548 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 539 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
#line 2523 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
<<<<<<< HEAD
#line 554 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 545 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
#line 2533 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
<<<<<<< HEAD
#line 563 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 554 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
#line 2543 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
<<<<<<< HEAD
#line 569 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 560 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
#line 2553 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
<<<<<<< HEAD
#line 578 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 569 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
#line 2563 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
<<<<<<< HEAD
#line 584 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 575 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
#line 2573 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
<<<<<<< HEAD
#line 593 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 584 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
#line 2583 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
<<<<<<< HEAD
#line 599 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 590 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
#line 2593 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
<<<<<<< HEAD
#line 605 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 596 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2603 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
<<<<<<< HEAD
#line 611 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 602 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2613 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
<<<<<<< HEAD
#line 617 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 608 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2623 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
<<<<<<< HEAD
#line 623 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 614 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2633 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
<<<<<<< HEAD
#line 629 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 620 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
#line 2643 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
<<<<<<< HEAD
#line 638 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 629 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
#line 2653 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
<<<<<<< HEAD
#line 644 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 635 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
#line 2663 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
<<<<<<< HEAD
#line 650 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 641 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
#line 2673 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
<<<<<<< HEAD
#line 656 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 647 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
#line 2683 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
<<<<<<< HEAD
#line 665 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 656 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2693 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
<<<<<<< HEAD
#line 671 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 662 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}
#line 2703 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
<<<<<<< HEAD
#line 680 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 671 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}
#line 2713 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
<<<<<<< HEAD
#line 686 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 677 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}
#line 2723 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
<<<<<<< HEAD
#line 695 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 686 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << std::endl;
			}
		}
#line 2733 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
<<<<<<< HEAD
#line 701 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 692 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << std::endl;
			}
		}
#line 2743 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
<<<<<<< HEAD
#line 710 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 701 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
#line 2753 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
<<<<<<< HEAD
#line 716 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 707 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
#line 2763 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
<<<<<<< HEAD
#line 722 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 713 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
#line 2773 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
<<<<<<< HEAD
#line 731 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 722 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
#line 2783 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
<<<<<<< HEAD
#line 737 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 728 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
#line 2793 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
<<<<<<< HEAD
#line 746 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 737 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
#line 2803 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
<<<<<<< HEAD
#line 752 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 743 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
#line 2813 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
<<<<<<< HEAD
#line 758 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 749 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
#line 2823 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
<<<<<<< HEAD
#line 767 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 758 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
#line 2833 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
<<<<<<< HEAD
#line 773 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 764 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
#line 2843 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
<<<<<<< HEAD
#line 782 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 773 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
#line 2853 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
<<<<<<< HEAD
#line 788 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 779 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
#line 2863 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
<<<<<<< HEAD
#line 797 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 788 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
#line 2873 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
<<<<<<< HEAD
#line 803 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 794 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
#line 2883 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
<<<<<<< HEAD
#line 809 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 800 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
#line 2893 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
<<<<<<< HEAD
#line 818 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 809 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
#line 2903 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
<<<<<<< HEAD
#line 825 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 816 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
#line 2913 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
<<<<<<< HEAD
#line 831 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 822 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2923 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
<<<<<<< HEAD
#line 837 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 828 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2933 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
<<<<<<< HEAD
#line 843 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 834 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
#line 2943 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
<<<<<<< HEAD
#line 849 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 840 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
#line 2953 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
<<<<<<< HEAD
#line 855 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 846 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2963 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
<<<<<<< HEAD
#line 861 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 852 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2973 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
<<<<<<< HEAD
#line 867 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 858 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2983 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
<<<<<<< HEAD
#line 876 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 867 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
#line 2993 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
<<<<<<< HEAD
#line 882 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 873 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
#line 3003 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
<<<<<<< HEAD
#line 888 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 879 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
#line 3013 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
<<<<<<< HEAD
#line 894 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 885 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
#line 3023 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
<<<<<<< HEAD
#line 900 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 891 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
#line 3033 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
<<<<<<< HEAD
#line 906 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 897 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
#line 3043 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
<<<<<<< HEAD
#line 915 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 906 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
#line 3053 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
<<<<<<< HEAD
#line 921 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 912 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
#line 3063 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
<<<<<<< HEAD
#line 927 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 918 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
#line 3073 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
<<<<<<< HEAD
#line 936 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 927 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
#line 3083 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
<<<<<<< HEAD
#line 942 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 933 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
#line 3093 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
<<<<<<< HEAD
#line 951 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 942 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}
#line 3103 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
<<<<<<< HEAD
#line 957 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 948 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}
#line 3113 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
<<<<<<< HEAD
#line 963 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 954 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}
#line 3123 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
<<<<<<< HEAD
#line 969 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 960 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
			}
		}
#line 3133 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
<<<<<<< HEAD
#line 978 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 969 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
#line 3143 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
<<<<<<< HEAD
#line 984 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 975 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
#line 3153 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
<<<<<<< HEAD
#line 993 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 984 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3163 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
<<<<<<< HEAD
#line 999 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 990 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
#line 3173 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
<<<<<<< HEAD
#line 1005 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 996 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3183 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
<<<<<<< HEAD
#line 1014 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1005 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3193 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
<<<<<<< HEAD
#line 1020 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1011 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
#line 3203 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
<<<<<<< HEAD
#line 1026 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1017 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3213 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
<<<<<<< HEAD
#line 1032 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1023 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3223 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
<<<<<<< HEAD
#line 1038 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1029 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3233 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
<<<<<<< HEAD
#line 1044 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1035 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3243 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
<<<<<<< HEAD
#line 1050 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1041 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3253 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
<<<<<<< HEAD
#line 1056 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1047 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3263 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
<<<<<<< HEAD
#line 1062 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1053 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3273 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
<<<<<<< HEAD
#line 1068 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1059 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3283 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
<<<<<<< HEAD
#line 1077 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1068 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
#line 3293 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
<<<<<<< HEAD
#line 1083 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1074 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
#line 3303 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
<<<<<<< HEAD
#line 1089 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1080 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
#line 3313 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
<<<<<<< HEAD
#line 1095 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1086 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
#line 3323 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
<<<<<<< HEAD
#line 1101 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1092 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
#line 3333 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
<<<<<<< HEAD
#line 1110 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1101 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
#line 3343 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
<<<<<<< HEAD
#line 1116 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1107 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
#line 3353 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
<<<<<<< HEAD
#line 1125 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1116 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
#line 3363 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
<<<<<<< HEAD
#line 1131 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1122 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
#line 3373 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
<<<<<<< HEAD
#line 1140 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1131 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
#line 3383 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
<<<<<<< HEAD
#line 1146 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1137 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
#line 3393 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
<<<<<<< HEAD
#line 1152 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1143 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
#line 3403 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
<<<<<<< HEAD
#line 1158 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1149 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
#line 3413 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
<<<<<<< HEAD
#line 1164 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1155 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
#line 3423 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
<<<<<<< HEAD
#line 1170 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1161 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
#line 3433 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
<<<<<<< HEAD
#line 1176 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1167 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
#line 3443 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
<<<<<<< HEAD
#line 1182 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1173 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
#line 3453 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
<<<<<<< HEAD
#line 1188 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1179 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
#line 3463 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
<<<<<<< HEAD
#line 1194 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1185 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
#line 3473 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
<<<<<<< HEAD
#line 1200 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1191 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
#line 3483 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
<<<<<<< HEAD
#line 1209 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1200 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
#line 3493 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
<<<<<<< HEAD
#line 1215 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1206 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
#line 3503 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
<<<<<<< HEAD
#line 1224 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1215 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
#line 3513 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
<<<<<<< HEAD
#line 1233 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1224 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
#line 3523 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
<<<<<<< HEAD
#line 1239 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1230 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
#line 3533 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
<<<<<<< HEAD
#line 1248 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1239 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
#line 3543 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
<<<<<<< HEAD
#line 1254 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1245 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
#line 3553 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
<<<<<<< HEAD
#line 1263 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1254 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
#line 3563 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
<<<<<<< HEAD
#line 1269 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1260 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
#line 3573 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
<<<<<<< HEAD
#line 1278 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1269 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
#line 3583 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
<<<<<<< HEAD
#line 1284 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1275 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
#line 3593 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
<<<<<<< HEAD
#line 1293 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1284 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
#line 3603 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
<<<<<<< HEAD
#line 1299 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1290 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
#line 3613 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
<<<<<<< HEAD
#line 1308 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1299 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
#line 3623 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
<<<<<<< HEAD
#line 1314 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1305 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
#line 3633 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
<<<<<<< HEAD
#line 1320 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1311 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
#line 3643 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
<<<<<<< HEAD
#line 1329 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1320 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
#line 3653 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
<<<<<<< HEAD
#line 1335 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1326 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
#line 3663 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
<<<<<<< HEAD
#line 1341 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1332 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
#line 3673 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
<<<<<<< HEAD
#line 1347 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1338 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
#line 3683 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
<<<<<<< HEAD
#line 1353 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1344 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
#line 3693 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
<<<<<<< HEAD
#line 1362 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1353 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
#line 3703 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
<<<<<<< HEAD
#line 1368 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1359 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
#line 3713 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
<<<<<<< HEAD
#line 1374 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1365 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
#line 3723 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
<<<<<<< HEAD
#line 1383 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1374 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
#line 3733 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
<<<<<<< HEAD
#line 1389 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1380 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
#line 3743 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
<<<<<<< HEAD
#line 1395 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1386 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
#line 3753 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
<<<<<<< HEAD
#line 1404 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1395 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
#line 3763 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
<<<<<<< HEAD
#line 1410 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1401 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
#line 3773 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
<<<<<<< HEAD
#line 1416 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1407 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
#line 3783 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
<<<<<<< HEAD
#line 1422 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1413 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
#line 3793 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
<<<<<<< HEAD
#line 1431 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1422 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
#line 3803 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
<<<<<<< HEAD
#line 1437 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1428 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
#line 3813 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
<<<<<<< HEAD
#line 1446 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1437 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
#line 3823 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
<<<<<<< HEAD
#line 1452 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1443 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
#line 3833 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
<<<<<<< HEAD
#line 1458 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1449 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
#line 3843 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
<<<<<<< HEAD
#line 1464 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1455 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << std::endl;
			}
		}
#line 3853 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
<<<<<<< HEAD
#line 1470 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1461 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
#line 3863 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
<<<<<<< HEAD
#line 1476 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1467 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
#line 3873 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
<<<<<<< HEAD
#line 1485 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1476 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
#line 3883 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
<<<<<<< HEAD
#line 1491 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1482 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
#line 3893 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
<<<<<<< HEAD
#line 1497 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1488 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
#line 3903 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
<<<<<<< HEAD
#line 1503 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1494 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
#line 3913 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
<<<<<<< HEAD
#line 1509 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1500 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
#line 3923 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
<<<<<<< HEAD
#line 1515 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1506 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
#line 3933 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
<<<<<<< HEAD
#line 1524 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1515 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
		}
#line 3943 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
<<<<<<< HEAD
#line 1530 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1521 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
#line 3953 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
<<<<<<< HEAD
#line 1536 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1527 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
#line 3963 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
<<<<<<< HEAD
#line 1542 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1533 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}
		}
#line 3973 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
<<<<<<< HEAD
#line 1548 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1539 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
#line 3983 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
<<<<<<< HEAD
#line 1554 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1545 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
#line 3993 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
<<<<<<< HEAD
#line 1560 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1551 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
#line 4003 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
<<<<<<< HEAD
#line 1566 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1557 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
#line 4013 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
<<<<<<< HEAD
#line 1575 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1566 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
#line 4023 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
<<<<<<< HEAD
#line 1581 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1572 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
#line 4033 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
<<<<<<< HEAD
#line 1587 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1578 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
#line 4043 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
<<<<<<< HEAD
#line 1593 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1584 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
#line 4053 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
<<<<<<< HEAD
#line 1602 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1593 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
#line 4063 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
<<<<<<< HEAD
#line 1608 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1599 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
#line 4073 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
<<<<<<< HEAD
#line 1617 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1608 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}
		}
#line 4083 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
<<<<<<< HEAD
#line 1623 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1614 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
#line 4093 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
<<<<<<< HEAD
#line 1629 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1620 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
#line 4103 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
<<<<<<< HEAD
#line 1635 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1626 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
#line 4113 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
<<<<<<< HEAD
#line 1644 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1635 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
#line 4123 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
<<<<<<< HEAD
#line 1652 "../parser/cParser.y" /* yacc.c:1646  */
=======
#line 1643 "../parser/cParser.y" /* yacc.c:1646  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
    { std::cout << "IDENTIFIER: ";
					std::cout << (yyvsp[0].entry)->getIdentifierName() << std::endl; }
#line 4130 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4134 "cParser.tab.c" /* yacc.c:1646  */
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
<<<<<<< HEAD
#line 1655 "../parser/cParser.y" /* yacc.c:1906  */
=======
#line 1646 "../parser/cParser.y" /* yacc.c:1906  */
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
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

void write(const dVal& param) {
	switch(param.dataType) {
		case CHAR:
<<<<<<< HEAD
			//std::cout << "trying to write char" << std::endl; 
 			std::cout << param.value._char << std::endl; 
=======
			std::cout << param.value._char << std::endl; 
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
			break;

		case SHORT:
			std::cout << param.value._short << std::endl; 
			break;

		case INT:
<<<<<<< HEAD
			std::cout << "trying to write int" << std::endl;
=======
>>>>>>> ffd37d3a3fabba50f56eb005b3dea5d31e41a238
			std::cout << param.value._int << std::endl; 
			break;

		case LONG:
			std::cout << param.value._long << std::endl; 
			break;

		case FLOAT:
			std::cout << param.value._float << std::endl; 
			break;

		case DOUBLE:
			std::cout << param.value._double << std::endl; 
			break; 
	}
}
