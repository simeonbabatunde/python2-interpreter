/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */

	#include <iostream>
	#include <map>
	#include <cmath>
	#include "includes/ast.h"
	#include <vector>

	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);

	PoolOfNodes& pool = PoolOfNodes::getInstance();

	int start;
	int stop;
	int step;
	bool isIndex = false;

#line 85 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FLT_NUMBER = 289,
    FOR = 290,
    FROM = 291,
    GLOBAL = 292,
    GREATER = 293,
    GREATEREQUAL = 294,
    GRLT = 295,
    IF = 296,
    IMPORT = 297,
    IN = 298,
    INDENT = 299,
    INT_NUMBER = 300,
    IS = 301,
    LAMBDA = 302,
    LBRACE = 303,
    LEFTSHIFT = 304,
    LEFTSHIFTEQUAL = 305,
    LESS = 306,
    LESSEQUAL = 307,
    LPAR = 308,
    LSQB = 309,
    MINEQUAL = 310,
    MINUS = 311,
    NAME = 312,
    NEWLINE = 313,
    NOT = 314,
    NOTEQUAL = 315,
    OR = 316,
    PASS = 317,
    PERCENT = 318,
    PERCENTEQUAL = 319,
    PLUS = 320,
    PLUSEQUAL = 321,
    PRINT = 322,
    RAISE = 323,
    RBRACE = 324,
    RETURN = 325,
    RIGHTSHIFT = 326,
    RIGHTSHIFTEQUAL = 327,
    RPAR = 328,
    RSQB = 329,
    SEMI = 330,
    SLASH = 331,
    SLASHEQUAL = 332,
    STAR = 333,
    STAREQUAL = 334,
    STRING = 335,
    TILDE = 336,
    TRY = 337,
    VBAREQUAL = 338,
    WHILE = 339,
    WITH = 340,
    YIELD = 341,
    CR = 342,
    EQ = 343,
    MULT = 344,
    DIV = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "includes/parse.y" /* yacc.c:355  */

  Node* node;
	std::vector<Node*>* vec;
  int intNumber;
  float fltNumber;
  char *id;
	int tokenType;
	char * stringInput;
	int flag;

#line 227 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "parse.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   977

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    71,    74,    75,    82,    83,    86,    87,
      90,    91,    94,    95,    98,    99,   102,   109,   110,   113,
     114,   117,   118,   121,   122,   125,   126,   129,   130,   133,
     134,   137,   138,   141,   142,   145,   146,   149,   150,   153,
     154,   157,   158,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   172,   222,   230,   231,   234,   242,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     259,   276,   279,   280,   283,   284,   287,   288,   291,   292,
     295,   298,   301,   302,   303,   304,   305,   308,   311,   314,
     315,   318,   321,   322,   325,   326,   329,   330,   333,   334,
     337,   340,   343,   344,   347,   348,   349,   352,   353,   356,
     357,   360,   361,   364,   365,   368,   369,   372,   373,   376,
     379,   380,   383,   384,   387,   388,   391,   392,   393,   394,
     395,   396,   397,   398,   401,   402,   405,   406,   409,   410,
     413,   414,   417,   418,   421,   422,   425,   426,   429,   430,
     433,   436,   437,   440,   441,   444,   445,   448,   449,   452,
     453,   456,   457,   464,   468,   475,   476,   479,   480,   483,
     484,   487,   488,   491,   492,   495,   496,   499,   500,   503,
     504,   507,   508,   511,   512,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   528,   529,   532,   533,
     536,   537,   540,   541,   544,   545,   548,   549,   560,   561,
     564,   565,   582,   583,   584,   585,   588,   611,   614,   615,
     616,   619,   623,   640,   641,   644,   645,   646,   647,   648,
     653,   657,   661,   664,   665,   668,   669,   672,   673,   676,
     677,   680,   688,   698,   699,   702,   703,   706,   707,   710,
     711,   712,   715,   716,   719,   720,   723,   724,   728,   731,
     732,   735,   736,   739,   740,   743,   744,   747,   748,   751,
     752,   755,   756,   759,   760,   763,   764,   767,   768,   771,
     772,   775,   776,   779,   782,   783,   786,   787,   790,   791,
     794,   795,   796,   799,   800,   803,   804,   807,   808,   811,
     812,   815,   816,   819,   820,   823,   824,   827,   828,   831,
     832,   835,   836,   839,   840
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FLT_NUMBER", "FOR", "FROM", "GLOBAL",
  "GREATER", "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT",
  "INT_NUMBER", "IS", "LAMBDA", "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL",
  "LESS", "LESSEQUAL", "LPAR", "LSQB", "MINEQUAL", "MINUS", "NAME",
  "NEWLINE", "NOT", "NOTEQUAL", "OR", "PASS", "PERCENT", "PERCENTEQUAL",
  "PLUS", "PLUSEQUAL", "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT",
  "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR",
  "STAREQUAL", "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH",
  "YIELD", "CR", "EQ", "MULT", "DIV", "$accept", "start", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "star_COMMA_test", "opt_test",
  "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

