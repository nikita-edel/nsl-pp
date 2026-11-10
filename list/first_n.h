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
# ifndef NSL_PP_LIST_FIRST_N_H
# define NSL_PP_LIST_FIRST_N_H
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/list/reverse.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_LIST_FIRST_N */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FIRST_N(count, list) N_PP_LIST_REVERSE(N_PP_TUPLE_ELEM(3, 2, N_PP_WHILE(N_PP_LIST_FIRST_N_P, N_PP_LIST_FIRST_N_O, (count, list, N_PP_NIL))))
# else
#    define N_PP_LIST_FIRST_N(count, list) N_PP_LIST_FIRST_N_I(count, list)
#    define N_PP_LIST_FIRST_N_I(count, list) N_PP_LIST_REVERSE(N_PP_TUPLE_ELEM(3, 2, N_PP_WHILE(N_PP_LIST_FIRST_N_P, N_PP_LIST_FIRST_N_O, (count, list, N_PP_NIL))))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FIRST_N_P(d, data) N_PP_TUPLE_ELEM(3, 0, data)
# else
#    define N_PP_LIST_FIRST_N_P(d, data) N_PP_LIST_FIRST_N_P_I data
#    define N_PP_LIST_FIRST_N_P_I(c, l, nl) c
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_LIST_FIRST_N_O(d, data) N_PP_LIST_FIRST_N_O_D data
# else
#    define N_PP_LIST_FIRST_N_O(d, data) N_PP_LIST_FIRST_N_O_D(N_PP_TUPLE_ELEM(3, 0, data), N_PP_TUPLE_ELEM(3, 1, data), N_PP_TUPLE_ELEM(3, 2, data))
# endif
#
# define N_PP_LIST_FIRST_N_O_D(c, l, nl) (N_PP_DEC(c), N_PP_LIST_REST(l), (N_PP_LIST_FIRST(l), nl))
#
# /* N_PP_LIST_FIRST_N_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FIRST_N_D(d, count, list) N_PP_LIST_REVERSE_D(d, N_PP_TUPLE_ELEM(3, 2, N_PP_WHILE_ ## d(N_PP_LIST_FIRST_N_P, N_PP_LIST_FIRST_N_O, (count, list, N_PP_NIL))))
# else
#    define N_PP_LIST_FIRST_N_D(d, count, list) N_PP_LIST_FIRST_N_D_I(d, count, list)
#    define N_PP_LIST_FIRST_N_D_I(d, count, list) N_PP_LIST_REVERSE_D(d, N_PP_TUPLE_ELEM(3, 2, N_PP_WHILE_ ## d(N_PP_LIST_FIRST_N_P, N_PP_LIST_FIRST_N_O, (count, list, N_PP_NIL))))
# endif
#
# endif
