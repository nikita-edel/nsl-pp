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
# ifndef NSL_PREPROCESSOR_SELECTION_MAX_H
# define NSL_PREPROCESSOR_SELECTION_MAX_H
#
# include "nsl/pp/comparison/less_equal.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/iif.h"
#
# /* N_PP_MAX */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MAX(x, y) N_PP_IIF(N_PP_LESS_EQUAL(x, y), y, x)
# else
#    define N_PP_MAX(x, y) N_PP_MAX_I(x, y)
#    define N_PP_MAX_I(x, y) N_PP_IIF(N_PP_LESS_EQUAL(x, y), y, x)
# endif
#
# /* N_PP_MAX_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MAX_D(d, x, y) N_PP_IIF(N_PP_LESS_EQUAL_D(d, x, y), y, x)
# else
#    define N_PP_MAX_D(d, x, y) N_PP_MAX_D_I(d, x, y)
#    define N_PP_MAX_D_I(d, x, y) N_PP_IIF(N_PP_LESS_EQUAL_D(d, x, y), y, x)
# endif
#
# endif
