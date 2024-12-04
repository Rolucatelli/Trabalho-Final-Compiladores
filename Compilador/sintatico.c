/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 12 "sintatico.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexico.c"
#include "utils.c"

int contaVar = 0;
int rotulo = 0;
int tipo;


#line 84 "sintatico.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sintatico.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_PROGRAMA = 3,                 /* T_PROGRAMA  */
  YYSYMBOL_T_INICIO = 4,                   /* T_INICIO  */
  YYSYMBOL_T_FIMPROG = 5,                  /* T_FIMPROG  */
  YYSYMBOL_T_LEIA = 6,                     /* T_LEIA  */
  YYSYMBOL_T_ESCREVA = 7,                  /* T_ESCREVA  */
  YYSYMBOL_T_SE = 8,                       /* T_SE  */
  YYSYMBOL_T_ENTAO = 9,                    /* T_ENTAO  */
  YYSYMBOL_T_SENAO = 10,                   /* T_SENAO  */
  YYSYMBOL_T_FIMSE = 11,                   /* T_FIMSE  */
  YYSYMBOL_T_ENQUANTO = 12,                /* T_ENQUANTO  */
  YYSYMBOL_T_FACA = 13,                    /* T_FACA  */
  YYSYMBOL_T_FIMEQNTO = 14,                /* T_FIMEQNTO  */
  YYSYMBOL_T_MAIS = 15,                    /* T_MAIS  */
  YYSYMBOL_T_MENOS = 16,                   /* T_MENOS  */
  YYSYMBOL_T_VEZES = 17,                   /* T_VEZES  */
  YYSYMBOL_T_DIV = 18,                     /* T_DIV  */
  YYSYMBOL_T_MAIOR = 19,                   /* T_MAIOR  */
  YYSYMBOL_T_MENOR = 20,                   /* T_MENOR  */
  YYSYMBOL_T_IGUAL = 21,                   /* T_IGUAL  */
  YYSYMBOL_T_E = 22,                       /* T_E  */
  YYSYMBOL_T_OU = 23,                      /* T_OU  */
  YYSYMBOL_T_NAO = 24,                     /* T_NAO  */
  YYSYMBOL_T_ATRIB = 25,                   /* T_ATRIB  */
  YYSYMBOL_T_ABRE = 26,                    /* T_ABRE  */
  YYSYMBOL_T_FECHA = 27,                   /* T_FECHA  */
  YYSYMBOL_T_INTEIRO = 28,                 /* T_INTEIRO  */
  YYSYMBOL_T_LOGICO = 29,                  /* T_LOGICO  */
  YYSYMBOL_T_LITERAL = 30,                 /* T_LITERAL  */
  YYSYMBOL_T_V = 31,                       /* T_V  */
  YYSYMBOL_T_F = 32,                       /* T_F  */
  YYSYMBOL_T_IDENTIF = 33,                 /* T_IDENTIF  */
  YYSYMBOL_T_NUMERO = 34,                  /* T_NUMERO  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_programa = 36,                  /* programa  */
  YYSYMBOL_37_1 = 37,                      /* $@1  */
  YYSYMBOL_38_2 = 38,                      /* $@2  */
  YYSYMBOL_cabecalho = 39,                 /* cabecalho  */
  YYSYMBOL_variaveis = 40,                 /* variaveis  */
  YYSYMBOL_declaracao_variaveis = 41,      /* declaracao_variaveis  */
  YYSYMBOL_tipo = 42,                      /* tipo  */
  YYSYMBOL_lista_variaveis = 43,           /* lista_variaveis  */
  YYSYMBOL_lista_comandos = 44,            /* lista_comandos  */
  YYSYMBOL_comando = 45,                   /* comando  */
  YYSYMBOL_leitura = 46,                   /* leitura  */
  YYSYMBOL_escrita = 47,                   /* escrita  */
  YYSYMBOL_repeticao = 48,                 /* repeticao  */
  YYSYMBOL_49_3 = 49,                      /* $@3  */
  YYSYMBOL_50_4 = 50,                      /* $@4  */
  YYSYMBOL_selecao = 51,                   /* selecao  */
  YYSYMBOL_52_5 = 52,                      /* $@5  */
  YYSYMBOL_53_6 = 53,                      /* $@6  */
  YYSYMBOL_atribuicao = 54,                /* atribuicao  */
  YYSYMBOL_55_7 = 55,                      /* $@7  */
  YYSYMBOL_expressao = 56,                 /* expressao  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_58_9 = 58,                      /* $@9  */
  YYSYMBOL_59_10 = 59,                     /* $@10  */
  YYSYMBOL_60_11 = 60,                     /* $@11  */
  YYSYMBOL_61_12 = 61,                     /* $@12  */
  YYSYMBOL_62_13 = 62,                     /* $@13  */
  YYSYMBOL_63_14 = 63,                     /* $@14  */
  YYSYMBOL_termo = 64                      /* termo  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  87

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    84,    76,   100,   104,   105,   109,   110,
     114,   118,   125,   133,   144,   145,   146,   150,   151,   152,
     153,   154,   158,   169,   179,   195,   201,   194,   221,   229,
     220,   245,   244,   261,   260,   273,   272,   285,   284,   298,
     297,   311,   310,   323,   322,   335,   334,   350,   362,   374,
     378,   384,   390,   395,   400,   415
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_PROGRAMA",
  "T_INICIO", "T_FIMPROG", "T_LEIA", "T_ESCREVA", "T_SE", "T_ENTAO",
  "T_SENAO", "T_FIMSE", "T_ENQUANTO", "T_FACA", "T_FIMEQNTO", "T_MAIS",
  "T_MENOS", "T_VEZES", "T_DIV", "T_MAIOR", "T_MENOR", "T_IGUAL", "T_E",
  "T_OU", "T_NAO", "T_ATRIB", "T_ABRE", "T_FECHA", "T_INTEIRO", "T_LOGICO",
  "T_LITERAL", "T_V", "T_F", "T_IDENTIF", "T_NUMERO", "$accept",
  "programa", "$@1", "$@2", "cabecalho", "variaveis",
  "declaracao_variaveis", "tipo", "lista_variaveis", "lista_comandos",
  "comando", "leitura", "escrita", "repeticao", "$@3", "$@4", "selecao",
  "$@5", "$@6", "atribuicao", "$@7", "expressao", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "termo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,     1,    14,   -44,   -44,   -44,    20,   -44,   -44,    34,
     -44,    18,   -44,   -44,    -1,    57,   -44,   -44,    22,    90,
      44,   -44,   -44,    -3,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,    44,    44,   -44,   -44,   -44,   -44,   -44,   110,   -44,
      65,    44,    41,   -44,   -44,   -44,    76,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,    44,    44,   -44,    89,    44,   -44,
      44,    44,    44,    44,    44,    44,    44,   -44,   -44,    57,
     -44,   110,    -2,    -2,   115,   115,    38,    38,    38,     0,
      57,   -44,    17,    57,   -44,    46,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     5,     1,     6,    10,    11,     0,
       7,     0,     3,    13,     9,    16,    12,     8,     0,     0,
       0,    25,    31,     0,    15,    17,    18,    19,    20,    21,
      22,     0,     0,    24,    52,    53,    51,    50,    23,    49,
       0,     0,     0,     4,    14,    54,     0,    33,    35,    37,
      39,    41,    43,    45,     0,     0,    28,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,    47,    48,    16,
      26,    32,    34,    36,    38,    40,    42,    44,    46,     0,
      16,    29,     0,    16,    27,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -44,   -44,   -44,    53,   -44,   -44,   -43,
     -23,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -19,   -44,   -44,   -44,   -44,   -44,   -44,   -44,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,    15,     3,     9,    10,    11,    14,    23,
      24,    25,    26,    27,    41,    80,    28,    69,    83,    29,
      42,    38,    60,    61,    62,    63,    64,    65,    66,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      44,    40,    43,    18,    19,    20,    18,    19,    20,    21,
      81,     1,    21,    46,     5,    49,    50,    51,    52,    53,
      54,    55,    57,    18,    19,    20,    79,     7,     8,    21,
      22,    84,    16,    22,     4,    67,    68,    82,    12,    71,
      85,    72,    73,    74,    75,    76,    77,    78,     7,     8,
      22,    13,    18,    19,    20,    30,    44,    86,    21,    44,
      54,    55,    44,    18,    19,    20,    58,    17,    31,    21,
      32,    45,     0,     0,    56,    34,    35,    36,    37,    22,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
      22,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,    70,    59,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,    31,     0,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    51,    52,    53,    54,    55
};

static const yytype_int8 yycheck[] =
{
      23,    20,     5,     6,     7,     8,     6,     7,     8,    12,
      10,     3,    12,    32,     0,    17,    18,    19,    20,    21,
      22,    23,    41,     6,     7,     8,    69,    28,    29,    12,
      33,    14,    33,    33,    33,    54,    55,    80,     4,    58,
      83,    60,    61,    62,    63,    64,    65,    66,    28,    29,
      33,    33,     6,     7,     8,    33,    79,    11,    12,    82,
      22,    23,    85,     6,     7,     8,    25,    14,    24,    12,
      26,    31,    -1,    -1,     9,    31,    32,    33,    34,    33,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      33,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    13,    27,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    24,    -1,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    19,    20,    21,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    36,    39,    33,     0,    37,    28,    29,    40,
      41,    42,     4,    33,    43,    38,    33,    41,     6,     7,
       8,    12,    33,    44,    45,    46,    47,    48,    51,    54,
      33,    24,    26,    30,    31,    32,    33,    34,    56,    64,
      56,    49,    55,     5,    45,    64,    56,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     9,    56,    25,    27,
      57,    58,    59,    60,    61,    62,    63,    56,    56,    52,
      13,    56,    56,    56,    56,    56,    56,    56,    56,    44,
      50,    10,    44,    53,    14,    44,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    37,    38,    36,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    44,    44,    44,    45,    45,    45,
      45,    45,    46,    47,    47,    49,    50,    48,    52,    53,
      51,    55,    54,    57,    56,    58,    56,    59,    56,    60,
      56,    61,    56,    62,    56,    63,    56,    56,    56,    56,
      64,    64,    64,    64,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     2,     0,     1,     3,     2,
       1,     1,     2,     1,     2,     1,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     0,     0,     7,     0,     0,
       9,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     3,     3,     1,
       1,     1,     1,     1,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* $@1: %empty  */
