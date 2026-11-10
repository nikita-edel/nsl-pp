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
# ifndef NSL_PP_LIST_FILTER_H
# define NSL_PP_LIST_FILTER_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/list/fold_right.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_LIST_FILTER */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FILTER(pred, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT(N_PP_LIST_FILTER_O, (pred, data, N_PP_NIL), list))
# else
#    define N_PP_LIST_FILTER(pred, data, list) N_PP_LIST_FILTER_I(pred, data, list)
#    define N_PP_LIST_FILTER_I(pred, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT(N_PP_LIST_FILTER_O, (pred, data, N_PP_NIL), list))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FILTER_O(d, pdr, elem) N_PP_LIST_FILTER_O_D(d, N_PP_TUPLE_ELEM(3, 0, pdr), N_PP_TUPLE_ELEM(3, 1, pdr), N_PP_TUPLE_ELEM(3, 2, pdr), elem)
# else
#    define N_PP_LIST_FILTER_O(d, pdr, elem) N_PP_LIST_FILTER_O_I(d, N_PP_TUPLE_REM_3 pdr, elem)
#    define N_PP_LIST_FILTER_O_I(d, im, elem) N_PP_LIST_FILTER_O_D(d, im, elem)
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_DMC()
#    define N_PP_LIST_FILTER_O_D(d, pred, data, res, elem) (pred, data, N_PP_IF(pred(d, data, elem), (elem, res), res))
# else
#    define N_PP_LIST_FILTER_O_D(d, pred, data, res, elem) (pred, data, N_PP_IF(pred##(d, data, elem), (elem, res), res))
# endif
#
# /* N_PP_LIST_FILTER_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FILTER_D(d, pred, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT_ ## d(N_PP_LIST_FILTER_O, (pred, data, N_PP_NIL), list))
# else
#    define N_PP_LIST_FILTER_D(d, pred, data, list) N_PP_LIST_FILTER_D_I(d, pred, data, list)
#    define N_PP_LIST_FILTER_D_I(d, pred, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT_ ## d(N_PP_LIST_FILTER_O, (pred, data, N_PP_NIL), list))
# endif
#
# endif
