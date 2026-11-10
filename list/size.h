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
# ifndef NSL_PREPROCESSOR_LIST_SIZE_H
# define NSL_PREPROCESSOR_LIST_SIZE_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_LIST_SIZE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE(list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (0, list)))
# else
#    define N_PP_LIST_SIZE(list) N_PP_LIST_SIZE_I(list)
#    define N_PP_LIST_SIZE_I(list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (0, list)))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_P(d, rl) N_PP_LIST_IS_CONS(N_PP_TUPLE_ELEM(2, 1, rl))
# else
#    define N_PP_LIST_SIZE_P(d, rl) N_PP_LIST_SIZE_P_I(N_PP_TUPLE_REM_2 rl)
#    define N_PP_LIST_SIZE_P_I(im) N_PP_LIST_SIZE_P_II(im)
#    define N_PP_LIST_SIZE_P_II(r, l) N_PP_LIST_IS_CONS(l)
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_O(d, rl) (N_PP_INC(N_PP_TUPLE_ELEM(2, 0, rl)), N_PP_LIST_REST(N_PP_TUPLE_ELEM(2, 1, rl)))
# else
#    define N_PP_LIST_SIZE_O(d, rl) N_PP_LIST_SIZE_O_I(N_PP_TUPLE_REM_2 rl)
#    define N_PP_LIST_SIZE_O_I(im) N_PP_LIST_SIZE_O_II(im)
#    define N_PP_LIST_SIZE_O_II(r, l) (N_PP_INC(r), N_PP_LIST_REST(l))
# endif
#
# /* N_PP_LIST_SIZE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_D(d, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (0, list)))
# else
#    define N_PP_LIST_SIZE_D(d, list) N_PP_LIST_SIZE_D_I(d, list)
#    define N_PP_LIST_SIZE_D_I(d, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (0, list)))
# endif
#
# else
#
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/facilities/identity.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_LIST_SIZE */
#
#    define N_PP_LIST_SIZE(list) N_PP_IIF(N_PP_LIST_IS_CONS(list),N_PP_LIST_SIZE_S,N_PP_IDENTITY_N(0,1))(list)
#    define N_PP_LIST_SIZE_S(list) N_PP_LIST_SIZE_DO(N_PP_LIST_REST(list))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_DO(list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (1, list)))
# else
#    define N_PP_LIST_SIZE_DO(list) N_PP_LIST_SIZE_I(list)
#    define N_PP_LIST_SIZE_I(list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (1, list)))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_P(d, rl) N_PP_LIST_IS_CONS(N_PP_TUPLE_ELEM(2, 1, rl))
# else
#    define N_PP_LIST_SIZE_P(d, rl) N_PP_LIST_SIZE_P_I(N_PP_TUPLE_REM_2 rl)
#    define N_PP_LIST_SIZE_P_I(im) N_PP_LIST_SIZE_P_II(im)
#    define N_PP_LIST_SIZE_P_II(r, l) N_PP_LIST_IS_CONS(l)
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_O(d, rl) (N_PP_INC(N_PP_TUPLE_ELEM(2, 0, rl)), N_PP_LIST_REST(N_PP_TUPLE_ELEM(2, 1, rl)))
# else
#    define N_PP_LIST_SIZE_O(d, rl) N_PP_LIST_SIZE_O_I(N_PP_TUPLE_REM_2 rl)
#    define N_PP_LIST_SIZE_O_I(im) N_PP_LIST_SIZE_O_II(im)
#    define N_PP_LIST_SIZE_O_II(r, l) (N_PP_INC(r), N_PP_LIST_REST(l))
# endif
#
# /* N_PP_LIST_SIZE_D */
#
#    define N_PP_LIST_SIZE_D(d, list) N_PP_IIF(N_PP_LIST_IS_CONS(list),N_PP_LIST_SIZE_S_D,N_PP_IDENTITY_N(0,2))(d,list)
#    define N_PP_LIST_SIZE_S_D(d,list) N_PP_LIST_SIZE_DO_D(d,N_PP_LIST_REST(list))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_SIZE_DO_D(d, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (1, list)))
# else
#    define N_PP_LIST_SIZE_DO_D(d, list) N_PP_LIST_SIZE_D_I(d, list)
#    define N_PP_LIST_SIZE_D_I(d, list) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_LIST_SIZE_P, N_PP_LIST_SIZE_O, (1, list)))
# endif
#
# endif
#
# endif
