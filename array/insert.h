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
# ifndef NSL_PREPROCESSOR_ARRAY_INSERT_H
# define NSL_PREPROCESSOR_ARRAY_INSERT_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/array/elem.h"
# include "nsl/preprocessor/array/push_back.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/control/deduce_d.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* N_PP_ARRAY_INSERT */
#
# define N_PP_ARRAY_INSERT(array, i, elem) N_PP_ARRAY_INSERT_I(N_PP_DEDUCE_D(), array, i, elem)
# define N_PP_ARRAY_INSERT_I(d, array, i, elem) N_PP_ARRAY_INSERT_D(d, array, i, elem)
#
# /* N_PP_ARRAY_INSERT_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_INSERT_D(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_INSERT_P, N_PP_ARRAY_INSERT_O, (0, i, elem, (0, ()), array)))
# else
#    define N_PP_ARRAY_INSERT_D(d, array, i, elem) N_PP_ARRAY_INSERT_D_I(d, array, i, elem)
#    define N_PP_ARRAY_INSERT_D_I(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_INSERT_P, N_PP_ARRAY_INSERT_O, (0, i, elem, (0, ()), array)))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_INSERT_P(d, state) N_PP_ARRAY_INSERT_P_I state
# else
#    define N_PP_ARRAY_INSERT_P(d, state) N_PP_ARRAY_INSERT_P_I(nil, nil, nil, N_PP_TUPLE_ELEM(5, 3, state), N_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define N_PP_ARRAY_INSERT_P_I(_i, _ii, _iii, res, arr) N_PP_NOT_EQUAL(N_PP_ARRAY_SIZE(res), N_PP_INC(N_PP_ARRAY_SIZE(arr)))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_INSERT_O(d, state) N_PP_ARRAY_INSERT_O_I state
# else
#    define N_PP_ARRAY_INSERT_O(d, state) N_PP_ARRAY_INSERT_O_I(N_PP_TUPLE_ELEM(5, 0, state), N_PP_TUPLE_ELEM(5, 1, state), N_PP_TUPLE_ELEM(5, 2, state), N_PP_TUPLE_ELEM(5, 3, state), N_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define N_PP_ARRAY_INSERT_O_I(n, i, elem, res, arr) (N_PP_IIF(N_PP_NOT_EQUAL(N_PP_ARRAY_SIZE(res), i), N_PP_INC(n), n), i, elem, N_PP_ARRAY_PUSH_BACK(res, N_PP_IIF(N_PP_NOT_EQUAL(N_PP_ARRAY_SIZE(res), i), N_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# else
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/array/elem.h"
# include "nsl/preprocessor/array/push_back.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/config/limits.h"
# include "nsl/preprocessor/control/deduce_d.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# if N_PP_LIMIT_TUPLE == 256
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/logical/not.h"
# endif
# include "nsl/preprocessor/tuple/elem.h"
#
# /* N_PP_ARRAY_INSERT */
#
# define N_PP_ARRAY_INSERT(array, i, elem) N_PP_ARRAY_INSERT_I(N_PP_DEDUCE_D(), array, i, elem)
# define N_PP_ARRAY_INSERT_I(d, array, i, elem) N_PP_ARRAY_INSERT_D(d, array, i, elem)
#
# /* N_PP_ARRAY_INSERT_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
# if N_PP_LIMIT_TUPLE == 256
#    define N_PP_ARRAY_INSERT_D(d, array, i, elem) \
            N_PP_IIF(N_PP_NOT(N_PP_ARRAY_SIZE(array)),N_PP_IDENTITY_N((1,(elem)),5),N_PP_ARRAY_INSERT_ZERO_D)(d, array, i, elem, N_PP_NOT(i))
# else
#    define N_PP_ARRAY_INSERT_D(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_INSERT_P, N_PP_ARRAY_INSERT_O, (0, i, elem, (0, ()), array)))
# endif
# else
#    define N_PP_ARRAY_INSERT_D(d, array, i, elem) N_PP_ARRAY_INSERT_D_I(d, array, i, elem)
# if N_PP_LIMIT_TUPLE == 256
#    define N_PP_ARRAY_INSERT_D_I(d, array, i, elem) \
            N_PP_IIF(N_PP_NOT(N_PP_ARRAY_SIZE(array)),N_PP_IDENTITY_N((1,(elem)),5),N_PP_ARRAY_INSERT_ZERO_D)(d, array, i, elem, N_PP_NOT(i))
# else
#    define N_PP_ARRAY_INSERT_D_I(d, array, i, elem) N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_INSERT_P, N_PP_ARRAY_INSERT_O, (0, i, elem, (0, ()), array)))
# endif
# endif
#
# if N_PP_LIMIT_TUPLE == 256
# define N_PP_ARRAY_INSERT_ZERO_D(d, array, i, elem, zero) \
         N_PP_TUPLE_ELEM(5, 3, N_PP_WHILE_ ## d(N_PP_ARRAY_INSERT_P, N_PP_ARRAY_INSERT_O, \
         (1, i, elem, N_PP_IIF( zero, ( 2 , ( elem , N_PP_ARRAY_ELEM(0,array) ) ) , ( 1 , ( N_PP_ARRAY_ELEM(0,array) ) ) ), array)))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_INSERT_P(d, state) N_PP_ARRAY_INSERT_P_I state
# else
#    define N_PP_ARRAY_INSERT_P(d, state) N_PP_ARRAY_INSERT_P_I(nil, nil, nil, N_PP_TUPLE_ELEM(5, 3, state), N_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define N_PP_ARRAY_INSERT_P_I(_i, _ii, _iii, res, arr) N_PP_NOT_EQUAL(N_PP_ARRAY_SIZE(res), N_PP_INC(N_PP_ARRAY_SIZE(arr)))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ARRAY_INSERT_O(d, state) N_PP_ARRAY_INSERT_O_I state
# else
#    define N_PP_ARRAY_INSERT_O(d, state) N_PP_ARRAY_INSERT_O_I(N_PP_TUPLE_ELEM(5, 0, state), N_PP_TUPLE_ELEM(5, 1, state), N_PP_TUPLE_ELEM(5, 2, state), N_PP_TUPLE_ELEM(5, 3, state), N_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define N_PP_ARRAY_INSERT_O_I(n, i, elem, res, arr) (N_PP_IIF(N_PP_NOT_EQUAL(N_PP_ARRAY_SIZE(res), i), N_PP_INC(n), n), i, elem, N_PP_ARRAY_PUSH_BACK(res, N_PP_IIF(N_PP_NOT_EQUAL(N_PP_ARRAY_SIZE(res), i), N_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# endif
#
# endif
