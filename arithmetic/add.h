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
# ifndef NSL_PREPROCESSOR_ARITHMETIC_ADD_H
# define NSL_PREPROCESSOR_ARITHMETIC_ADD_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* N_PP_ADD */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ADD(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# else
#    define N_PP_ADD(x, y) N_PP_ADD_I(x, y)
#    define N_PP_ADD_I(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# endif
#
# define N_PP_ADD_P(d, xy) N_PP_TUPLE_ELEM(2, 1, xy)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_ADD_O(d, xy) N_PP_ADD_O_I xy
# else
#    define N_PP_ADD_O(d, xy) N_PP_ADD_O_I(N_PP_TUPLE_ELEM(2, 0, xy), N_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define N_PP_ADD_O_I(x, y) (N_PP_INC(x), N_PP_DEC(y))
#
# /* N_PP_ADD_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ADD_D(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# else
#    define N_PP_ADD_D(d, x, y) N_PP_ADD_D_I(d, x, y)
#    define N_PP_ADD_D_I(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# endif
#
# else
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/logical/bitand.h"
# include "nsl/preprocessor/logical/bitor.h"
# include "nsl/preprocessor/logical/bool.h"
# include "nsl/preprocessor/logical/compl.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/arithmetic/detail/is_maximum_number.h"
# include "nsl/preprocessor/arithmetic/detail/is_minimum_number.h"
#
# /* N_PP_ADD */
#
#    define N_PP_ADD(x, y) N_PP_IIF(N_PP_BITOR(N_PP_DETAIL_IS_MAXIMUM_NUMBER(y),N_PP_DETAIL_IS_MINIMUM_NUMBER(x)),N_PP_IDENTITY_N(y,2),N_PP_ADD_DO)(x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ADD_DO(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# else
#    define N_PP_ADD_DO(x, y) N_PP_ADD_I(x, y)
#    define N_PP_ADD_I(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# endif
#
# define N_PP_ADD_P(d, xy) N_PP_BITAND(N_PP_BOOL(N_PP_TUPLE_ELEM(2, 1, xy)),N_PP_COMPL(N_PP_DETAIL_IS_MAXIMUM_NUMBER(N_PP_TUPLE_ELEM(2, 0, xy))))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_ADD_O(d, xy) N_PP_ADD_O_I xy
# else
#    define N_PP_ADD_O(d, xy) N_PP_ADD_O_I(N_PP_TUPLE_ELEM(2, 0, xy), N_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define N_PP_ADD_O_I(x, y) (N_PP_INC(x), N_PP_DEC(y))
#
# /* N_PP_ADD_D */
#
#    define N_PP_ADD_D(d, x, y) N_PP_IIF(N_PP_BITOR(N_PP_DETAIL_IS_MAXIMUM_NUMBER(y),N_PP_DETAIL_IS_MINIMUM_NUMBER(x)),N_PP_IDENTITY_N(y,3),N_PP_ADD_DO_D)(d,x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ADD_DO_D(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# else
#    define N_PP_ADD_DO_D(d, x, y) N_PP_ADD_D_I(d, x, y)
#    define N_PP_ADD_D_I(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_ADD_P, N_PP_ADD_O, (x, y)))
# endif
#
# endif
#
# endif