#line 77 "sintatico.y"
    { 
        // fprintf(yyout, "\tINPP\n");
        fprintf(yyout, ".text\n");
        fprintf(yyout, "\t.globl main\n");
        iniciaTabelaVariaveis();
    }
#line 1207 "sintatico.c"
    break;

  case 3: /* $@2: %empty  */
#line 84 "sintatico.y"
    {
        fprintf(yyout, "main:\tnop\n");
    }
#line 1215 "sintatico.c"
    break;

  case 4: /* programa: cabecalho $@1 variaveis T_INICIO $@2 lista_comandos T_FIMPROG  */
#line 88 "sintatico.y"
    {
        // int conta = desempilha(); 
        // fprintf(yyout, "\tDMEM\t%d\n\tFIMP\n", conta); 
        fprintf(yyout, "fim:\tnop\n");
        fprintf(yyout, "\tli $v0, 10\n");
        fprintf(yyout, "\tli $a0, 0\n");
        fprintf(yyout, "\tsyscall\n");
        dumpTabelaVar();
    }
#line 1229 "sintatico.c"
    break;

  case 10: /* tipo: T_INTEIRO  */
#line 115 "sintatico.y"
    {
        tipo = INT;
    }
#line 1237 "sintatico.c"
    break;

  case 11: /* tipo: T_LOGICO  */
