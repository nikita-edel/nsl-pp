# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_STR_H
# define NSL_PP_STR_H
#
# include "nsl/pp/config/config.h"
#
# /* N_PP_STR */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_STR(text) N_PP_STR_A((text))
#    define N_PP_STR_A(arg) N_PP_STR_I arg
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_STR(text) N_PP_STR_OO((text))
#    define N_PP_STR_OO(par) N_PP_STR_I ## par
# else
#    define N_PP_STR(text) N_PP_STR_I(text)
# endif
#
# define N_PP_STR_I(...) #__VA_ARGS__
#
# endif
