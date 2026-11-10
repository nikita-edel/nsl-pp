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
# ifndef NSL_PP_FACILITIES_EXPAND_H
# define NSL_PP_FACILITIES_EXPAND_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC() && ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_DMC()
#    define N_PP_EXPAND(x) N_PP_EXPAND_I(x)
# else
#    define N_PP_EXPAND(x) N_PP_EXPAND_OO((x))
#    define N_PP_EXPAND_OO(par) N_PP_EXPAND_I ## par
# endif
#
# define N_PP_EXPAND_I(x) x
#
# endif
