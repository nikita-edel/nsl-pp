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
# ifndef NSL_PREPROCESSOR_ARRAY_SIZE_H
# define NSL_PREPROCESSOR_ARRAY_SIZE_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* N_PP_ARRAY_SIZE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_SIZE(array) N_PP_TUPLE_ELEM(2, 0, array)
# else
#    define N_PP_ARRAY_SIZE(array) N_PP_ARRAY_SIZE_I(array)
#    define N_PP_ARRAY_SIZE_I(array) N_PP_ARRAY_SIZE_II array
#    define N_PP_ARRAY_SIZE_II(size, data) size
# endif
#
# endif
