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
# ifndef NSL_PREPROCESSOR_ARITHMETIC_DETAIL_DIV_BASE_H
# define NSL_PREPROCESSOR_ARITHMETIC_DETAIL_DIV_BASE_H
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/arithmetic/sub.h"
# include "nsl/preprocessor/comparison/less_equal.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* N_PP_DIV_BASE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_DIV_BASE(x, y) N_PP_WHILE(N_PP_DIV_BASE_P, N_PP_DIV_BASE_O, (0, x, y))
# else
#    define N_PP_DIV_BASE(x, y) N_PP_DIV_BASE_I(x, y)
#    define N_PP_DIV_BASE_I(x, y) N_PP_WHILE(N_PP_DIV_BASE_P, N_PP_DIV_BASE_O, (0, x, y))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_DIV_BASE_P(d, rxy) N_PP_DIV_BASE_P_IM(d, N_PP_TUPLE_REM_3 rxy)
#    define N_PP_DIV_BASE_P_IM(d, im) N_PP_DIV_BASE_P_I(d, im)
# else
#    define N_PP_DIV_BASE_P(d, rxy) N_PP_DIV_BASE_P_I(d, N_PP_TUPLE_ELEM(3, 0, rxy), N_PP_TUPLE_ELEM(3, 1, rxy), N_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define N_PP_DIV_BASE_P_I(d, r, x, y) N_PP_LESS_EQUAL_D(d, y, x)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_DIV_BASE_O(d, rxy) N_PP_DIV_BASE_O_IM(d, N_PP_TUPLE_REM_3 rxy)
#    define N_PP_DIV_BASE_O_IM(d, im) N_PP_DIV_BASE_O_I(d, im)
# else
#    define N_PP_DIV_BASE_O(d, rxy) N_PP_DIV_BASE_O_I(d, N_PP_TUPLE_ELEM(3, 0, rxy), N_PP_TUPLE_ELEM(3, 1, rxy), N_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define N_PP_DIV_BASE_O_I(d, r, x, y) (N_PP_INC(r), N_PP_SUB_D(d, x, y), y)
#
# /* N_PP_DIV_BASE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_DIV_BASE_D(d, x, y) N_PP_WHILE_ ## d(N_PP_DIV_BASE_P, N_PP_DIV_BASE_O, (0, x, y))
# else
#    define N_PP_DIV_BASE_D(d, x, y) N_PP_DIV_BASE_D_I(d, x, y)
#    define N_PP_DIV_BASE_D_I(d, x, y) N_PP_WHILE_ ## d(N_PP_DIV_BASE_P, N_PP_DIV_BASE_O, (0, x, y))
# endif
#
# endif