#line 119 "sintatico.y"
    { 
        tipo = LOG; 
    }
#line 1245 "sintatico.c"
    break;

  case 12: /* lista_variaveis: lista_variaveis T_IDENTIF  */
#line 126 "sintatico.y"
    { 
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar++;
        elemTab.tip = tipo;
        insereSimbolo(elemTab);
        armazenaVar(elemTab, "1");
    }
#line 1257 "sintatico.c"
    break;

  case 13: /* lista_variaveis: T_IDENTIF  */
#line 134 "sintatico.y"
    { 
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar++;
        elemTab.tip = tipo;
        insereSimbolo(elemTab);
        armazenaVar(elemTab, "1");
    }
#line 1269 "sintatico.c"
    break;

  case 22: /* leitura: T_LEIA T_IDENTIF  */
#line 159 "sintatico.y"
    { 
        buscaSimbolo(atomo);
    //     fprintf(yyout, "\tLEIA\n"); 
        fprintf(yyout, "\tli $v0, 5\n");
        fprintf(yyout, "\tsyscall\n");
        fprintf(yyout, "\tsw $v0, %s\n", atomo); 
    }
#line 1281 "sintatico.c"
    break;

  case 23: /* escrita: T_ESCREVA expressao  */
#line 170 "sintatico.y"
    { 
        int tipo = desempilha();
        // fprintf(yyout, "\tESCR\n");
        fprintf(yyout, "\tli $v0, 1\n");
        fprintf(yyout, "\tsyscall\n"); 
        fprintf(yyout, "\tla $a0 %s\n", tabelaVariaveis[1].nome);
        fprintf(yyout, "\tli $v0, 4\n");
        fprintf(yyout, "\tsyscall\n");
    }
