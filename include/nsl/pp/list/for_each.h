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
# ifndef NSL_PREPROCESSOR_LIST_FOR_EACH_H
# define NSL_PREPROCESSOR_LIST_FOR_EACH_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/list/for_each_i.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_LIST_FOR_EACH */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FOR_EACH(macro, data, list) N_PP_LIST_FOR_EACH_I(N_PP_LIST_FOR_EACH_O, (macro, data), list)
# else
#    define N_PP_LIST_FOR_EACH(macro, data, list) N_PP_LIST_FOR_EACH_X(macro, data, list)
#    define N_PP_LIST_FOR_EACH_X(macro, data, list) N_PP_LIST_FOR_EACH_I(N_PP_LIST_FOR_EACH_O, (macro, data), list)
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FOR_EACH_O(r, md, i, elem) N_PP_LIST_FOR_EACH_O_D(r, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md), elem)
# else
#    define N_PP_LIST_FOR_EACH_O(r, md, i, elem) N_PP_LIST_FOR_EACH_O_I(r, N_PP_TUPLE_REM_2 md, elem)
#    define N_PP_LIST_FOR_EACH_O_I(r, im, elem) N_PP_LIST_FOR_EACH_O_D(r, im, elem)
# endif
#
# define N_PP_LIST_FOR_EACH_O_D(r, m, d, elem) m(r, d, elem)
#
# /* N_PP_LIST_FOR_EACH_R */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LIST_FOR_EACH_R(r, macro, data, list) N_PP_LIST_FOR_EACH_I_R(r, N_PP_LIST_FOR_EACH_O, (macro, data), list)
# else
#    define N_PP_LIST_FOR_EACH_R(r, macro, data, list) N_PP_LIST_FOR_EACH_R_X(r, macro, data, list)
#    define N_PP_LIST_FOR_EACH_R_X(r, macro, data, list) N_PP_LIST_FOR_EACH_I_R(r, N_PP_LIST_FOR_EACH_O, (macro, data), list)
# endif
#
# endif
