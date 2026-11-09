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
# ifndef NSL_PREPROCESSOR_LIST_ENUM_H
# define NSL_PREPROCESSOR_LIST_ENUM_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/list/for_each_i.h"
# include "nsl/preprocessor/punctuation/comma_if.h"
# include "nsl/preprocessor/variadic/has_opt.h"
#
# /* N_PP_LIST_ENUM */
#
# if N_PP_VARIADIC_HAS_OPT()
#    if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#        define N_PP_LIST_ENUM_NOT_EMPTY(list) N_PP_LIST_FOR_EACH_I(N_PP_LIST_ENUM_O, N_PP_NIL, list)
#    else
#        define N_PP_LIST_ENUM_NOT_EMPTY(list) N_PP_LIST_ENUM_I(list)
#        define N_PP_LIST_ENUM_I(list) N_PP_LIST_FOR_EACH_I(N_PP_LIST_ENUM_O, N_PP_NIL, list)
#    endif
#    define N_PP_LIST_ENUM_EMPTY(list)
#    define N_PP_LIST_ENUM(list) N_PP_IIF(N_PP_LIST_IS_NIL(list),N_PP_LIST_ENUM_EMPTY,N_PP_LIST_ENUM_NOT_EMPTY)(list)
# elif ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_ENUM(list) N_PP_LIST_FOR_EACH_I(N_PP_LIST_ENUM_O, N_PP_NIL, list)
# else
#    define N_PP_LIST_ENUM(list) N_PP_LIST_ENUM_I(list)
#    define N_PP_LIST_ENUM_I(list) N_PP_LIST_FOR_EACH_I(N_PP_LIST_ENUM_O, N_PP_NIL, list)
# endif
#
# define N_PP_LIST_ENUM_O(r, _, i, elem) N_PP_COMMA_IF(i) elem
#
# /* N_PP_LIST_ENUM_R */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_ENUM_R(r, list) N_PP_LIST_FOR_EACH_I_R(r, N_PP_LIST_ENUM_O, N_PP_NIL, list)
# else
#    define N_PP_LIST_ENUM_R(r, list) N_PP_LIST_ENUM_R_I(r, list)
#    define N_PP_LIST_ENUM_R_I(r, list) N_PP_LIST_FOR_EACH_I_R(r, N_PP_LIST_ENUM_O, N_PP_NIL, list)
# endif
#
# endif
