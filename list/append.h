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
# ifndef NSL_PREPROCESSOR_LIST_APPEND_H
# define NSL_PREPROCESSOR_LIST_APPEND_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/list/fold_right.h"
#
# /* N_PP_LIST_APPEND */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_APPEND(a, b) N_PP_LIST_FOLD_RIGHT(N_PP_LIST_APPEND_O, b, a)
# else
#    define N_PP_LIST_APPEND(a, b) N_PP_LIST_APPEND_I(a, b)
#    define N_PP_LIST_APPEND_I(a, b) N_PP_LIST_FOLD_RIGHT(N_PP_LIST_APPEND_O, b, a)
# endif
#
# define N_PP_LIST_APPEND_O(d, s, x) (x, s)
#
# /* N_PP_LIST_APPEND_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_APPEND_D(d, a, b) N_PP_LIST_FOLD_RIGHT_ ## d(N_PP_LIST_APPEND_O, b, a)
# else
#    define N_PP_LIST_APPEND_D(d, a, b) N_PP_LIST_APPEND_D_I(d, a, b)
#    define N_PP_LIST_APPEND_D_I(d, a, b) N_PP_LIST_FOLD_RIGHT_ ## d(N_PP_LIST_APPEND_O, b, a)
# endif
#
# endif
