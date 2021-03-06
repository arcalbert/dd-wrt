/* Generated by ./xlat/gen.sh from ./xlat/fib_rule_actions.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FR_ACT_UNSPEC) || (defined(HAVE_DECL_FR_ACT_UNSPEC) && HAVE_DECL_FR_ACT_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_UNSPEC) == (0), "FR_ACT_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_UNSPEC 0
#endif
#if defined(FR_ACT_TO_TBL) || (defined(HAVE_DECL_FR_ACT_TO_TBL) && HAVE_DECL_FR_ACT_TO_TBL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_TO_TBL) == (1), "FR_ACT_TO_TBL != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_TO_TBL 1
#endif
#if defined(FR_ACT_GOTO) || (defined(HAVE_DECL_FR_ACT_GOTO) && HAVE_DECL_FR_ACT_GOTO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_GOTO) == (2), "FR_ACT_GOTO != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_GOTO 2
#endif
#if defined(FR_ACT_NOP) || (defined(HAVE_DECL_FR_ACT_NOP) && HAVE_DECL_FR_ACT_NOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_NOP) == (3), "FR_ACT_NOP != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_NOP 3
#endif
#if defined(FR_ACT_RES3) || (defined(HAVE_DECL_FR_ACT_RES3) && HAVE_DECL_FR_ACT_RES3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_RES3) == (4), "FR_ACT_RES3 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_RES3 4
#endif
#if defined(FR_ACT_RES4) || (defined(HAVE_DECL_FR_ACT_RES4) && HAVE_DECL_FR_ACT_RES4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_RES4) == (5), "FR_ACT_RES4 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_RES4 5
#endif
#if defined(FR_ACT_BLACKHOLE) || (defined(HAVE_DECL_FR_ACT_BLACKHOLE) && HAVE_DECL_FR_ACT_BLACKHOLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_BLACKHOLE) == (6), "FR_ACT_BLACKHOLE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_BLACKHOLE 6
#endif
#if defined(FR_ACT_UNREACHABLE) || (defined(HAVE_DECL_FR_ACT_UNREACHABLE) && HAVE_DECL_FR_ACT_UNREACHABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_UNREACHABLE) == (7), "FR_ACT_UNREACHABLE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_UNREACHABLE 7
#endif
#if defined(FR_ACT_PROHIBIT) || (defined(HAVE_DECL_FR_ACT_PROHIBIT) && HAVE_DECL_FR_ACT_PROHIBIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FR_ACT_PROHIBIT) == (8), "FR_ACT_PROHIBIT != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FR_ACT_PROHIBIT 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fib_rule_actions in mpers mode

# else

static const struct xlat_data fib_rule_actions_xdata[] = {
 [FR_ACT_UNSPEC] = XLAT(FR_ACT_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (FR_ACT_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(FR_ACT_UNSPEC)
 [FR_ACT_TO_TBL] = XLAT(FR_ACT_TO_TBL),
 #define XLAT_VAL_1 ((unsigned) (FR_ACT_TO_TBL))
 #define XLAT_STR_1 STRINGIFY(FR_ACT_TO_TBL)
 [FR_ACT_GOTO] = XLAT(FR_ACT_GOTO),
 #define XLAT_VAL_2 ((unsigned) (FR_ACT_GOTO))
 #define XLAT_STR_2 STRINGIFY(FR_ACT_GOTO)
 [FR_ACT_NOP] = XLAT(FR_ACT_NOP),
 #define XLAT_VAL_3 ((unsigned) (FR_ACT_NOP))
 #define XLAT_STR_3 STRINGIFY(FR_ACT_NOP)
 [FR_ACT_RES3] = XLAT(FR_ACT_RES3),
 #define XLAT_VAL_4 ((unsigned) (FR_ACT_RES3))
 #define XLAT_STR_4 STRINGIFY(FR_ACT_RES3)
 [FR_ACT_RES4] = XLAT(FR_ACT_RES4),
 #define XLAT_VAL_5 ((unsigned) (FR_ACT_RES4))
 #define XLAT_STR_5 STRINGIFY(FR_ACT_RES4)
 [FR_ACT_BLACKHOLE] = XLAT(FR_ACT_BLACKHOLE),
 #define XLAT_VAL_6 ((unsigned) (FR_ACT_BLACKHOLE))
 #define XLAT_STR_6 STRINGIFY(FR_ACT_BLACKHOLE)
 [FR_ACT_UNREACHABLE] = XLAT(FR_ACT_UNREACHABLE),
 #define XLAT_VAL_7 ((unsigned) (FR_ACT_UNREACHABLE))
 #define XLAT_STR_7 STRINGIFY(FR_ACT_UNREACHABLE)
 [FR_ACT_PROHIBIT] = XLAT(FR_ACT_PROHIBIT),
 #define XLAT_VAL_8 ((unsigned) (FR_ACT_PROHIBIT))
 #define XLAT_STR_8 STRINGIFY(FR_ACT_PROHIBIT)
};
static
const struct xlat fib_rule_actions[1] = { {
 .data = fib_rule_actions_xdata,
 .size = ARRAY_SIZE(fib_rule_actions_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
