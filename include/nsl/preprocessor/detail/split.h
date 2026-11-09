# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# ifndef NSL_PREPROCESSOR_DETAIL_SPLIT_H
# define NSL_PREPROCESSOR_DETAIL_SPLIT_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_SPLIT */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SPLIT(n, im) N_PP_SPLIT_I((n, im))
#    define N_PP_SPLIT_I(par) N_PP_SPLIT_II ## par
#    define N_PP_SPLIT_II(n, a, b) N_PP_SPLIT_ ## n(a, b)
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_SPLIT(n, im) N_PP_SPLIT_I(n((im)))
#    define N_PP_SPLIT_I(n) N_PP_SPLIT_ID(N_PP_SPLIT_II_ ## n)
#    define N_PP_SPLIT_II_0(s) N_PP_SPLIT_ID(N_PP_SPLIT_0 s)
#    define N_PP_SPLIT_II_1(s) N_PP_SPLIT_ID(N_PP_SPLIT_1 s)
#    define N_PP_SPLIT_ID(id) id
# else
#    define N_PP_SPLIT(n, im) N_PP_SPLIT_I(n)(im)
#    define N_PP_SPLIT_I(n) N_PP_SPLIT_ ## n
# endif
#
# define N_PP_SPLIT_0(a, b) a
# define N_PP_SPLIT_1(a, b) b
#
# endif
