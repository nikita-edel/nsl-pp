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
# ifndef NSL_PP_DETAIL_IS_BINARY_H
# define NSL_PP_DETAIL_IS_BINARY_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/detail/check.h"
#
# /* N_PP_IS_BINARY */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_IS_BINARY(x) N_PP_CHECK(x, N_PP_IS_BINARY_CHECK)
# else
#    define N_PP_IS_BINARY(x) N_PP_IS_BINARY_I(x)
#    define N_PP_IS_BINARY_I(x) N_PP_CHECK(x, N_PP_IS_BINARY_CHECK)
# endif
#
# define N_PP_IS_BINARY_CHECK(a, b) 1
# define N_PP_CHECK_RESULT_N_PP_IS_BINARY_CHECK 0, N_PP_NIL
#
# endif
