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
# ifndef NSL_PREPROCESSOR_SEQ_FOR_EACH_H
# define NSL_PREPROCESSOR_SEQ_FOR_EACH_H
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/repetition/for.h"
# include "nsl/pp/seq/seq.h"
# include "nsl/pp/seq/size.h"
# include "nsl/pp/seq/detail/is_empty.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_SEQ_FOR_EACH */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FOR_EACH(macro, data, seq) N_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq)
# else
#    define N_PP_SEQ_FOR_EACH(macro, data, seq) N_PP_SEQ_FOR_EACH_D(macro, data, seq)
#    define N_PP_SEQ_FOR_EACH_D(macro, data, seq) N_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq)
# endif
#
#    define N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC(macro, data, seq) N_PP_FOR((macro, data, seq, N_PP_SEQ_SIZE(seq)), N_PP_SEQ_FOR_EACH_P, N_PP_SEQ_FOR_EACH_O, N_PP_SEQ_FOR_EACH_M)
#    define N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY(macro, data, seq)
#
#    define N_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq) \
        N_PP_IIF \
            ( \
            N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC, \
            N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY \
            ) \
        (macro, data, seq) \
/**/
#
# define N_PP_SEQ_FOR_EACH_P(r, x) N_PP_TUPLE_ELEM(4, 3, x)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_FOR_EACH_O(r, x) N_PP_SEQ_FOR_EACH_O_I x
# else
#    define N_PP_SEQ_FOR_EACH_O(r, x) N_PP_SEQ_FOR_EACH_O_I(N_PP_TUPLE_ELEM(4, 0, x), N_PP_TUPLE_ELEM(4, 1, x), N_PP_TUPLE_ELEM(4, 2, x), N_PP_TUPLE_ELEM(4, 3, x))
# endif
#
# define N_PP_SEQ_FOR_EACH_O_I(macro, data, seq, sz) \
    N_PP_SEQ_FOR_EACH_O_I_DEC(macro, data, seq, N_PP_DEC(sz)) \
/**/
# define N_PP_SEQ_FOR_EACH_O_I_DEC(macro, data, seq, sz) \
    ( \
    macro, \
    data, \
    N_PP_IF \
        ( \
        sz, \
        N_PP_SEQ_FOR_EACH_O_I_TAIL, \
        N_PP_SEQ_FOR_EACH_O_I_NIL \
        ) \
    (seq), \
    sz \
    ) \
/**/
# define N_PP_SEQ_FOR_EACH_O_I_TAIL(seq) N_PP_SEQ_TAIL(seq)
# define N_PP_SEQ_FOR_EACH_O_I_NIL(seq) N_PP_NIL
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_FOR_EACH_M(r, x) N_PP_SEQ_FOR_EACH_M_IM(r, N_PP_TUPLE_REM_4 x)
#    define N_PP_SEQ_FOR_EACH_M_IM(r, im) N_PP_SEQ_FOR_EACH_M_I(r, im)
# else
#    define N_PP_SEQ_FOR_EACH_M(r, x) N_PP_SEQ_FOR_EACH_M_I(r, N_PP_TUPLE_ELEM(4, 0, x), N_PP_TUPLE_ELEM(4, 1, x), N_PP_TUPLE_ELEM(4, 2, x), N_PP_TUPLE_ELEM(4, 3, x))
# endif
#
# define N_PP_SEQ_FOR_EACH_M_I(r, macro, data, seq, sz) macro(r, data, N_PP_SEQ_HEAD(seq))
#
# /* N_PP_SEQ_FOR_EACH_R */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FOR_EACH_R(r, macro, data, seq) N_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq)
# else
#    define N_PP_SEQ_FOR_EACH_R(r, macro, data, seq) N_PP_SEQ_FOR_EACH_R_I(r, macro, data, seq)
#    define N_PP_SEQ_FOR_EACH_R_I(r, macro, data, seq) N_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq)
# endif
#
#    define N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC_R(r, macro, data, seq) N_PP_FOR_ ## r((macro, data, seq, N_PP_SEQ_SIZE(seq)), N_PP_SEQ_FOR_EACH_P, N_PP_SEQ_FOR_EACH_O, N_PP_SEQ_FOR_EACH_M)
#    define N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY_R(r, macro, data, seq)
#
#    define N_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq) \
        N_PP_IIF \
            ( \
            N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC_R, \
            N_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY_R \
            ) \
        (r, macro, data, seq) \
/**/
#
# endif
