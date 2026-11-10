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
# ifndef NSL_PP_LIST_REVERSE_H
# define NSL_PP_LIST_REVERSE_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/list/fold_left.h"
#
# /* N_PP_LIST_REVERSE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REVERSE(list) N_PP_LIST_FOLD_LEFT(N_PP_LIST_REVERSE_O, N_PP_NIL, list)
# else
#    define N_PP_LIST_REVERSE(list) N_PP_LIST_REVERSE_I(list)
#    define N_PP_LIST_REVERSE_I(list) N_PP_LIST_FOLD_LEFT(N_PP_LIST_REVERSE_O, N_PP_NIL, list)
# endif
#
# define N_PP_LIST_REVERSE_O(d, s, x) (x, s)
#
# /* N_PP_LIST_REVERSE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REVERSE_D(d, list) N_PP_LIST_FOLD_LEFT_ ## d(N_PP_LIST_REVERSE_O, N_PP_NIL, list)
# else
#    define N_PP_LIST_REVERSE_D(d, list) N_PP_LIST_REVERSE_D_I(d, list)
#    define N_PP_LIST_REVERSE_D_I(d, list) N_PP_LIST_FOLD_LEFT_ ## d(N_PP_LIST_REVERSE_O, N_PP_NIL, list)
# endif
#
# else
#
# include "nsl/pp/control/iif.h"
# include "nsl/pp/facilities/identity.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/list/fold_left.h"
#
# /* N_PP_LIST_REVERSE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REVERSE(list) N_PP_IIF(N_PP_LIST_IS_CONS(list),N_PP_LIST_REVERSE_CONS,N_PP_IDENTITY_N(N_PP_NIL,1))(list)
# else
#    define N_PP_LIST_REVERSE(list) N_PP_LIST_REVERSE_I(list)
#    define N_PP_LIST_REVERSE_I(list) N_PP_IIF(N_PP_LIST_IS_CONS(list),N_PP_LIST_REVERSE_CONS,N_PP_IDENTITY_N(N_PP_NIL,1))(list)
# endif
#
# define N_PP_LIST_REVERSE_O(d, s, x) (x, s)
#
# /* N_PP_LIST_REVERSE_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_REVERSE_D(d, list) N_PP_IIF(N_PP_LIST_IS_CONS(list),N_PP_LIST_REVERSE_CONS_D,N_PP_IDENTITY_N(N_PP_NIL,2))(d,list)
# else
#    define N_PP_LIST_REVERSE_D(d, list) N_PP_LIST_REVERSE_D_I(d, list)
#    define N_PP_LIST_REVERSE_D_I(d, list) N_PP_IIF(N_PP_LIST_IS_CONS(list),N_PP_LIST_REVERSE_CONS_D,N_PP_IDENTITY_N(N_PP_NIL,2))(d,list)
# endif
#
# define N_PP_LIST_REVERSE_CONS(list) N_PP_LIST_FOLD_LEFT(N_PP_LIST_REVERSE_O, (N_PP_LIST_FIRST(list),N_PP_NIL), N_PP_LIST_REST(list))
# define N_PP_LIST_REVERSE_CONS_D(d, list) N_PP_LIST_FOLD_LEFT_ ## d(N_PP_LIST_REVERSE_O, (N_PP_LIST_FIRST(list),N_PP_NIL), N_PP_LIST_REST(list))
#
# endif
#
# endif
