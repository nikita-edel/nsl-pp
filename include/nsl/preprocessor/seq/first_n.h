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
# ifndef NSL_PREPROCESSOR_SEQ_FIRST_N_H
# define NSL_PREPROCESSOR_SEQ_FIRST_N_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/seq/detail/split.h"
# include "nsl/preprocessor/tuple/eat.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* N_PP_SEQ_FIRST_N */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FIRST_N(n, seq) N_PP_IF(n, N_PP_TUPLE_ELEM, N_PP_TUPLE_EAT_3)(2, 0, N_PP_SEQ_SPLIT(n, seq (nil)))
# else
#    define N_PP_SEQ_FIRST_N(n, seq) N_PP_SEQ_FIRST_N_I(n, seq)
#    define N_PP_SEQ_FIRST_N_I(n, seq) N_PP_IF(n, N_PP_TUPLE_ELEM, N_PP_TUPLE_EAT_3)(2, 0, N_PP_SEQ_SPLIT(n, seq (nil)))
# endif
#
# endif
