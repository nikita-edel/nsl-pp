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
# ifndef NSL_PREPROCESSOR_LIST_LIST_FOR_EACH_I_H
# define NSL_PREPROCESSOR_LIST_LIST_FOR_EACH_I_H
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/repetition/for.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* N_PP_LIST_FOR_EACH_I */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG() && ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_LIST_FOR_EACH_I(macro, data, list) N_PP_FOR((macro, data, list, 0), N_PP_LIST_FOR_EACH_I_P, N_PP_LIST_FOR_EACH_I_O, N_PP_LIST_FOR_EACH_I_M)
# else
#    define N_PP_LIST_FOR_EACH_I(macro, data, list) N_PP_LIST_FOR_EACH_I_I(macro, data, list)
#    define N_PP_LIST_FOR_EACH_I_I(macro, data, list) N_PP_FOR((macro, data, list, 0), N_PP_LIST_FOR_EACH_I_P, N_PP_LIST_FOR_EACH_I_O, N_PP_LIST_FOR_EACH_I_M)
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_LIST_FOR_EACH_I_P(r, x) N_PP_LIST_FOR_EACH_I_P_D x
#    define N_PP_LIST_FOR_EACH_I_P_D(m, d, l, i) N_PP_LIST_IS_CONS(l)
# else
#    define N_PP_LIST_FOR_EACH_I_P(r, x) N_PP_LIST_IS_CONS(N_PP_TUPLE_ELEM(4, 2, x))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_LIST_FOR_EACH_I_O(r, x) N_PP_LIST_FOR_EACH_I_O_D x
#    define N_PP_LIST_FOR_EACH_I_O_D(m, d, l, i) (m, d, N_PP_LIST_REST(l), N_PP_INC(i))
# else
#    define N_PP_LIST_FOR_EACH_I_O(r, x) (N_PP_TUPLE_ELEM(4, 0, x), N_PP_TUPLE_ELEM(4, 1, x), N_PP_LIST_REST(N_PP_TUPLE_ELEM(4, 2, x)), N_PP_INC(N_PP_TUPLE_ELEM(4, 3, x)))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FOR_EACH_I_M(r, x) N_PP_LIST_FOR_EACH_I_M_D(r, N_PP_TUPLE_ELEM(4, 0, x), N_PP_TUPLE_ELEM(4, 1, x), N_PP_TUPLE_ELEM(4, 2, x), N_PP_TUPLE_ELEM(4, 3, x))
# else
#    define N_PP_LIST_FOR_EACH_I_M(r, x) N_PP_LIST_FOR_EACH_I_M_I(r, N_PP_TUPLE_REM_4 x)
#    define N_PP_LIST_FOR_EACH_I_M_I(r, x_e) N_PP_LIST_FOR_EACH_I_M_D(r, x_e)
# endif
#
# define N_PP_LIST_FOR_EACH_I_M_D(r, m, d, l, i) m(r, d, i, N_PP_LIST_FIRST(l))
#
# /* N_PP_LIST_FOR_EACH_I_R */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FOR_EACH_I_R(r, macro, data, list) N_PP_FOR_ ## r((macro, data, list, 0), N_PP_LIST_FOR_EACH_I_P, N_PP_LIST_FOR_EACH_I_O, N_PP_LIST_FOR_EACH_I_M)
# else
#    define N_PP_LIST_FOR_EACH_I_R(r, macro, data, list) N_PP_LIST_FOR_EACH_I_R_I(r, macro, data, list)
#    define N_PP_LIST_FOR_EACH_I_R_I(r, macro, data, list) N_PP_FOR_ ## r((macro, data, list, 0), N_PP_LIST_FOR_EACH_I_P, N_PP_LIST_FOR_EACH_I_O, N_PP_LIST_FOR_EACH_I_M)
# endif
#
# endif
