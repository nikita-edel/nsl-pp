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
# ifndef NSL_PREPROCESSOR_ARRAY_DATA_H
# define NSL_PREPROCESSOR_ARRAY_DATA_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_ARRAY_DATA */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_DATA(array) N_PP_TUPLE_ELEM(2, 1, array)
# else
#    define N_PP_ARRAY_DATA(array) N_PP_ARRAY_DATA_I(array)
#    define N_PP_ARRAY_DATA_I(array) N_PP_ARRAY_DATA_II array
#    define N_PP_ARRAY_DATA_II(size, data) data
# endif
#
# endif
