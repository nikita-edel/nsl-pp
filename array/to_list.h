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
# ifndef NSL_PREPROCESSOR_ARRAY_TO_LIST_H
# define NSL_PREPROCESSOR_ARRAY_TO_LIST_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/tuple/to_list.h"
#
# /* N_PP_ARRAY_TO_LIST */
#
#    define N_PP_ARRAY_TO_LIST(array) \
        N_PP_IF \
            ( \
            N_PP_ARRAY_SIZE(array), \
            N_PP_ARRAY_TO_LIST_DO, \
            N_PP_ARRAY_TO_LIST_EMPTY \
            ) \
        (array) \
/**/
#
#    define N_PP_ARRAY_TO_LIST_EMPTY(array) N_PP_NIL
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_ARRAY_TO_LIST_DO(array) N_PP_ARRAY_TO_LIST_I(N_PP_TUPLE_TO_LIST, array)
#    define N_PP_ARRAY_TO_LIST_I(m, args) N_PP_ARRAY_TO_LIST_II(m, args)
#    define N_PP_ARRAY_TO_LIST_II(m, args) N_PP_CAT(m ## args,)
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_ARRAY_TO_LIST_DO(array) N_PP_ARRAY_TO_LIST_I(array)
#    define N_PP_ARRAY_TO_LIST_I(array) N_PP_TUPLE_TO_LIST ## array
# else
#    define N_PP_ARRAY_TO_LIST_DO(array) N_PP_TUPLE_TO_LIST array
# endif
#
# endif
