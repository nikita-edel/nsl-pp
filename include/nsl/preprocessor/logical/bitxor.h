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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITXOR_H
# define NSL_PREPROCESSOR_LOGICAL_BITXOR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_BITXOR */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_BITXOR(x, y) N_PP_BITXOR_I(x, y)
# else
#    define N_PP_BITXOR(x, y) N_PP_BITXOR_OO((x, y))
#    define N_PP_BITXOR_OO(par) N_PP_BITXOR_I ## par
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_BITXOR_I(x, y) N_PP_BITXOR_ ## x ## y
# else
#    define N_PP_BITXOR_I(x, y) N_PP_BITXOR_ID(N_PP_BITXOR_ ## x ## y)
#    define N_PP_BITXOR_ID(id) id
# endif
#
# define N_PP_BITXOR_00 0
# define N_PP_BITXOR_01 1
# define N_PP_BITXOR_10 1
# define N_PP_BITXOR_11 0
#
# endif
