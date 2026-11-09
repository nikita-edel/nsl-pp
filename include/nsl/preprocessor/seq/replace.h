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
# ifndef NSL_PREPROCESSOR_SEQ_REPLACE_H
# define NSL_PREPROCESSOR_SEQ_REPLACE_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/comparison/equal.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/seq/first_n.h"
# include "nsl/preprocessor/seq/rest_n.h"
# include "nsl/preprocessor/seq/size.h"
#
# /* N_PP_SEQ_REPLACE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_REPLACE(seq, i, elem) N_PP_SEQ_FIRST_N(i, seq) (elem) N_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# else
#    define N_PP_SEQ_REPLACE(seq, i, elem) N_PP_SEQ_REPLACE_I(seq, i, elem)
#    define N_PP_SEQ_REPLACE_I(seq, i, elem) N_PP_SEQ_FIRST_N(i, seq) (elem) N_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# endif
#
#    define N_PP_SEQ_REPLACE_DETAIL_REST_EMPTY(seq, i)
#    define N_PP_SEQ_REPLACE_DETAIL_REST_VALID(seq, i) N_PP_SEQ_REST_N(N_PP_INC(i), seq)
#    define N_PP_SEQ_REPLACE_DETAIL_REST(seq, i) \
        N_PP_IIF \
            ( \
            N_PP_EQUAL(i,N_PP_DEC(N_PP_SEQ_SIZE(seq))), \
            N_PP_SEQ_REPLACE_DETAIL_REST_EMPTY, \
            N_PP_SEQ_REPLACE_DETAIL_REST_VALID \
            ) \
        (seq, i) \
/**/
#
# endif