#define YYPACT_NINF -316

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-316)))

#define YYTABLE_NINF -261

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -316,    38,  -316,   401,  -316,   867,     2,   867,  -316,    73,
    -316,    78,   579,  -316,   579,  -316,   579,  -316,    87,   867,
       2,  -316,    77,   867,    16,   867,  -316,  -316,  -316,   308,
    -316,  -316,   772,   867,   867,  -316,  -316,   137,   867,   867,
     867,  -316,  -316,    43,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,    57,   151,  -316,   212,   147,   146,   155,   -13,
      58,    13,  -316,   579,  -316,  -316,    81,  -316,    29,  -316,
    -316,   149,  -316,    32,  -316,    51,    24,   109,   147,  -316,
      39,   120,   125,    23,  -316,   154,  -316,   150,    35,   867,
     156,    21,    94,   101,  -316,   139,  -316,    99,  -316,  -316,
     140,   102,  -316,  -316,   867,  -316,  -316,   161,  -316,   641,
     164,  -316,   175,  -316,  -316,  -316,  -316,    25,   167,   308,
     308,  -316,   308,  -316,  -316,  -316,  -316,  -316,   127,  -316,
    -316,   141,  -316,   579,   579,   579,   579,  -316,  -316,   579,
    -316,  -316,   579,  -316,  -316,  -316,  -316,   579,  -316,    86,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,   157,    16,   867,   132,   119,  -316,  -316,
     867,   641,   867,   121,   178,   179,   867,   867,   -10,   160,
     176,   180,   641,     2,   142,  -316,   867,   148,    90,  -316,
     152,  -316,   173,   867,   579,   188,  -316,  -316,  -316,   188,
    -316,  -316,   579,   188,  -316,  -316,   190,   188,   867,  -316,
     166,  -316,    82,   641,   126,   579,  -316,   703,   867,    10,
     151,  -316,  -316,  -316,   147,   146,   155,   -13,    58,    13,
    -316,   159,   579,   119,   801,  -316,    16,  -316,  -316,  -316,
    -316,  -316,   138,  -316,   301,  -316,  -316,  -316,   162,  -316,
     165,   641,   579,   196,   199,   163,   216,  -316,  -316,  -316,
    -316,   170,  -316,  -316,  -316,  -316,  -316,  -316,   171,   208,
     867,   214,   139,   191,   867,  -316,  -316,   194,  -316,   867,
     223,  -316,  -316,   196,   561,   867,   225,   124,   228,   219,
     641,   867,   147,  -316,  -316,  -316,   867,  -316,  -316,   174,
     227,   238,   182,  -316,   239,  -316,   203,   867,   867,    98,
    -316,   241,   247,  -316,  -316,   147,   867,  -316,   641,   193,
     210,   252,  -316,   123,   257,  -316,   250,  -316,  -316,    14,
    -316,   259,  -316,  -316,   308,   896,  -316,   867,  -316,  -316,
    -316,   481,    49,   641,   261,   244,   263,   641,   264,  -316,
    -316,  -316,  -316,   260,  -316,   266,   867,  -316,  -316,  -316,
     867,  -316,  -316,   207,  -316,   641,  -316,   256,  -316,  -316,
     163,   867,   269,    90,   229,   867,  -316,     5,   272,    76,
     274,  -316,   230,  -316,  -316,  -316,  -316,  -316,   867,  -316,
    -316,   641,   273,  -316,   641,  -316,   641,  -316,   743,  -316,
     277,   280,  -316,  -316,   278,  -316,   282,   641,  -316,  -316,
     283,   896,  -316,  -316,  -316,   896,   288,   896,  -316,  -316,
    -316,   896,   291,  -316,  -316,   641,  -316,  -316,  -316,   867,
    -316,  -316,   838,  -316,   641,   641,  -316,   867,    96,  -316,
     896,    76,  -316,   896,  -316,  -316,  -316,   867,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    87,     0,
      88,     0,     0,     3,     0,   231,     0,   314,     0,     0,
       0,   230,    24,   240,   236,   238,   219,   229,     4,     0,
      81,   218,    75,    93,    90,   242,   220,     0,     0,     0,
     312,     6,    13,     0,   133,   131,     5,    37,    42,    43,
      44,    45,    46,    47,    82,    83,    84,    86,    85,    48,
      98,    99,    49,    50,    51,    38,   126,   127,   128,   129,
     130,    73,   176,   177,   179,   182,   183,   196,   198,   200,
     202,   206,   210,     0,   217,   224,   232,   174,    57,   132,
      91,   125,   117,     0,   309,     0,     0,     0,   268,    80,
     123,     0,     0,     0,   121,     0,   115,   100,   110,     0,
       0,     0,    73,     0,   239,    73,   235,     0,   234,   233,
      73,     0,   237,   181,     0,    70,    73,    97,    89,     0,
       0,   152,   154,   311,    12,    15,    14,     0,   270,     0,
       0,   173,     0,   187,   186,   188,   190,   192,   194,   185,
     189,     0,   191,     0,     0,     0,     0,   204,   205,     0,
     209,   208,     0,   215,   214,   213,   212,     0,   216,   222,
     241,    63,    65,    69,    68,    66,    59,    62,    58,    67,
      61,    60,    64,    53,     0,     0,     0,   285,     9,   228,
       0,     0,   282,    24,     0,   266,     0,     0,     0,   313,
     102,   119,     0,     0,     0,   248,     0,     0,     0,    31,
       0,    19,    22,     0,     0,    30,   272,   277,   227,    30,
     245,   225,     0,    30,   243,   226,    79,    30,     0,    92,
       0,   161,     0,     0,     0,     0,    40,     0,   269,     0,
     178,   180,   195,   193,   184,   197,   199,   201,   203,   207,
     211,     0,     0,   285,   260,   223,     0,    52,    55,    54,
     124,   118,     0,    10,     0,   310,   280,   281,     0,    18,
       0,     0,   265,    95,     0,     0,   108,   104,   101,   114,
     106,     0,   137,   116,   109,   247,    28,    36,     0,    26,
       0,    30,   274,     0,    29,   278,   246,     0,   244,     0,
      30,    71,    74,    95,     0,   156,     0,   147,     0,   139,
       0,     0,   153,    39,    41,    72,     0,   251,   221,     0,
       0,   257,     0,   255,     0,    56,     0,     0,     0,   296,
     283,    30,     0,    17,    16,   267,     0,   122,     0,     0,
       0,   112,   120,   135,    34,    32,     0,    27,    21,    23,
      20,    30,   271,   275,     0,     0,    77,    29,    78,    96,
     164,     0,   160,     0,     0,   149,     0,     0,     0,   150,
     151,   175,   249,     0,   250,   253,   260,     8,   292,   287,
       0,   293,   295,   284,   290,     0,    94,   141,   105,   107,
     111,     0,     0,    33,     0,    29,   276,   306,    24,   300,
     166,   170,   169,    76,   162,   163,   157,   158,     0,   155,
     143,     0,     0,   142,     0,   145,     0,   256,   252,   259,
     262,   289,   294,   279,     0,   113,     0,     0,    35,    25,
       0,     0,   305,   303,   304,     0,     0,     0,   299,   297,
     298,     0,    30,   159,   146,     0,   144,   138,   254,   264,
     258,   261,     0,   291,     0,     0,   134,     0,   308,   172,
       0,   302,   168,    29,   165,   148,   263,     0,   286,   140,
     136,   273,   307,   171,   301,   167,   288
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,  -316,  -316,  -316,   265,    56,  -316,  -316,   270,
    -316,  -181,  -316,  -316,  -316,  -316,  -197,  -195,  -316,  -316,
    -273,    -2,  -316,    67,  -316,    59,  -316,  -316,  -316,    12,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,     9,  -316,  -316,  -316,  -316,  -316,  -316,   -76,   113,
      44,  -316,  -316,    18,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,     7,
      19,  -316,  -316,  -185,  -316,  -316,  -316,  -315,  -316,    -5,
    -316,  -136,   181,    -6,  -316,  -316,    -7,   183,   177,   172,
    -316,   184,  -316,   158,  -316,   -62,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,   -89,   -46,  -316,  -316,    -1,  -316,   -24,  -316,  -316,
    -316,  -316,   290,  -316,  -316,  -316,  -316,  -316,  -316,  -118,
    -316,  -125,   218,  -316,  -119,  -104,  -316,  -316,   -20,  -316
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,     3,    42,   262,    43,    44,    45,
     194,   110,   291,   111,   347,   211,   295,   212,   288,   344,
      46,   231,   137,    48,    49,   257,   183,   184,    50,   138,
     125,   300,   301,    51,    52,    53,    54,    55,    56,    57,
      58,   337,   229,    59,    60,    61,   102,   278,   279,   106,
     280,   341,   107,   108,    62,   201,    63,    64,    65,    66,
     343,    67,    68,    69,   307,   365,   413,    70,   234,   131,
     308,   408,   409,   232,   361,   399,   442,   400,   401,    71,
     141,    72,    73,    74,    75,   153,    76,    77,    78,    79,
     159,    80,   162,    81,   167,    82,    83,    84,   169,    85,
     116,   117,   121,   113,    86,   122,   118,    87,   255,   322,
     375,   323,   324,   450,   451,    99,   195,    88,   114,   351,
     352,   216,    89,   268,   263,   264,   421,   453,   330,   331,
     381,   438,   439,   440,   432,   433,   434,    95,    90,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    47,    94,   239,   119,    98,   266,   100,   217,    98,
     128,   220,   270,   287,   105,   101,   133,   282,   112,   115,
     120,   168,   296,   123,    93,     7,   298,   126,   127,   -29,
     302,   360,   171,   130,   132,   163,   157,   316,     4,   191,
     214,   204,   172,   275,   199,   207,   431,   276,   309,   154,
      15,     6,   173,   186,   174,   406,   186,     9,   158,    92,
     189,    21,    11,    22,    23,   407,   140,   190,   277,    24,
      25,   140,    26,    27,   208,    29,   164,   192,   209,   175,
      92,    31,   196,   236,   176,   187,   334,   -29,   405,   165,
     188,   166,   109,   177,   350,   178,    35,    36,   139,   210,
     237,   179,    40,   358,   205,   250,   180,   251,   181,   213,
     252,   222,   182,   305,   160,   306,   458,   437,   140,   226,
     459,   200,   461,   161,   215,   369,   462,   219,   380,   214,
      96,   214,   223,   214,   384,    97,   241,   431,   227,   253,
     254,   310,   311,   208,   104,   473,   244,   209,   475,   391,
     392,   364,   129,   387,   396,   305,   142,   154,   155,   156,
     258,   170,   193,   197,   259,   185,   203,   198,   267,   202,
     218,   206,   221,   274,   214,   222,   225,   228,   410,   233,
     260,   235,   415,   238,   243,   265,   242,   256,   353,   261,
     318,   273,   -11,   271,   269,   272,   281,   186,   428,   284,
     423,   285,  -103,   290,   294,   286,   299,    98,   292,   289,
     304,   326,   336,   293,   338,    98,   317,   436,   397,   402,
     276,   297,   340,   303,   346,   382,   444,   342,   312,   446,
     349,   447,   258,   315,   354,   332,   259,   355,   333,   357,
     363,   143,   456,   367,   345,   464,   368,   372,   373,   321,
     144,   145,   146,  -259,   376,   147,   374,   383,   148,   329,
     465,   377,   385,   149,   150,   335,   388,   389,   390,   469,
     470,   151,   152,   393,   394,   395,   411,   412,   414,   416,
     -29,   417,   418,   424,   427,   348,   429,   435,   445,   315,
     441,   140,   449,   454,   356,   402,   452,   455,   457,   402,
     362,   402,    47,   460,   314,   402,   132,   463,   134,   319,
       7,   371,   359,   135,   425,   325,   283,     7,   370,   339,
     249,   240,   378,   379,   402,   327,   366,   402,   247,   448,
     420,   386,   246,   136,   468,    15,   474,   245,   224,   472,
       0,     0,    15,   248,     0,     0,    21,     0,    22,    23,
       0,     0,   403,    21,    24,    25,    23,    26,    27,    47,
      29,    24,    25,     0,    26,    27,    31,    29,     0,     0,
       0,   419,     0,    31,     0,   422,     0,     0,     0,   328,
       0,    35,    36,     0,     0,     0,   426,     0,    35,    36,
     430,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     5,     6,
       7,     0,     8,   321,     0,     9,     0,     0,    10,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,     0,
       0,     0,    19,    20,   466,     0,    21,   329,    22,    23,
       0,     0,   471,     0,    24,    25,     0,    26,    27,    28,
      29,     0,   476,    30,     0,     0,    31,     0,    32,    33,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,    39,    40,     5,     6,
       7,     0,     8,     0,     0,     9,     0,     0,    10,   404,
      11,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,     0,
       0,     0,    19,    20,     0,     0,    21,     0,    22,    23,
       0,     0,     0,     0,    24,    25,     0,    26,    27,     0,
      29,     0,     0,    30,     0,     0,    31,     0,    32,    33,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,    39,    40,     5,     6,
       7,     0,     8,     0,     0,     9,     0,     0,    10,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,     0,
       0,     0,    19,    20,     0,     0,    21,     0,    22,    23,
       0,     0,     0,    15,    24,    25,     0,    26,    27,     0,
      29,     0,     0,    30,    21,     0,    31,    23,    32,    33,
       0,    34,    24,    25,     0,    26,    27,     0,     0,     0,
       0,    35,    36,    37,    31,    38,    39,    40,     5,     0,
       7,     0,     8,     0,     0,     0,     0,     0,    10,    35,
      36,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,    15,     0,    17,    18,     0,
       0,     0,     0,    20,     0,     0,    21,     0,    22,    23,
       0,     0,     0,     0,    24,    25,     0,    26,    27,   230,
      29,     0,     0,    30,     0,     0,    31,     0,    32,    33,
       5,    34,     7,     0,     8,     0,     0,     0,     0,     0,
      10,    35,    36,    12,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,    14,     0,    15,     0,    17,
      18,     0,     0,     0,     0,    20,     0,     0,    21,     0,
      22,    23,     7,     0,     0,     0,    24,    25,  -260,    26,
      27,   313,    29,     0,   320,    30,     0,     0,    31,     0,
      32,    33,     0,    34,     0,     0,     0,    15,     0,     0,
       0,     7,     0,    35,    36,     0,     0,     0,    21,    40,
      22,    23,     0,     0,     0,     0,    24,    25,     0,    26,
      27,     0,    29,     0,     0,     0,    15,     0,    31,     0,
       7,     0,     0,     0,     0,     0,     0,    21,     0,    22,
      23,     0,   320,    35,    36,    24,    25,     0,    26,    27,
       0,    29,     0,     0,     0,    15,     0,    31,     0,     0,
       0,     0,     0,   124,     0,     0,    21,     7,    22,    23,
       0,     0,    35,    36,    24,    25,     0,    26,    27,     0,
      29,     0,   467,     0,     0,     0,    31,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     7,     0,     0,     0,
       0,    35,    36,    21,     0,    22,    23,     0,     0,     0,
       0,    24,    25,     0,    26,    27,     0,    29,     0,     0,
       0,    15,     0,    31,     0,     7,     0,     0,     0,     0,
       0,     0,    21,     0,    22,    23,     0,     0,    35,    36,
      24,    25,     0,    26,    27,     0,    29,     0,     0,     0,
      15,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,   398,    23,     0,     0,    35,    36,    24,
      25,     0,    26,    27,     0,    29,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   139,    24,    12,   191,    14,   112,    16,
      34,   115,   193,   208,    19,    16,    40,   202,    23,    24,
      25,    83,   219,    29,     6,     9,   223,    32,    33,    15,
     227,   304,     3,    38,    39,    22,    49,    27,     0,    15,
      35,     6,    13,    53,    21,    24,    41,    57,   233,    10,
      34,     8,    23,    21,    25,     6,    21,    14,    71,    57,
       9,    45,    19,    47,    48,    16,    61,    16,    78,    53,
      54,    61,    56,    57,    53,    59,    63,    53,    57,    50,
      57,    65,    43,    58,    55,    53,   271,    73,   361,    76,
      58,    78,    15,    64,   291,    66,    80,    81,    41,    78,
      75,    72,    86,   300,   109,   167,    77,    21,    79,    15,
      24,    35,    83,    31,    56,    33,   431,    41,    61,   124,
     435,   103,   437,    65,   112,   310,   441,   115,    30,    35,
      57,    35,   120,    35,   331,    57,   142,    41,   126,    53,
      54,    15,    16,    53,    57,   460,   153,    57,   463,    26,
      27,    27,    15,   338,   351,    31,     5,    10,    12,     4,
     184,    80,    53,    43,   184,    16,    16,    42,   192,    15,
      69,    15,    73,   197,    35,    35,    74,    16,   363,    15,
     185,     6,   367,    16,    43,   190,    59,    30,   292,    57,
     252,   196,    73,    15,    73,    16,    16,    21,   393,    57,
     385,   206,    42,    30,    16,    57,    16,   214,   213,    57,
      44,    73,    16,   214,    15,   222,    57,   398,   354,   355,
      57,   222,     6,   228,    16,   329,   411,    57,   235,   414,
      16,   416,   256,   238,    43,    73,   256,    43,    73,    16,
      15,    29,   427,    15,    73,   442,    27,    73,    21,   254,
      38,    39,    40,    15,    15,    43,    74,    16,    46,   264,
     445,    58,    15,    51,    52,   272,    73,    57,    16,   454,
     455,    59,    60,    16,    24,    16,    15,    33,    15,    15,
      73,    21,    16,    27,    15,   290,    57,    15,    15,   294,
      16,    61,    15,    15,   299,   431,    16,    15,    15,   435,
     305,   437,   304,    15,   237,   441,   311,    16,    43,   253,
       9,   316,   303,    43,   390,   256,   203,     9,   311,   275,
     162,   140,   327,   328,   460,    24,   307,   463,   156,   418,
     376,   336,   155,    43,   452,    34,   461,   154,   120,   458,
      -1,    -1,    34,   159,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,   357,    45,    53,    54,    48,    56,    57,   361,
      59,    53,    54,    -1,    56,    57,    65,    59,    -1,    -1,
      -1,   376,    -1,    65,    -1,   380,    -1,    -1,    -1,    78,
      -1,    80,    81,    -1,    -1,    -1,   391,    -1,    80,    81,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   408,    -1,    -1,    -1,    -1,     7,     8,
       9,    -1,    11,   418,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    42,   449,    -1,    45,   452,    47,    48,
      -1,    -1,   457,    -1,    53,    54,    -1,    56,    57,    58,
      59,    -1,   467,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    86,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    86,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    34,    53,    54,    -1,    56,    57,    -1,
      59,    -1,    -1,    62,    45,    -1,    65,    48,    67,    68,
      -1,    70,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
      -1,    80,    81,    82,    65,    84,    85,    86,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    80,
      81,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,    58,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
       7,    70,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    80,    81,    20,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      47,    48,     9,    -1,    -1,    -1,    53,    54,    15,    56,
      57,    58,    59,    -1,    21,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    34,    -1,    -1,
      -1,     9,    -1,    80,    81,    -1,    -1,    -1,    45,    86,
      47,    48,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    34,    -1,    65,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    21,    80,    81,    53,    54,    -1,    56,    57,
      -1,    59,    -1,    -1,    -1,    34,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    45,     9,    47,    48,
      -1,    -1,    80,    81,    53,    54,    -1,    56,    57,    -1,
      59,    -1,    24,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    80,    81,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    -1,    59,    -1,    -1,
      -1,    34,    -1,    65,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    -1,    -1,    80,    81,
      53,    54,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      34,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    80,    81,    53,
      54,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    92,    93,    95,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    37,    41,
      42,    45,    47,    48,    53,    54,    56,    57,    58,    59,
      62,    65,    67,    68,    70,    80,    81,    82,    84,    85,
      86,    94,    96,    98,    99,   100,   111,   112,   114,   115,
     119,   124,   125,   126,   127,   128,   129,   130,   131,   134,
     135,   136,   145,   147,   148,   149,   150,   152,   153,   154,
     158,   170,   172,   173,   174,   175,   177,   178,   179,   180,
     182,   184,   186,   187,   188,   190,   195,   198,   208,   213,
     229,   170,    57,   144,   170,   228,    57,    57,   177,   206,
     177,   206,   137,   230,    57,   170,   140,   143,   144,    15,
     102,   104,   170,   194,   209,   170,   191,   192,   197,   229,
     170,   193,   196,   174,    71,   121,   170,   170,   208,    15,
     170,   160,   170,   208,    96,   100,   213,   113,   120,    41,
      61,   171,     5,    29,    38,    39,    40,    43,    46,    51,
      52,    59,    60,   176,    10,    12,     4,    49,    71,   181,
      56,    65,   183,    22,    63,    76,    78,   185,   186,   189,
      80,     3,    13,    23,    25,    50,    55,    64,    66,    72,
      77,    79,    83,   117,   118,    16,    21,    53,    58,     9,
      16,    15,    53,    53,   101,   207,    43,    43,    42,    21,
     144,   146,    15,    16,     6,   170,    15,    24,    53,    57,
      78,   106,   108,    15,    35,   120,   212,   226,    69,   120,
     226,    73,    35,   120,   223,    74,   170,   120,    16,   133,
      58,   112,   164,    15,   159,     6,    58,    75,    16,   172,
     173,   174,    59,    43,   177,   178,   179,   180,   182,   184,
     186,    21,    24,    53,    54,   199,    30,   116,   208,   229,
     170,    57,    97,   215,   216,   170,   164,   208,   214,    73,
     102,    15,    16,   170,   208,    53,    57,    78,   138,   139,
     141,    16,   164,   140,    57,   170,    57,   108,   109,    57,
      30,   103,   170,   206,    16,   107,   107,   206,   107,    16,
     122,   123,   107,   170,    44,    31,    33,   155,   161,   164,
      15,    16,   177,    58,   114,   170,    27,    57,   186,    97,
      21,   170,   200,   202,   203,   116,    73,    24,    78,   170,
     219,   220,    73,    73,   164,   177,    16,   132,    15,   141,
       6,   142,    57,   151,   110,    73,    16,   105,   170,    16,
     107,   210,   211,   226,    43,    43,   170,    16,   107,   132,
     111,   165,   170,    15,    27,   156,   161,    15,    27,   164,
     160,   170,    73,    21,    74,   201,    15,    58,   170,   170,
      30,   221,   226,    16,   107,    15,   170,   164,    73,    57,
      16,    26,    27,    16,    24,    16,   107,   172,    47,   166,
     168,   169,   172,   170,    18,   111,     6,    16,   162,   163,
     164,    15,    33,   157,    15,   164,    15,    21,    16,   170,
     203,   217,   170,   164,    27,   139,   170,    15,   108,    57,
     170,    41,   225,   226,   227,    15,   102,    41,   222,   223,
     224,    16,   167,   170,   164,    15,   164,   164,   202,    15,
     204,   205,    16,   218,    15,    15,   164,    15,   168,   168,
      15,   168,   168,    16,   107,   164,   170,    24,   220,   164,
     164,   170,   225,   168,   222,   168,   170
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   125,   126,   126,   126,   126,   126,   127,   128,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   136,   137,   137,   138,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   185,   185,   186,   186,   187,   187,
     187,   188,   188,   189,   189,   190,   190,   190,   190,   190,
     190,   190,   190,   191,   191,   192,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   199,   200,   200,   201,   201,   202,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   214,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   219,   220,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   230
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     3,     0,     3,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     0,     3,     0,     1,     1,
       2,     4,     2,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     3,     0,     1,     3,     1,     3,     3,
       3,     0,     5,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     5,     5,     0,     7,     4,
       9,     6,     6,     6,     4,     3,     3,     0,     3,     0,
       5,     3,     0,     3,     1,     3,     1,     1,     1,     2,
       0,     1,     4,     2,     1,     3,     1,     3,     2,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     2,     3,     2,     3,     4,     3,     3,
       3,     2,     3,     2,     3,     0,     3,     1,     4,     1,
       0,     1,     0,     2,     1,     3,     2,     3,     0,     3,
       2,     4,     2,     5,     0,     1,     2,     1,     2,     7,
       4,     1,     0,     2,     3,     0,     3,     0,     3,     0,
       2,     4,     2,     2,     3,     1,     0,     1,     1,     5,
       4,     3,     2,     1,     1,     5,     4,     3,     2,     1,
       3,     2,     1,     2,     0
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 75 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].node)){
				(yyvsp[0].node)->eval();
			}
		}
