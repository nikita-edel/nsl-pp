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
# ifndef NSL_PREPROCESSOR_LOGICAL_COMPL_H
# define NSL_PREPROCESSOR_LOGICAL_COMPL_H
#
# include "nsl/pp/config/config.h"
#
# /* N_PP_COMPL */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_COMPL(x) N_PP_COMPL_I(x)
# else
#    define N_PP_COMPL(x) N_PP_COMPL_OO((x))
#    define N_PP_COMPL_OO(par) N_PP_COMPL_I ## par
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_COMPL_I(x) N_PP_COMPL_ ## x
# else
#    define N_PP_COMPL_I(x) N_PP_COMPL_ID(N_PP_COMPL_ ## x)
#    define N_PP_COMPL_ID(id) id
# endif
#
# define N_PP_COMPL_0 1
# define N_PP_COMPL_1 0
#
# endif
