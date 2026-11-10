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
# ifndef NSL_PP_ARITHMETIC_MUL_H
# define NSL_PP_ARITHMETIC_MUL_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/arithmetic/add.h"
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_MUL */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MUL(x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# else
#    define N_PP_MUL(x, y) N_PP_MUL_I(x, y)
#    define N_PP_MUL_I(x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# endif
#
# define N_PP_MUL_P(d, rxy) N_PP_TUPLE_ELEM(3, 2, rxy)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_MUL_O(d, rxy) N_PP_MUL_O_IM(d, N_PP_TUPLE_REM_3 rxy)
#    define N_PP_MUL_O_IM(d, im) N_PP_MUL_O_I(d, im)
# else
#    define N_PP_MUL_O(d, rxy) N_PP_MUL_O_I(d, N_PP_TUPLE_ELEM(3, 0, rxy), N_PP_TUPLE_ELEM(3, 1, rxy), N_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define N_PP_MUL_O_I(d, r, x, y) (N_PP_ADD_D(d, r, x), x, N_PP_DEC(y))
#
# /* N_PP_MUL_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MUL_D(d, x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE_ ## d(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# else
#    define N_PP_MUL_D(d, x, y) N_PP_MUL_D_I(d, x, y)
#    define N_PP_MUL_D_I(d, x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE_ ## d(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# endif
#
# else
#
# include "nsl/pp/arithmetic/add.h"
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/facilities/identity.h"
# include "nsl/pp/logical/bitand.h"
# include "nsl/pp/logical/bool.h"
# include "nsl/pp/logical/compl.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
# include "nsl/pp/arithmetic/detail/is_minimum_number.h"
# include "nsl/pp/arithmetic/detail/is_maximum_number.h"
# include "nsl/pp/arithmetic/detail/is_1_number.h"
#
# /* N_PP_MUL */
#
#    define N_PP_MUL(x, y) N_PP_IIF(N_PP_DETAIL_IS_MINIMUM_NUMBER(x),N_PP_IDENTITY_N(x,2),N_PP_MUL_CHECK_1X)(x,y)
#
#    define N_PP_MUL_CHECK_1X(x, y) N_PP_IIF(N_PP_DETAIL_IS_1_NUMBER(x),N_PP_IDENTITY_N(y,2),N_PP_MUL_DO)(x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MUL_DO(x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# else
#    define N_PP_MUL_DO(x, y) N_PP_MUL_I(x, y)
#    define N_PP_MUL_I(x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# endif
#
# define N_PP_MUL_P(d, rxy) N_PP_BITAND(N_PP_BOOL(N_PP_TUPLE_ELEM(3, 2, rxy)),N_PP_COMPL(N_PP_DETAIL_IS_MAXIMUM_NUMBER(N_PP_TUPLE_ELEM(3, 0, rxy))))
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_MUL_O(d, rxy) N_PP_MUL_O_IM(d, N_PP_TUPLE_REM_3 rxy)
#    define N_PP_MUL_O_IM(d, im) N_PP_MUL_O_I(d, im)
# else
#    define N_PP_MUL_O(d, rxy) N_PP_MUL_O_I(d, N_PP_TUPLE_ELEM(3, 0, rxy), N_PP_TUPLE_ELEM(3, 1, rxy), N_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define N_PP_MUL_O_I(d, r, x, y) (N_PP_ADD_D(d, r, x), x, N_PP_DEC(y))
#
# /* N_PP_MUL_D */
#
#    define N_PP_MUL_D(d, x, y) N_PP_IIF(N_PP_DETAIL_IS_MINIMUM_NUMBER(x),N_PP_IDENTITY_N(x,3),N_PP_MUL_CHECK_1X_D)(d,x,y)
#
#    define N_PP_MUL_CHECK_1X_D(d, x, y) N_PP_IIF(N_PP_DETAIL_IS_1_NUMBER(x),N_PP_IDENTITY_N(y,3),N_PP_MUL_DO_D)(d,x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_MUL_DO_D(d, x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE_ ## d(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# else
#    define N_PP_MUL_DO_D(d, x, y) N_PP_MUL_D_I(d, x, y)
#    define N_PP_MUL_D_I(d, x, y) N_PP_TUPLE_ELEM(3, 0, N_PP_WHILE_ ## d(N_PP_MUL_P, N_PP_MUL_O, (0, x, y)))
# endif
#
# endif
#
# endif
