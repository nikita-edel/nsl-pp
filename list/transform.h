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
# ifndef NSL_PREPROCESSOR_LIST_TRANSFORM_H
# define NSL_PREPROCESSOR_LIST_TRANSFORM_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/list/fold_right.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* N_PP_LIST_TRANSFORM */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_TRANSFORM(op, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT(N_PP_LIST_TRANSFORM_O, (op, data, N_PP_NIL), list))
# else
#    define N_PP_LIST_TRANSFORM(op, data, list) N_PP_LIST_TRANSFORM_I(op, data, list)
#    define N_PP_LIST_TRANSFORM_I(op, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT(N_PP_LIST_TRANSFORM_O, (op, data, N_PP_NIL), list))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_TRANSFORM_O(d, odr, elem) N_PP_LIST_TRANSFORM_O_D(d, N_PP_TUPLE_ELEM(3, 0, odr), N_PP_TUPLE_ELEM(3, 1, odr), N_PP_TUPLE_ELEM(3, 2, odr), elem)
# else
#    define N_PP_LIST_TRANSFORM_O(d, odr, elem) N_PP_LIST_TRANSFORM_O_I(d, N_PP_TUPLE_REM_3 odr, elem)
#    define N_PP_LIST_TRANSFORM_O_I(d, im, elem) N_PP_LIST_TRANSFORM_O_D(d, im, elem)
# endif
#
# define N_PP_LIST_TRANSFORM_O_D(d, op, data, res, elem) (op, data, (op(d, data, elem), res))
#
# /* N_PP_LIST_TRANSFORM_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_TRANSFORM_D(d, op, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT_ ## d(N_PP_LIST_TRANSFORM_O, (op, data, N_PP_NIL), list))
# else
#    define N_PP_LIST_TRANSFORM_D(d, op, data, list) N_PP_LIST_TRANSFORM_D_I(d, op, data, list)
#    define N_PP_LIST_TRANSFORM_D_I(d, op, data, list) N_PP_TUPLE_ELEM(3, 2, N_PP_LIST_FOLD_RIGHT_ ## d(N_PP_LIST_TRANSFORM_O, (op, data, N_PP_NIL), list))
# endif
#
# endif