#line 1295 "sintatico.c"
    break;

  case 24: /* escrita: T_ESCREVA T_LITERAL  */
#line 180 "sintatico.y"
    {
        // fprintf(yyout, "\tESCR\t%s\n", atomo);
        
        // O armazenaVar retorna o nome da variável
        elemTab.tip = 2;


        fprintf(yyout, "\tla $a0 %s\n", armazenaVar(elemTab, atomo));
        fprintf(yyout, "\tli $v0, 4\n");
        fprintf(yyout, "\tsyscall\n");
    }
#line 1311 "sintatico.c"
    break;

  case 25: /* $@3: %empty  */
#line 195 "sintatico.y"
    {
        // fprintf(yyout, "L%d\tNADA\n", ++rotulo);
        fprintf(yyout, "L%d:\tnop\n", ++rotulo);
        empilha(rotulo);
    }
#line 1321 "sintatico.c"
    break;

  case 26: /* $@4: %empty  */
#line 201 "sintatico.y"
    {
        int tipo = desempilha();
        if(tipo != LOG)
            yyerror("Incompatibilidade de tipos na repeticao");
        // fprintf(yyout, "\tDSVF\tL%d\n", ++rotulo);
        fprintf(yyout, "\tbeqz $a0, L%d\n", ++rotulo);
        empilha(rotulo);
    }
#line 1334 "sintatico.c"
    break;

  case 27: /* repeticao: T_ENQUANTO $@3 expressao T_FACA $@4 lista_comandos T_FIMEQNTO  */
#line 210 "sintatico.y"
    {
            int y = desempilha();
            int x = desempilha();
            // fprintf(yyout, "\tDSVS\tL%d\nL%d\tNADA\n", x, y);
        fprintf(yyout, "\tj L%d\n", x);
        fprintf(yyout, "L%d:\tnop\n", y);
    }
#line 1346 "sintatico.c"
    break;

  case 28: /* $@5: %empty  */
#line 221 "sintatico.y"
    {
        int tipo = desempilha();
        if(tipo != LOG)
            yyerror("Incompatibilidade de tipos na selecao");
        // fprintf(yyout, "\tDSVF\tL%d\n", ++rotulo);
        fprintf(yyout, "\tbeqz $a0, L%d\n", ++rotulo);
        empilha(rotulo);
    }
#line 1359 "sintatico.c"
    break;

  case 29: /* $@6: %empty  */
#line 229 "sintatico.y"
    {
        int x = desempilha();
        // fprintf(yyout, "\tDSVS\tL%d\nL%d\tNADA\n", ++rotulo, x);
        fprintf(yyout, "\tj L%d\n", ++rotulo);
        fprintf(yyout, "L%d:\tnop\n", x);
        empilha(rotulo);
    }
#line 1371 "sintatico.c"
    break;

  case 30: /* selecao: T_SE expressao T_ENTAO $@5 lista_comandos T_SENAO $@6 lista_comandos T_FIMSE  */
#line 237 "sintatico.y"
    {
        int x = desempilha();
        fprintf(yyout, "L%d:\tnop\n", x);
    }