#line 1938 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new FuncNode((yyvsp[-3].id), (yyvsp[0].node));
			pool.add((yyval.node));
			delete [] (yyvsp[-3].id);
		}
#line 1948 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 125 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 1954 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-1].id);}
#line 1960 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 130 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 1966 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 137 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 1972 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 153 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-3].node);}
#line 1978 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 154 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 1984 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 161 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1990 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 162 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1996 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 163 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2002 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 164 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2008 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 165 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2014 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 166 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2020 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2026 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 168 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2032 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 169 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2038 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 172 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].tokenType) == PLUSEQUAL){
				Node * rhs = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}

			if((yyvsp[-1].tokenType) == MINEQUAL){
				Node * rhs = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}

			if((yyvsp[-1].tokenType) == STAREQUAL){
				Node * rhs = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}

			if((yyvsp[-1].tokenType) == SLASHEQUAL){
				Node * rhs = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}

			if((yyvsp[-1].tokenType) == PERCENTEQUAL){
				Node * rhs = new ModBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}

			if((yyvsp[-1].tokenType) == DOUBLESTAREQUAL){
				Node * rhs = new PowBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}

			if((yyvsp[-1].tokenType) == DOUBLESLASHEQUAL){
				Node * rhs = new IntDivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), rhs);
				pool.add(rhs);
				pool.add((yyval.node));
			}
		}
