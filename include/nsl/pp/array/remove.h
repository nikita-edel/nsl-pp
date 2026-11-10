# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_ARRAY_REMOVE_H
# define NSL_PP_ARRAY_REMOVE_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/array/elem.h"
# include "nsl/pp/array/push_back.h"
# include "nsl/pp/array/size.h"
# include "nsl/pp/comparison/not_equal.h"
# include "nsl/pp/control/deduce_d.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/tuple/eat.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_ARRAY_REMOVE */
#
# define N_PP_ARRAY_REMOVE(array, i) N_PP_ARRAY_REMOVE_I(N_PP_DEDUCE_D(), array, i)
# define N_PP_ARRAY_REMOVE_I(d, array, i) N_PP_ARRAY_REMOVE_D(d, array, i)
#
# /* N_PP_ARRAY_REMOVE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_REMOVE_D(d, array, i) N_PP_TUPLE_ELEM(4, 2, N_PP_WHILE_ ## d(N_PP_ARRAY_REMOVE_P, N_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# else
#    define N_PP_ARRAY_REMOVE_D(d, array, i) N_PP_ARRAY_REMOVE_D_I(d, array, i)
#    define N_PP_ARRAY_REMOVE_D_I(d, array, i) N_PP_TUPLE_ELEM(4, 2, N_PP_WHILE_ ## d(N_PP_ARRAY_REMOVE_P, N_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
#
# define N_PP_ARRAY_REMOVE_P(d, st) N_PP_NOT_EQUAL(N_PP_TUPLE_ELEM(4, 0, st), N_PP_ARRAY_SIZE(N_PP_TUPLE_ELEM(4, 3, st)))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_REMOVE_O(d, st) N_PP_ARRAY_REMOVE_O_I st
# else
#    define N_PP_ARRAY_REMOVE_O(d, st) N_PP_ARRAY_REMOVE_O_I(N_PP_TUPLE_ELEM(4, 0, st), N_PP_TUPLE_ELEM(4, 1, st), N_PP_TUPLE_ELEM(4, 2, st), N_PP_TUPLE_ELEM(4, 3, st))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_DMC()
#    define N_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (N_PP_INC(n), i, N_PP_IIF(N_PP_NOT_EQUAL(n, i), N_PP_ARRAY_PUSH_BACK, res N_PP_TUPLE_EAT_2)(res, N_PP_ARRAY_ELEM(n, arr)), arr)
# else
#    define N_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (N_PP_INC(n), i, N_PP_IIF(N_PP_NOT_EQUAL(n, i), N_PP_ARRAY_PUSH_BACK, N_PP_TUPLE_ELEM_2_0)(res, N_PP_ARRAY_ELEM(n, arr)), arr)
# endif
#
# else
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/array/elem.h"
# include "nsl/pp/array/push_back.h"
# include "nsl/pp/array/size.h"
# include "nsl/pp/comparison/not_equal.h"
# include "nsl/pp/control/deduce_d.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/control/while.h"
# if N_PP_LIMIT_TUPLE == 256
# include "nsl/pp/logical/not.h"
# endif
# include "nsl/pp/tuple/eat.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_ARRAY_REMOVE */
#
# define N_PP_ARRAY_REMOVE(array, i) N_PP_ARRAY_REMOVE_I(N_PP_DEDUCE_D(), array, i)
# define N_PP_ARRAY_REMOVE_I(d, array, i) N_PP_ARRAY_REMOVE_D(d, array, i)
#
# /* N_PP_ARRAY_REMOVE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
# if N_PP_LIMIT_TUPLE == 256
#    define N_PP_ARRAY_REMOVE_D(d, array, i) N_PP_ARRAY_REMOVE_ZERO_D(d, array, i, N_PP_NOT(i))
# else
#    define N_PP_ARRAY_REMOVE_D(d, array, i) N_PP_TUPLE_ELEM(4, 2, N_PP_WHILE_ ## d(N_PP_ARRAY_REMOVE_P, N_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
# else
#    define N_PP_ARRAY_REMOVE_D(d, array, i) N_PP_ARRAY_REMOVE_D_I(d, array, i)
# if N_PP_LIMIT_TUPLE == 256
#    define N_PP_ARRAY_REMOVE_D_I(d, array, i) N_PP_ARRAY_REMOVE_ZERO_D(d, array, i, N_PP_NOT(i))
# else
#    define N_PP_ARRAY_REMOVE_D_I(d, array, i) N_PP_TUPLE_ELEM(4, 2, N_PP_WHILE_ ## d(N_PP_ARRAY_REMOVE_P, N_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
# endif
#
# if N_PP_LIMIT_TUPLE == 256
# define N_PP_ARRAY_REMOVE_ZERO_D(d, array, i, zero) \
         N_PP_TUPLE_ELEM(4, 2, N_PP_WHILE_ ## d(N_PP_ARRAY_REMOVE_P, N_PP_ARRAY_REMOVE_O, \
         (1, i, N_PP_IIF(zero,(0, ()),(1, (N_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define N_PP_ARRAY_REMOVE_P(d, st) N_PP_NOT_EQUAL(N_PP_TUPLE_ELEM(4, 0, st), N_PP_ARRAY_SIZE(N_PP_TUPLE_ELEM(4, 3, st)))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_REMOVE_O(d, st) N_PP_ARRAY_REMOVE_O_I st
# else
#    define N_PP_ARRAY_REMOVE_O(d, st) N_PP_ARRAY_REMOVE_O_I(N_PP_TUPLE_ELEM(4, 0, st), N_PP_TUPLE_ELEM(4, 1, st), N_PP_TUPLE_ELEM(4, 2, st), N_PP_TUPLE_ELEM(4, 3, st))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_DMC()
#    define N_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (N_PP_INC(n), i, N_PP_IIF(N_PP_NOT_EQUAL(n, i), N_PP_ARRAY_PUSH_BACK, res N_PP_TUPLE_EAT_2)(res, N_PP_ARRAY_ELEM(n, arr)), arr)
# else
#    define N_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (N_PP_INC(n), i, N_PP_IIF(N_PP_NOT_EQUAL(n, i), N_PP_ARRAY_PUSH_BACK, N_PP_TUPLE_ELEM_2_0)(res, N_PP_ARRAY_ELEM(n, arr)), arr)
# endif
#
# endif
#
# endif