#line 1380 "sintatico.c"
    break;

  case 31: /* $@7: %empty  */
#line 245 "sintatico.y"
    { 
        int pos = buscaSimbolo(atomo);
        empilha(pos);
    }
#line 1389 "sintatico.c"
    break;

  case 32: /* atribuicao: T_IDENTIF $@7 T_ATRIB expressao  */
#line 250 "sintatico.y"
    {
        int tipo = desempilha();
        int pos = desempilha();
        if(tipo != tabSimb[pos].tip)
            yyerror("Incompatibilidade de tipos");
        fprintf(yyout, "\tsw $a0, %s\n", tabSimb[pos].id);
    }
#line 1401 "sintatico.c"
    break;

  case 33: /* $@8: %empty  */
#line 261 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1410 "sintatico.c"
    break;

  case 34: /* expressao: expressao T_MAIS $@8 expressao  */
#line 266 "sintatico.y"
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n"); 
        fprintf(yyout, "\tadd $a0, $t1, $a0\n"); 
    }
#line 1421 "sintatico.c"
    break;

  case 35: /* $@9: %empty  */
#line 273 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1430 "sintatico.c"
    break;

  case 36: /* expressao: expressao T_MENOS $@9 expressao  */
#line 278 "sintatico.y"
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n"); 
        fprintf(yyout, "\tsub $a0, $t1, $a0\n"); 
    }
#line 1441 "sintatico.c"
    break;

  case 37: /* $@10: %empty  */
#line 285 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1450 "sintatico.c"
    break;

  case 38: /* expressao: expressao T_VEZES $@10 expressao  */
#line 290 "sintatico.y"
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n"); 
        fprintf(yyout, "\tmult $t1, $a0\n"); 
        fprintf(yyout, "\tmflo $a0\n"); 
    }
#line 1462 "sintatico.c"
    break;

  case 39: /* $@11: %empty  */
#line 298 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1471 "sintatico.c"
    break;

  case 40: /* expressao: expressao T_DIV $@11 expressao  */
#line 303 "sintatico.y"
    {
        testaTipo(INT, INT, INT); 
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n"); 
        fprintf(yyout, "\tdiv $t1 $a0\n"); 
        fprintf(yyout, "\tmflo $a0\n"); 
    }
#line 1483 "sintatico.c"
    break;

  case 41: /* $@12: %empty  */
#line 311 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1492 "sintatico.c"
    break;

  case 42: /* expressao: expressao T_MAIOR $@12 expressao  */
#line 316 "sintatico.y"
    {
        testaTipo(INT, INT, LOG);  
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n"); 
        fprintf(yyout, "\tslt $a0, $a0, $t1\n"); 
    }
#line 1503 "sintatico.c"
    break;

  case 43: /* $@13: %empty  */
#line 323 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1512 "sintatico.c"
    break;

  case 44: /* expressao: expressao T_MENOR $@13 expressao  */
#line 328 "sintatico.y"
    {
        testaTipo(INT, INT, LOG);   
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n"); 
        fprintf(yyout, "\tslt $a0, $t1, $a0\n"); 
    }
#line 1523 "sintatico.c"
    break;

  case 45: /* $@14: %empty  */
#line 335 "sintatico.y"
    {
        fprintf(yyout, "\tsw $a0 0($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp -4\n"); 
    }
#line 1532 "sintatico.c"
    break;

  case 46: /* expressao: expressao T_IGUAL $@14 expressao  */
#line 340 "sintatico.y"
    {
        testaTipo(INT, INT, LOG);   
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n");
        fprintf(yyout, "\tbeq $a0, $t1, L%d\n", ++rotulo);
        fprintf(yyout, "\tli $a0, 0\n"); 
        fprintf(yyout, "\tj L%d\n", ++rotulo);
        fprintf(yyout, "L%d:\tli $a0, 1\n", rotulo - 1);
        fprintf(yyout, "L%d:\tnop\n", rotulo);   
    }
#line 1547 "sintatico.c"
    break;

  case 47: /* expressao: expressao T_E expressao  */