#line 2093 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].node) != 0){
				(yyval.node) = new AsgBinaryNode((yyvsp[-1].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2104 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 230 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2110 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 231 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2116 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].node) == 0){
				(yyval.node) = (yyvsp[0].node);
			}else	if((yyvsp[-2].node) != 0 && (yyvsp[0].node) != 0){
				(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2129 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 242 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2135 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 245 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = PLUSEQUAL;}
#line 2141 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 246 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = MINEQUAL;}
#line 2147 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 247 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = STAREQUAL;}
#line 2153 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 248 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = SLASHEQUAL;}
#line 2159 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 249 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = PERCENTEQUAL;}
#line 2165 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 250 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = AMPEREQUAL;}
#line 2171 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 251 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = VBAREQUAL;}
#line 2177 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 252 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = CIRCUMFLEXEQUAL;}
#line 2183 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 253 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = LEFTSHIFTEQUAL;}
#line 2189 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 254 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = RIGHTSHIFTEQUAL;}
#line 2195 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 255 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = DOUBLESTAREQUAL;}
#line 2201 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 256 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = DOUBLESLASHEQUAL;}
#line 2207 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 259 "includes/parse.y" /* yacc.c:1646  */
    {
			if ((yyvsp[0].node)){
				(yyval.node) = new PrintNode((yyvsp[0].node));
				pool.add((yyval.node));
			}else{
				(yyval.node) = new PrintNode(nullptr);
				pool.add((yyval.node));
			}

			//try{
			//	$2->eval()->print();
			//}catch(std::string & msg){
			//	std::cout<< msg << std::endl;
			//}catch( ... ){
			//	std::cout<< "Hey! something is wrong." << std::endl;
			//}
		}
#line 2229 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 276 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2235 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 283 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2241 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 284 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2247 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 301 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2253 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 302 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2259 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 303 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2265 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 304 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2271 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 305 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2277 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 314 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2283 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 315 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2289 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 352 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-2].id); delete [] (yyvsp[0].id);}
#line 2295 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 353 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2301 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 356 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2307 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 372 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2313 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 373 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2319 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 376 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-1].id);}
#line 2325 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 379 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2331 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 391 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2337 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 392 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2343 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 393 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2349 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 394 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2355 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 395 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2361 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 396 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2367 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 397 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2373 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 398 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2379 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 401 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2385 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 402 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2391 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 409 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2397 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 410 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2403 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 413 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2409 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 414 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2415 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 417 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2421 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 418 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2427 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 433 "includes/parse.y" /* yacc.c:1646  */
    {return 0;}
#line 2433 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 456 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2439 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 457 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
			pool.add((yyval.node));
			delete (yyvsp[-1].vec);
		}
