# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  *
#  * See http://www.boost.org for most recent version.
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# ifndef NSL_PP_LIST_ADT_H
# define NSL_PP_LIST_ADT_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/detail/is_binary.h"
# include "nsl/pp/logical/compl.h"
# include "nsl/pp/tuple/eat.h"
#
# /* N_PP_LIST_CONS */
#
# define N_PP_LIST_CONS(head, tail) (head, tail)
#
# /* N_PP_LIST_NIL */
#
# define N_PP_LIST_NIL N_PP_NIL
#
# /* N_PP_LIST_FIRST */
#
# define N_PP_LIST_FIRST(list) N_PP_LIST_FIRST_D(list)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_LIST_FIRST_D(list) N_PP_LIST_FIRST_I list
# else
#    define N_PP_LIST_FIRST_D(list) N_PP_LIST_FIRST_I ## list
# endif
#
# define N_PP_LIST_FIRST_I(head, tail) head
#
# /* N_PP_LIST_REST */
#
# define N_PP_LIST_REST(list) N_PP_LIST_REST_D(list)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_LIST_REST_D(list) N_PP_LIST_REST_I list
# else
#    define N_PP_LIST_REST_D(list) N_PP_LIST_REST_I ## list
# endif
#
# define N_PP_LIST_REST_I(head, tail) tail
#
# /* N_PP_LIST_IS_CONS */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_BCC()
#    define N_PP_LIST_IS_CONS(list) N_PP_LIST_IS_CONS_D(list)
#    define N_PP_LIST_IS_CONS_D(list) N_PP_LIST_IS_CONS_ ## list
#    define N_PP_LIST_IS_CONS_(head, tail) 1
#    define N_PP_LIST_IS_CONS_N_PP_NIL 0
# else
#    define N_PP_LIST_IS_CONS(list) N_PP_IS_BINARY(list)
# endif
#
# /* N_PP_LIST_IS_NIL */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_BCC()
#    define N_PP_LIST_IS_NIL(list) N_PP_COMPL(N_PP_IS_BINARY(list))
# else
#    define N_PP_LIST_IS_NIL(list) N_PP_COMPL(N_PP_LIST_IS_CONS(list))
# endif
#
# endif