#line 351 "sintatico.y"
    {
        testaTipo(LOG, LOG, LOG); 
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n");
        fprintf(yyout, "\tbeqz $a0, L%d\n", ++rotulo);
        fprintf(yyout, "\tbeqz $t1 L%d\n", rotulo);
        fprintf(yyout, "\tli $a0, 1\n"); 
        fprintf(yyout, "\tj L%d\n", ++rotulo);
        fprintf(yyout, "L%d:\tli $a0, 0\n", rotulo - 1);
        fprintf(yyout, "L%d:\tnop\n", rotulo);  
    }
#line 1563 "sintatico.c"
    break;

  case 48: /* expressao: expressao T_OU expressao  */
#line 363 "sintatico.y"
    {
        testaTipo(LOG, LOG, LOG); 
        fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        fprintf(yyout, "\taddiu $sp $sp 4\n");
        fprintf(yyout, "\tbnez $a0 L%d\n", ++rotulo);
        fprintf(yyout, "\tbnez $t1 L%d\n", rotulo);
        fprintf(yyout, "\tli $a0, 1\n"); 
        fprintf(yyout, "\tj L%d\n", ++rotulo);
        fprintf(yyout, "L%d:\tli $a0, 0\n", rotulo - 1);
        fprintf(yyout, "L%d:\tnop\n", rotulo); 
    }
#line 1579 "sintatico.c"
    break;

  case 50: /* termo: T_NUMERO  */
#line 379 "sintatico.y"
    { 
        fprintf(yyout, "\tli $a0 %s\n", atomo); 
        empilha(INT);

    }
#line 1589 "sintatico.c"
    break;

  case 51: /* termo: T_IDENTIF  */
#line 385 "sintatico.y"
    { 
        int pos = buscaSimbolo(atomo);
        fprintf(yyout, "\tlw $a0 %s\n", atomo); 
        empilha(tabSimb[pos].tip);
    }
#line 1599 "sintatico.c"
    break;

  case 52: /* termo: T_V  */
#line 391 "sintatico.y"
    { 
        fprintf(yyout, "\tlw $a0 1\n"); 
        empilha(LOG);
    }
#line 1608 "sintatico.c"
    break;

  case 53: /* termo: T_F  */
#line 396 "sintatico.y"
    {
        fprintf(yyout, "\tlw $a0 0\n");
        empilha(LOG);
    }
#line 1617 "sintatico.c"
    break;

  case 54: /* termo: T_NAO termo  */
#line 401 "sintatico.y"
    {
        int x = desempilha();
        if(x != LOG)
            yyerror("Incompatibilidade de tipos");
        // // fprintf(yyout, "\tNEGA\n");
        // fprintf(yyout, "\tlw $t1 4($sp)\n"); 
        // fprintf(yyout, "\taddiu $sp $sp 4\n");
        fprintf(yyout, "\tbeqz $a0, L%d\n", ++rotulo);
        fprintf(yyout, "\tli $a0, 0\n"); 
        fprintf(yyout, "\tj L%d\n", ++rotulo);
        fprintf(yyout, "L%d:\tli $a0, 1\n", rotulo - 1);
        fprintf(yyout, "L%d:\tnop\n", rotulo); 
        empilha(LOG);
    }
#line 1636 "sintatico.c"
    break;


#line 1640 "sintatico.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 421 "sintatico.y"


int main (int argc, char *argv[]) {
    char nameIn[30], nameOutMvs[30], nameOutMips[30],  *p;
    if(argc < 2) {
        printf("Use:\n\t%s <arquivo>[.simples]\n\n", argv[0]);
        return 10;
    }
    p = strstr(argv[1], ".simples");
    if(p) *p = '\0';
    
    // Definindo o caminho dos arquivos de entrada e saída



    strcpy(nameIn, argv[1]);
    strcpy(nameOutMvs, argv[1]);
    strcpy(nameOutMips, argv[1]);
    strcat(nameIn, ".simples");
    strcat(nameOutMvs, ".mvs");
    strcat(nameOutMips, ".asm");
    yyin = fopen(nameIn, "r");
    /* yyout = fopen(nameOutMvs, "w"); */
    yyout = fopen(nameOutMips, "w");
    if (!yyin) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    yyparse();
    return 0;
}