#line 2449 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 464 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = (yyvsp[-1].vec);
			(yyval.vec)->push_back((yyvsp[0].node));
		}
#line 2458 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 468 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = new std::vector<Node*>();
			(yyval.vec)->reserve(8);
			(yyval.vec)->push_back((yyvsp[0].node));
		}
#line 2468 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 476 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2474 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 483 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2480 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 487 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2486 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 488 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2492 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 491 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2498 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 492 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2504 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 499 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2510 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 500 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)= nullptr;}
#line 2516 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 503 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2522 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 504 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)= nullptr;}
#line 2528 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 507 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2534 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 508 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2540 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 511 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2546 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 512 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2552 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 528 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2558 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 529 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)= nullptr;}
#line 2564 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 532 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2570 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 533 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)=nullptr;}
#line 2576 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 536 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2582 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 537 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)=nullptr;}
#line 2588 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 540 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); }
#line 2594 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 549 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].tokenType) == PLUS){
				(yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}else if((yyvsp[-1].tokenType) == MINUS){
				(yyval.node) = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2608 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 560 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = PLUS;}
#line 2614 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 561 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = MINUS;}
#line 2620 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 565 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].tokenType) == STAR){
				(yyval.node) = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}else if((yyvsp[-1].tokenType) == SLASH){
				(yyval.node) = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}else if((yyvsp[-1].tokenType) == PERCENT){
				(yyval.node) = new ModBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}else if((yyvsp[-1].tokenType) == DOUBLESLASH){
				(yyval.node) = new IntDivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2640 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 582 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = STAR;}
