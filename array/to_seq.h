# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_ARRAY_TO_SEQ_H
# define NSL_PP_ARRAY_TO_SEQ_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/array/size.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/tuple/to_seq.h"
#
# /* N_PP_ARRAY_TO_SEQ */
#
#    define N_PP_ARRAY_TO_SEQ(array) \
        N_PP_IF \
            ( \
            N_PP_ARRAY_SIZE(array), \
            N_PP_ARRAY_TO_SEQ_DO, \
            N_PP_ARRAY_TO_SEQ_EMPTY \
            ) \
        (array) \
/**/
#    define N_PP_ARRAY_TO_SEQ_EMPTY(array)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_ARRAY_TO_SEQ_DO(array) N_PP_ARRAY_TO_SEQ_I(N_PP_TUPLE_TO_SEQ, array)
#    define N_PP_ARRAY_TO_SEQ_I(m, args) N_PP_ARRAY_TO_SEQ_II(m, args)
#    define N_PP_ARRAY_TO_SEQ_II(m, args) N_PP_CAT(m ## args,)
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_ARRAY_TO_SEQ_DO(array) N_PP_ARRAY_TO_SEQ_I(array)
#    define N_PP_ARRAY_TO_SEQ_I(array) N_PP_TUPLE_TO_SEQ ## array
# else
#    define N_PP_ARRAY_TO_SEQ_DO(array) N_PP_TUPLE_TO_SEQ array
# endif
#
# endif
