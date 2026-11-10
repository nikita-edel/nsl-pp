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
# ifndef NSL_PP_COMPARISON_EQUAL_H
# define NSL_PP_COMPARISON_EQUAL_H
#
# include "nsl/pp/comparison/not_equal.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/logical/compl.h"
#
# /* N_PP_EQUAL */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_EQUAL(x, y) N_PP_COMPL(N_PP_NOT_EQUAL(x, y))
# else
#    define N_PP_EQUAL(x, y) N_PP_EQUAL_I(x, y)
#    define N_PP_EQUAL_I(x, y) N_PP_COMPL(N_PP_NOT_EQUAL(x, y))
# endif
#
# /* N_PP_EQUAL_D */
#
# define N_PP_EQUAL_D(d, x, y) N_PP_EQUAL(x, y)
#
# endif
