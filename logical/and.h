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
# ifndef NSL_PP_LOGICAL_AND_H
# define NSL_PP_LOGICAL_AND_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/logical/bool.h"
# include "nsl/pp/logical/bitand.h"
#
# /* N_PP_AND */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_AND(p, q) N_PP_BITAND(N_PP_BOOL(p), N_PP_BOOL(q))
# else
#    define N_PP_AND(p, q) N_PP_AND_I(p, q)
#    define N_PP_AND_I(p, q) N_PP_BITAND(N_PP_BOOL(p), N_PP_BOOL(q))
# endif
#
# endif