#line 2646 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 583 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = SLASH;}
#line 2652 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 584 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = PERCENT;}
#line 2658 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 585 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = DOUBLESLASH;}
#line 2664 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 588 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].tokenType) == PLUS){
				Node * placeholder = new IntLiteral(0);
				(yyval.node) = new AddBinaryNode(placeholder, (yyvsp[0].node));
				pool.add((yyval.node));
				pool.add(placeholder);
			}else if((yyvsp[-1].tokenType) == MINUS){
				Node * placeholder = new IntLiteral(0);
				(yyval.node) = new SubBinaryNode(placeholder, (yyvsp[0].node));
				pool.add((yyval.node));
				pool.add(placeholder);
			}else if((yyvsp[-1].tokenType) == TILDE){
				// ~ evaluates to two's complement
				Node * valueOne = new IntLiteral(1);
				Node * placeholder = new IntLiteral(0);
				Node * negativeVal = new SubBinaryNode(placeholder, (yyvsp[0].node));
				(yyval.node) = new SubBinaryNode(negativeVal, valueOne);
				pool.add(valueOne);
				pool.add(placeholder);
				pool.add(negativeVal);
				pool.add((yyval.node));
			}
		}
#line 2692 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 614 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = PLUS;}
#line 2698 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 615 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = MINUS;}
#line 2704 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 616 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.tokenType) = TILDE;}
#line 2710 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 619 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
#line 2719 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 623 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].node)){
				if(isIndex){
					(yyval.node) = new IndexBinaryNode((yyvsp[-1].node), (yyvsp[0].node));
					pool.add((yyval.node));
					isIndex = false;
				}else{
					std::string n = static_cast<IdentNode*>((yyvsp[-1].node))->getIdent();
					(yyval.node) = new CallNode(n);
					pool.add((yyval.node));
				}
			}else{
				(yyval.node) = (yyvsp[-1].node);
			}
		}
