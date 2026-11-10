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
# ifndef NSL_PREPROCESSOR_ARRAY_TO_TUPLE_H
# define NSL_PREPROCESSOR_ARRAY_TO_TUPLE_H
#
# include "nsl/pp/array/data.h"
# include "nsl/pp/array/size.h"
# include "nsl/pp/control/if.h"
#
# /* N_PP_ARRAY_TO_TUPLE */
#
#    define N_PP_ARRAY_TO_TUPLE(array) \
        N_PP_IF \
            ( \
            N_PP_ARRAY_SIZE(array), \
            N_PP_ARRAY_DATA, \
            N_PP_ARRAY_TO_TUPLE_EMPTY \
            ) \
        (array) \
/**/
#    define N_PP_ARRAY_TO_TUPLE_EMPTY(array)
#
# endif
