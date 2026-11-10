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
# ifndef NSL_PREPROCESSOR_LIST_CAT_H
# define NSL_PREPROCESSOR_LIST_CAT_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/list/fold_left.h"
#
# /* N_PP_LIST_CAT */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_CAT(list) N_PP_LIST_FOLD_LEFT(N_PP_LIST_CAT_O, N_PP_LIST_FIRST(list), N_PP_LIST_REST(list))
# else
#    define N_PP_LIST_CAT(list) N_PP_LIST_CAT_I(list)
#    define N_PP_LIST_CAT_I(list) N_PP_LIST_FOLD_LEFT(N_PP_LIST_CAT_O, N_PP_LIST_FIRST(list), N_PP_LIST_REST(list))
# endif
#
# define N_PP_LIST_CAT_O(d, s, x) N_PP_CAT(s, x)
#
# /* N_PP_LIST_CAT_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_CAT_D(d, list) N_PP_LIST_FOLD_LEFT_ ## d(N_PP_LIST_CAT_O, N_PP_LIST_FIRST(list), N_PP_LIST_REST(list))
# else
#    define N_PP_LIST_CAT_D(d, list) N_PP_LIST_CAT_D_I(d, list)
#    define N_PP_LIST_CAT_D_I(d, list) N_PP_LIST_FOLD_LEFT_ ## d(N_PP_LIST_CAT_O, N_PP_LIST_FIRST(list), N_PP_LIST_REST(list))
# endif
#
# endif
