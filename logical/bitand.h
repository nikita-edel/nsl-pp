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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITAND_H
# define NSL_PREPROCESSOR_LOGICAL_BITAND_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_BITAND */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_BITAND(x, y) N_PP_BITAND_I(x, y)
# else
#    define N_PP_BITAND(x, y) N_PP_BITAND_OO((x, y))
#    define N_PP_BITAND_OO(par) N_PP_BITAND_I ## par
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_BITAND_I(x, y) N_PP_BITAND_ ## x ## y
# else
#    define N_PP_BITAND_I(x, y) N_PP_BITAND_ID(N_PP_BITAND_ ## x ## y)
#    define N_PP_BITAND_ID(res) res
# endif
#
# define N_PP_BITAND_00 0
# define N_PP_BITAND_01 0
# define N_PP_BITAND_10 0
# define N_PP_BITAND_11 1
#
# endif
