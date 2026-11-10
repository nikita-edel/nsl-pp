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
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_ARITHMETIC_MOD_H
# define NSL_PP_ARITHMETIC_MOD_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/arithmetic/detail/div_base.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_MOD */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MOD(x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE(x, y))
# else
#    define N_PP_MOD(x, y) N_PP_MOD_I(x, y)
#    define N_PP_MOD_I(x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE(x, y))
# endif
#
# /* N_PP_MOD_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MOD_D(d, x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE_D(d, x, y))
# else
#    define N_PP_MOD_D(d, x, y) N_PP_MOD_D_I(d, x, y)
#    define N_PP_MOD_D_I(d, x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE_D(d, x, y))
# endif
#
# else
#
# include "nsl/pp/arithmetic/detail/div_base.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/facilities/identity.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/arithmetic/detail/is_1_number.h"
#
# /* N_PP_MOD */
#
#    define N_PP_MOD(x, y) N_PP_IIF(N_PP_DETAIL_IS_1_NUMBER(y),N_PP_IDENTITY_N(0,2),N_PP_MOD_DO)(x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MOD_DO(x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE(x, y))
# else
#    define N_PP_MOD_DO(x, y) N_PP_MOD_I(x, y)
#    define N_PP_MOD_I(x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE(x, y))
# endif
#
# /* N_PP_MOD_D */
#
#    define N_PP_MOD_D(d, x, y) N_PP_IIF(N_PP_DETAIL_IS_1_NUMBER(y),N_PP_IDENTITY_N(0,3),N_PP_MOD_DO_D)(d,x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MOD_DO_D(d, x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE_D(d, x, y))
# else
#    define N_PP_MOD_DO_D(d, x, y) N_PP_MOD_D_I(d, x, y)
#    define N_PP_MOD_D_I(d, x, y) N_PP_TUPLE_ELEM(3, 1, N_PP_DIV_BASE_D(d, x, y))
# endif
#
# endif
#
# endif
