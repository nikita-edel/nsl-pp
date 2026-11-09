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
# ifndef NSL_PREPROCESSOR_LIST_REST_N_H
# define NSL_PREPROCESSOR_LIST_REST_N_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* N_PP_LIST_REST_N */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REST_N(count, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_LIST_REST_N_P, N_PP_LIST_REST_N_O, (list, count)))
# else
#    define N_PP_LIST_REST_N(count, list) N_PP_LIST_REST_N_I(count, list)
#    define N_PP_LIST_REST_N_I(count, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_LIST_REST_N_P, N_PP_LIST_REST_N_O, (list, count)))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REST_N_P(d, lc) N_PP_TUPLE_ELEM(2, 1, lc)
# else
#    define N_PP_LIST_REST_N_P(d, lc) N_PP_LIST_REST_N_P_I lc
#    define N_PP_LIST_REST_N_P_I(list, count) count
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REST_N_O(d, lc) (N_PP_LIST_REST(N_PP_TUPLE_ELEM(2, 0, lc)), N_PP_DEC(N_PP_TUPLE_ELEM(2, 1, lc)))
# else
#    define N_PP_LIST_REST_N_O(d, lc) N_PP_LIST_REST_N_O_I lc
#    define N_PP_LIST_REST_N_O_I(list, count) (N_PP_LIST_REST(list), N_PP_DEC(count))
# endif
#
# /* N_PP_LIST_REST_N_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REST_N_D(d, count, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_LIST_REST_N_P, N_PP_LIST_REST_N_O, (list, count)))
# else
#    define N_PP_LIST_REST_N_D(d, count, list) N_PP_LIST_REST_N_D_I(d, count, list)
#    define N_PP_LIST_REST_N_D_I(d, count, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_LIST_REST_N_P, N_PP_LIST_REST_N_O, (list, count)))
# endif
#
# endif
