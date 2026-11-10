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
# ifndef NSL_PP_COMPARISON_GREATER_H
# define NSL_PP_COMPARISON_GREATER_H
#
# include "nsl/pp/comparison/less.h"
# include "nsl/pp/config/config.h"
#
# /* N_PP_GREATER */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_GREATER(x, y) N_PP_LESS(y, x)
# else
#    define N_PP_GREATER(x, y) N_PP_GREATER_I(x, y)
#    define N_PP_GREATER_I(x, y) N_PP_LESS(y, x)
# endif
#
# /* N_PP_GREATER_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_GREATER_D(d, x, y) N_PP_LESS_D(d, y, x)
# else
#    define N_PP_GREATER_D(d, x, y) N_PP_GREATER_D_I(d, x, y)
#    define N_PP_GREATER_D_I(d, x, y) N_PP_LESS_D(d, y, x)
# endif
#
# endif
