# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_ARRAY_REPLACE_H
# define NSL_PP_ARRAY_REPLACE_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/array/elem.h"
# include "nsl/pp/array/push_back.h"
# include "nsl/pp/comparison/not_equal.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/deduce_d.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_ARRAY_REPLACE */
#
# define N_PP_ARRAY_REPLACE(array, i, elem) N_PP_ARRAY_REPLACE_I(N_PP_DEDUCE_D(), array, i, elem)
# define N_PP_ARRAY_REPLACE_I(d, array, i, elem) N_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* N_PP_ARRAY_REPLACE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_REPLACE_D(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_REPLACE_P, N_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# else
#    define N_PP_ARRAY_REPLACE_D(d, array, i, elem) N_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
#    define N_PP_ARRAY_REPLACE_D_I(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_REPLACE_P, N_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
#
# define N_PP_ARRAY_REPLACE_P(d, state) N_PP_NOT_EQUAL(N_PP_TUPLE_ELEM(5, 0, state), N_PP_ARRAY_SIZE(N_PP_TUPLE_ELEM(5, 4, state)))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_REPLACE_O(d, state) N_PP_ARRAY_REPLACE_O_I state
# else
#    define N_PP_ARRAY_REPLACE_O(d, state) N_PP_ARRAY_REPLACE_O_I(N_PP_TUPLE_ELEM(5, 0, state), N_PP_TUPLE_ELEM(5, 1, state), N_PP_TUPLE_ELEM(5, 2, state), N_PP_TUPLE_ELEM(5, 3, state), N_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define N_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (N_PP_INC(n), i, elem, N_PP_ARRAY_PUSH_BACK(res, N_PP_IIF(N_PP_NOT_EQUAL(n, i), N_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# else
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/array/elem.h"
# include "nsl/pp/array/push_back.h"
# include "nsl/pp/comparison/not_equal.h"
# include "nsl/pp/control/deduce_d.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/control/while.h"
# if N_PP_LIMIT_TUPLE == 256
# include "nsl/pp/logical/not.h"
# endif
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_ARRAY_REPLACE */
#
# define N_PP_ARRAY_REPLACE(array, i, elem) N_PP_ARRAY_REPLACE_I(N_PP_DEDUCE_D(), array, i, elem)
# define N_PP_ARRAY_REPLACE_I(d, array, i, elem) N_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* N_PP_ARRAY_REPLACE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
# if N_PP_LIMIT_TUPLE == 256
#    define N_PP_ARRAY_REPLACE_D(d, array, i, elem) N_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, N_PP_NOT(i))
# else
#    define N_PP_ARRAY_REPLACE_D(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_REPLACE_P, N_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# else
#    define N_PP_ARRAY_REPLACE_D(d, array, i, elem) N_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
# if N_PP_LIMIT_TUPLE == 256
#    define N_PP_ARRAY_REPLACE_D_I(d, array, i, elem) N_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, N_PP_NOT(i))
# else
#    define N_PP_ARRAY_REPLACE_D_I(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_REPLACE_P, N_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# endif
#
# if N_PP_LIMIT_TUPLE == 256
# define N_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, zero) \
         N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_REPLACE_P, N_PP_ARRAY_REPLACE_O, \
         (1, i, elem, N_PP_IIF(zero,(1, (elem)),(1, (N_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define N_PP_ARRAY_REPLACE_P(d, state) N_PP_NOT_EQUAL(N_PP_TUPLE_ELEM(5, 0, state), N_PP_ARRAY_SIZE(N_PP_TUPLE_ELEM(5, 4, state)))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_REPLACE_O(d, state) N_PP_ARRAY_REPLACE_O_I state
# else
#    define N_PP_ARRAY_REPLACE_O(d, state) N_PP_ARRAY_REPLACE_O_I(N_PP_TUPLE_ELEM(5, 0, state), N_PP_TUPLE_ELEM(5, 1, state), N_PP_TUPLE_ELEM(5, 2, state), N_PP_TUPLE_ELEM(5, 3, state), N_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define N_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (N_PP_INC(n), i, elem, N_PP_ARRAY_PUSH_BACK(res, N_PP_IIF(N_PP_NOT_EQUAL(n, i), N_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# endif
#
# endif
