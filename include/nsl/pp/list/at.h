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
# ifndef NSL_PP_LIST_AT_H
# define NSL_PP_LIST_AT_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/list/rest_n.h"
#
# /* N_PP_LIST_AT */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_AT(list, index) N_PP_LIST_FIRST(N_PP_LIST_REST_N(index, list))
# else
#    define N_PP_LIST_AT(list, index) N_PP_LIST_AT_I(list, index)
#    define N_PP_LIST_AT_I(list, index) N_PP_LIST_FIRST(N_PP_LIST_REST_N(index, list))
# endif
#
# /* N_PP_LIST_AT_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_AT_D(d, list, index) N_PP_LIST_FIRST(N_PP_LIST_REST_N_D(d, index, list))
# else
#    define N_PP_LIST_AT_D(d, list, index) N_PP_LIST_AT_D_I(d, list, index)
#    define N_PP_LIST_AT_D_I(d, list, index) N_PP_LIST_FIRST(N_PP_LIST_REST_N_D(d, index, list))
# endif
#
# endif
