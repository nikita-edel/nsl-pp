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
# ifndef NSL_PREPROCESSOR_SEQ_REST_N_H
# define NSL_PREPROCESSOR_SEQ_REST_N_H
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/comparison/not_equal.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/facilities/identity.h"
# include "nsl/pp/logical/bitand.h"
# include "nsl/pp/seq/detail/is_empty.h"
# include "nsl/pp/seq/detail/split.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_SEQ_REST_N */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_REST_N(n, seq) N_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, N_PP_SEQ_DETAIL_EMPTY_SIZE(seq))
# else
#    define N_PP_SEQ_REST_N(n, seq) N_PP_SEQ_REST_N_I(n, seq)
#    define N_PP_SEQ_REST_N_I(n, seq) N_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, N_PP_SEQ_DETAIL_EMPTY_SIZE(seq))
# endif
#
#    define N_PP_SEQ_REST_N_DETAIL_EXEC_NO_MATCH(n, seq)
#    define N_PP_SEQ_REST_N_DETAIL_EXEC_MATCH(n, seq) \
            N_PP_TUPLE_ELEM(2, 1, N_PP_SEQ_SPLIT(N_PP_INC(n), N_PP_IDENTITY( (nil) seq )))() \
/**/
#    define N_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, size) \
        N_PP_IIF \
            ( \
            N_PP_BITAND \
                ( \
                N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size), \
                N_PP_NOT_EQUAL(n,size) \
                ), \
            N_PP_SEQ_REST_N_DETAIL_EXEC_MATCH, \
            N_PP_SEQ_REST_N_DETAIL_EXEC_NO_MATCH \
            ) \
        (n, seq)  \
/**/
#
# endif
