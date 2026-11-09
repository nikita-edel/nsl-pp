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
# ifndef NSL_PREPROCESSOR_LIST_TO_TUPLE_H
# define NSL_PREPROCESSOR_LIST_TO_TUPLE_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/list/enum.h"
# include "nsl/preprocessor/control/iif.h"
#
# /* N_PP_LIST_TO_TUPLE */
#
# define N_PP_LIST_TO_TUPLE(list) \
    N_PP_IIF \
        ( \
        N_PP_LIST_IS_NIL(list), \
        N_PP_LIST_TO_TUPLE_EMPTY, \
        N_PP_LIST_TO_TUPLE_DO \
        ) \
    (list) \
/**/
# define N_PP_LIST_TO_TUPLE_EMPTY(list)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_TO_TUPLE_DO(list) (N_PP_LIST_ENUM(list))
# else
#    define N_PP_LIST_TO_TUPLE_DO(list) N_PP_LIST_TO_TUPLE_I(list)
#    define N_PP_LIST_TO_TUPLE_I(list) (N_PP_LIST_ENUM(list))
# endif
#
# /* N_PP_LIST_TO_TUPLE_R */
#
# define N_PP_LIST_TO_TUPLE_R(r, list) \
    N_PP_IIF \
        ( \
        N_PP_LIST_IS_NIL(list), \
        N_PP_LIST_TO_TUPLE_R_EMPTY, \
        N_PP_LIST_TO_TUPLE_R_DO \
        ) \
    (r, list) \
/**/
# define N_PP_LIST_TO_TUPLE_R_EMPTY(r,list)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_TO_TUPLE_R_DO(r, list) (N_PP_LIST_ENUM_R(r, list))
# else
#    define N_PP_LIST_TO_TUPLE_R_DO(r, list) N_PP_LIST_TO_TUPLE_R_I(r, list)
#    define N_PP_LIST_TO_TUPLE_R_I(r, list) (N_PP_LIST_ENUM_R(r, list))
# endif
#
# endif
