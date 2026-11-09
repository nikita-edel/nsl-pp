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
# ifndef NSL_PREPROCESSOR_SEQ_CAT_H
# define NSL_PREPROCESSOR_SEQ_CAT_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/seq/fold_left.h"
# include "nsl/preprocessor/seq/seq.h"
# include "nsl/preprocessor/seq/size.h"
# include "nsl/preprocessor/tuple/eat.h"
#
# /* N_PP_SEQ_CAT */
#
# define N_PP_SEQ_CAT(seq) \
    N_PP_IF( \
        N_PP_DEC(N_PP_SEQ_SIZE(seq)), \
        N_PP_SEQ_CAT_I, \
        N_PP_SEQ_HEAD \
    )(seq) \
    /**/
# define N_PP_SEQ_CAT_I(seq) N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_CAT_O, N_PP_SEQ_HEAD(seq), N_PP_SEQ_TAIL(seq))
#
# define N_PP_SEQ_CAT_O(s, st, elem) N_PP_SEQ_CAT_O_I(st, elem)
# define N_PP_SEQ_CAT_O_I(a, b) a ## b
#
# /* N_PP_SEQ_CAT_S */
#
# define N_PP_SEQ_CAT_S(s, seq) \
    N_PP_IF( \
        N_PP_DEC(N_PP_SEQ_SIZE(seq)), \
        N_PP_SEQ_CAT_S_I_A, \
        N_PP_SEQ_CAT_S_I_B \
    )(s, seq) \
    /**/
# define N_PP_SEQ_CAT_S_I_A(s, seq) N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_CAT_O, N_PP_SEQ_HEAD(seq), N_PP_SEQ_TAIL(seq))
# define N_PP_SEQ_CAT_S_I_B(s, seq) N_PP_SEQ_HEAD(seq)
#
# endif
