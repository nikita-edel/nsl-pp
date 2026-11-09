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
# ifndef NSL_PREPROCESSOR_SELECTION_MIN_H
# define NSL_PREPROCESSOR_SELECTION_MIN_H
#
# include "nsl/preprocessor/comparison/less_equal.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/iif.h"
#
# /* N_PP_MIN */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MIN(x, y) N_PP_IIF(N_PP_LESS_EQUAL(y, x), y, x)
# else
#    define N_PP_MIN(x, y) N_PP_MIN_I(x, y)
#    define N_PP_MIN_I(x, y) N_PP_IIF(N_PP_LESS_EQUAL(y, x), y, x)
# endif
#
# /* N_PP_MIN_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MIN_D(d, x, y) N_PP_IIF(N_PP_LESS_EQUAL_D(d, y, x), y, x)
# else
#    define N_PP_MIN_D(d, x, y) N_PP_MIN_D_I(d, x, y)
#    define N_PP_MIN_D_I(d, x, y) N_PP_IIF(N_PP_LESS_EQUAL_D(d, y, x), y, x)
# endif
#
# endif