#line 2739 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 640 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2745 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 641 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2751 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 644 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2757 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 645 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2763 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 646 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2769 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 647 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2775 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 648 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new IdentNode((yyvsp[0].id));
			pool.add((yyval.node));
			delete[] (yyvsp[0].id);
		}
#line 2785 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 653 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new IntLiteral((yyvsp[0].intNumber));
			pool.add((yyval.node));
		}
#line 2794 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 657 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
			pool.add((yyval.node));
		}
#line 2803 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 661 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2809 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 664 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2815 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 665 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node)= (yyvsp[0].node);}
#line 2821 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 668 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2827 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 669 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2833 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 672 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2839 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 673 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2845 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 676 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2851 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 677 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2857 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 680 "includes/parse.y" /* yacc.c:1646  */
    {
		std::string s((yyvsp[0].stringInput));
		s.erase(0,1);      // strip the first quote
		s.erase(s.size()-1, 1);  // strip the last quote
		(yyval.node) = new StringNode(s);
		pool.add((yyval.node));
		delete [] (yyvsp[0].stringInput);
		}
#line 2870 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 688 "includes/parse.y" /* yacc.c:1646  */
    {
			std::string s((yyvsp[0].stringInput));
			s.erase(0,1);      // strip the first quote
			s.erase(s.size()-1, 1);  // strip the last quote
			(yyval.node) = new StringNode(s);
			pool.add((yyval.node));
			delete [] (yyvsp[0].stringInput);
		}
#line 2883 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 702 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2889 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 703 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2895 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 706 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2901 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 707 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2907 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 710 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = new IntLiteral(1); pool.add((yyval.node));}
#line 2913 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 711 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2919 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 712 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr; delete [] (yyvsp[0].id);}
#line 2925 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 715 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2931 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 716 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2937 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 719 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2943 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 720 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2949 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 723 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2955 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 724 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[0].node);
			isIndex = true;
		}
#line 2964 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 728 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node);}
#line 2970 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 731 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2976 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 732 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 2982 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 751 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2988 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 752 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2994 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 771 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-5].id);}
#line 3000 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 772 "includes/parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-2].id);}
#line 3006 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 835 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 3012 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 836 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = nullptr;}
#line 3018 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 3022 "parse.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 843 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
