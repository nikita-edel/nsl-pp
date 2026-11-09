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
# ifndef NSL_PREPROCESSOR_ARRAY_REVERSE_H
# define NSL_PREPROCESSOR_ARRAY_REVERSE_H
#
# include "nsl/preprocessor/array/data.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/tuple/reverse.h"
#
# /* N_PP_ARRAY_REVERSE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_REVERSE(array) (N_PP_ARRAY_SIZE(array), N_PP_TUPLE_REVERSE(N_PP_ARRAY_SIZE(array), N_PP_ARRAY_DATA(array)))
# else
#    define N_PP_ARRAY_REVERSE(array) N_PP_ARRAY_REVERSE_I(array)
#    define N_PP_ARRAY_REVERSE_I(array) (N_PP_ARRAY_SIZE(array), N_PP_TUPLE_REVERSE(N_PP_ARRAY_SIZE(array), N_PP_ARRAY_DATA(array)))
# endif
#
# endif
