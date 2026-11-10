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
# ifndef NSL_PREPROCESSOR_DETAIL_IS_NULLARY_H
# define NSL_PREPROCESSOR_DETAIL_IS_NULLARY_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/detail/check.h"
#
# /* N_PP_IS_NULLARY */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_IS_NULLARY(x) N_PP_CHECK(x, N_PP_IS_NULLARY_CHECK)
# else
#    define N_PP_IS_NULLARY(x) N_PP_IS_NULLARY_I(x)
#    define N_PP_IS_NULLARY_I(x) N_PP_CHECK(x, N_PP_IS_NULLARY_CHECK)
# endif
#
# define N_PP_IS_NULLARY_CHECK() 1
# define N_PP_CHECK_RESULT_N_PP_IS_NULLARY_CHECK 0, N_PP_NIL
#
# endif
