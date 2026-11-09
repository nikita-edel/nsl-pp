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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITNOR_H
# define NSL_PREPROCESSOR_LOGICAL_BITNOR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_BITNOR */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_BITNOR(x, y) N_PP_BITNOR_I(x, y)
# else
#    define N_PP_BITNOR(x, y) N_PP_BITNOR_OO((x, y))
#    define N_PP_BITNOR_OO(par) N_PP_BITNOR_I ## par
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_BITNOR_I(x, y) N_PP_BITNOR_ ## x ## y
# else
#    define N_PP_BITNOR_I(x, y) N_PP_BITNOR_ID(N_PP_BITNOR_ ## x ## y)
#    define N_PP_BITNOR_ID(id) id
# endif
#
# define N_PP_BITNOR_00 1
# define N_PP_BITNOR_01 0
# define N_PP_BITNOR_10 0
# define N_PP_BITNOR_11 0
#
# endif
