# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_FOR_EACH_I_H
# define NSL_PREPROCESSOR_SEQ_FOR_EACH_I_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/repetition/for.h"
# include "nsl/preprocessor/seq/seq.h"
# include "nsl/preprocessor/seq/size.h"
# include "nsl/preprocessor/seq/detail/is_empty.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* N_PP_SEQ_FOR_EACH_I */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FOR_EACH_I(macro, data, seq) N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK(macro, data, seq)
# else
#    define N_PP_SEQ_FOR_EACH_I(macro, data, seq) N_PP_SEQ_FOR_EACH_I_I(macro, data, seq)
#    define N_PP_SEQ_FOR_EACH_I_I(macro, data, seq) N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK(macro, data, seq)
# endif
#
#    define N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EXEC(macro, data, seq) N_PP_FOR((macro, data, seq, 0, N_PP_SEQ_SIZE(seq)), N_PP_SEQ_FOR_EACH_I_P, N_PP_SEQ_FOR_EACH_I_O, N_PP_SEQ_FOR_EACH_I_M)
#    define N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EMPTY(macro, data, seq)
#
#    define N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK(macro, data, seq) \
        N_PP_IIF \
            ( \
            N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EXEC, \
            N_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EMPTY \
            ) \
        (macro, data, seq) \
/**/
#
# define N_PP_SEQ_FOR_EACH_I_P(r, x) N_PP_TUPLE_ELEM(5, 4, x)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_FOR_EACH_I_O(r, x) N_PP_SEQ_FOR_EACH_I_O_I x
# else
#    define N_PP_SEQ_FOR_EACH_I_O(r, x) N_PP_SEQ_FOR_EACH_I_O_I(N_PP_TUPLE_ELEM(5, 0, x), N_PP_TUPLE_ELEM(5, 1, x), N_PP_TUPLE_ELEM(5, 2, x), N_PP_TUPLE_ELEM(5, 3, x), N_PP_TUPLE_ELEM(5, 4, x))
# endif
#
# define N_PP_SEQ_FOR_EACH_I_O_I(macro, data, seq, i, sz) \
    N_PP_SEQ_FOR_EACH_I_O_I_DEC(macro, data, seq, i, N_PP_DEC(sz)) \
/**/
# define N_PP_SEQ_FOR_EACH_I_O_I_DEC(macro, data, seq, i, sz) \
    ( \
    macro, \
    data, \
    N_PP_IF \
        ( \
        sz, \
        N_PP_SEQ_FOR_EACH_I_O_I_TAIL, \
        N_PP_SEQ_FOR_EACH_I_O_I_NIL \
        ) \
    (seq), \
    N_PP_INC(i), \
    sz \
    ) \
/**/
# define N_PP_SEQ_FOR_EACH_I_O_I_TAIL(seq) N_PP_SEQ_TAIL(seq)
# define N_PP_SEQ_FOR_EACH_I_O_I_NIL(seq) N_PP_NIL
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_FOR_EACH_I_M(r, x) N_PP_SEQ_FOR_EACH_I_M_IM(r, N_PP_TUPLE_REM_5 x)
#    define N_PP_SEQ_FOR_EACH_I_M_IM(r, im) N_PP_SEQ_FOR_EACH_I_M_I(r, im)
# else
#    define N_PP_SEQ_FOR_EACH_I_M(r, x) N_PP_SEQ_FOR_EACH_I_M_I(r, N_PP_TUPLE_ELEM(5, 0, x), N_PP_TUPLE_ELEM(5, 1, x), N_PP_TUPLE_ELEM(5, 2, x), N_PP_TUPLE_ELEM(5, 3, x), N_PP_TUPLE_ELEM(5, 4, x))
# endif
#
# define N_PP_SEQ_FOR_EACH_I_M_I(r, macro, data, seq, i, sz) macro(r, data, i, N_PP_SEQ_HEAD(seq))
#
# /* N_PP_SEQ_FOR_EACH_I_R */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FOR_EACH_I_R(r, macro, data, seq) N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK(r, macro, data, seq)
# else
#    define N_PP_SEQ_FOR_EACH_I_R(r, macro, data, seq) N_PP_SEQ_FOR_EACH_I_R_I(r, macro, data, seq)
#    define N_PP_SEQ_FOR_EACH_I_R_I(r, macro, data, seq) N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK(r, macro, data, seq)
# endif
#
#    define N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EXEC(r, macro, data, seq) N_PP_FOR_ ## r((macro, data, seq, 0, N_PP_SEQ_SIZE(seq)), N_PP_SEQ_FOR_EACH_I_P, N_PP_SEQ_FOR_EACH_I_O, N_PP_SEQ_FOR_EACH_I_M)
#    define N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EMPTY(r, macro, data, seq)
#
#    define N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK(r, macro, data, seq) \
        N_PP_IIF \
            ( \
            N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EXEC, \
            N_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EMPTY \
            ) \
        (r, macro, data, seq) \
/**/
#
# endif
