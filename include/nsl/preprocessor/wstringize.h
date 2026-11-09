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
# ifndef NSL_PREPROCESSOR_WSTR_H
# define NSL_PREPROCESSOR_WSTR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_WSTR */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_WSTR(text) N_PP_WSTR_I(text)
# else
#    define N_PP_WSTR(text) N_PP_WSTR_OO((text))
#    define N_PP_WSTR_OO(par) N_PP_WSTR_I ## par
# endif
#
# define N_PP_WSTR_I(...) N_PP_WSTR_II(#__VA_ARGS__)
# define N_PP_WSTR_II(str) L ## str
#
# endif
