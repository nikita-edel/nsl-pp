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
# ifndef NSL_PREPROCESSOR_DETAIL_IS_UNARY_H
# define NSL_PREPROCESSOR_DETAIL_IS_UNARY_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/detail/check.h"
#
# /* N_PP_IS_UNARY */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_IS_UNARY(x) N_PP_CHECK(x, N_PP_IS_UNARY_CHECK)
# else
#    define N_PP_IS_UNARY(x) N_PP_IS_UNARY_I(x)
#    define N_PP_IS_UNARY_I(x) N_PP_CHECK(x, N_PP_IS_UNARY_CHECK)
# endif
#
# define N_PP_IS_UNARY_CHECK(a) 1
# define N_PP_CHECK_RESULT_N_PP_IS_UNARY_CHECK 0, N_PP_NIL
#
# endif
