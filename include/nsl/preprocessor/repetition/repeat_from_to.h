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
# ifndef NSL_PREPROCESSOR_REPETITION_REPEAT_FROM_TO_H
# define NSL_PREPROCESSOR_REPETITION_REPEAT_FROM_TO_H
#
# include "nsl/preprocessor/arithmetic/add.h"
# include "nsl/preprocessor/arithmetic/sub.h"
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
# include "nsl/preprocessor/repetition/repeat.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* N_PP_REPEAT_FROM_TO */
#
# if 0
#    define N_PP_REPEAT_FROM_TO(first, last, macro, data)
# endif
#
# define N_PP_REPEAT_FROM_TO N_PP_CAT(N_PP_REPEAT_FROM_TO_, N_PP_AUTO_REC(N_PP_REPEAT_P, 4))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# define N_PP_REPEAT_FROM_TO_1(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_1(N_PP_AUTO_REC(N_PP_WHILE_P, 256), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_2(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_2(N_PP_AUTO_REC(N_PP_WHILE_P, 256), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_3(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_3(N_PP_AUTO_REC(N_PP_WHILE_P, 256), f, l, m, dt)
#
# else
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/config/limits.h"
#
# if N_PP_LIMIT_REPEAT == 256
# define N_PP_REPEAT_FROM_TO_1(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_1(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 256)), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_2(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_2(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 256)), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_3(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_3(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 256)), f, l, m, dt)
# elif N_PP_LIMIT_REPEAT == 512
# define N_PP_REPEAT_FROM_TO_1(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_1(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 512)), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_2(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_2(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 512)), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_3(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_3(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 512)), f, l, m, dt)
# elif N_PP_LIMIT_REPEAT == 1024
# define N_PP_REPEAT_FROM_TO_1(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_1(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 1024)), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_2(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_2(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 1024)), f, l, m, dt)
# define N_PP_REPEAT_FROM_TO_3(f, l, m, dt) N_PP_REPEAT_FROM_TO_D_3(N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 1024)), f, l, m, dt)
# else
# error Incorrect value for the N_PP_LIMIT_REPEAT limit
# endif
#
# endif
#
# define N_PP_REPEAT_FROM_TO_4(f, l, m, dt) N_PP_ERROR(0x0003)
#
# define N_PP_REPEAT_FROM_TO_1ST N_PP_REPEAT_FROM_TO_1
# define N_PP_REPEAT_FROM_TO_2ND N_PP_REPEAT_FROM_TO_2
# define N_PP_REPEAT_FROM_TO_3RD N_PP_REPEAT_FROM_TO_3
#
# /* N_PP_REPEAT_FROM_TO_D */
#
# if 0
#    define N_PP_REPEAT_FROM_TO_D(d, first, last, macro, data)
# endif
#
# define N_PP_REPEAT_FROM_TO_D N_PP_CAT(N_PP_REPEAT_FROM_TO_D_, N_PP_AUTO_REC(N_PP_REPEAT_P, 4))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_REPEAT_FROM_TO_D_1(d, f, l, m, dt) N_PP_REPEAT_1(N_PP_SUB_D(d, l, f), N_PP_REPEAT_FROM_TO_M_1, (d, f, m, dt))
#    define N_PP_REPEAT_FROM_TO_D_2(d, f, l, m, dt) N_PP_REPEAT_2(N_PP_SUB_D(d, l, f), N_PP_REPEAT_FROM_TO_M_2, (d, f, m, dt))
#    define N_PP_REPEAT_FROM_TO_D_3(d, f, l, m, dt) N_PP_REPEAT_3(N_PP_SUB_D(d, l, f), N_PP_REPEAT_FROM_TO_M_3, (d, f, m, dt))
# else
#    define N_PP_REPEAT_FROM_TO_D_1(d, f, l, m, dt) N_PP_REPEAT_FROM_TO_D_1_I(d, f, l, m, dt)
#    define N_PP_REPEAT_FROM_TO_D_2(d, f, l, m, dt) N_PP_REPEAT_FROM_TO_D_2_I(d, f, l, m, dt)
#    define N_PP_REPEAT_FROM_TO_D_3(d, f, l, m, dt) N_PP_REPEAT_FROM_TO_D_3_I(d, f, l, m, dt)
#    define N_PP_REPEAT_FROM_TO_D_1_I(d, f, l, m, dt) N_PP_REPEAT_1(N_PP_SUB_D(d, l, f), N_PP_REPEAT_FROM_TO_M_1, (d, f, m, dt))
#    define N_PP_REPEAT_FROM_TO_D_2_I(d, f, l, m, dt) N_PP_REPEAT_2(N_PP_SUB_D(d, l, f), N_PP_REPEAT_FROM_TO_M_2, (d, f, m, dt))
#    define N_PP_REPEAT_FROM_TO_D_3_I(d, f, l, m, dt) N_PP_REPEAT_3(N_PP_SUB_D(d, l, f), N_PP_REPEAT_FROM_TO_M_3, (d, f, m, dt))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_REPEAT_FROM_TO_M_1(z, n, dfmd) N_PP_REPEAT_FROM_TO_M_1_IM(z, n, N_PP_TUPLE_REM_4 dfmd)
#    define N_PP_REPEAT_FROM_TO_M_2(z, n, dfmd) N_PP_REPEAT_FROM_TO_M_2_IM(z, n, N_PP_TUPLE_REM_4 dfmd)
#    define N_PP_REPEAT_FROM_TO_M_3(z, n, dfmd) N_PP_REPEAT_FROM_TO_M_3_IM(z, n, N_PP_TUPLE_REM_4 dfmd)
#    define N_PP_REPEAT_FROM_TO_M_1_IM(z, n, im) N_PP_REPEAT_FROM_TO_M_1_I(z, n, im)
#    define N_PP_REPEAT_FROM_TO_M_2_IM(z, n, im) N_PP_REPEAT_FROM_TO_M_2_I(z, n, im)
#    define N_PP_REPEAT_FROM_TO_M_3_IM(z, n, im) N_PP_REPEAT_FROM_TO_M_3_I(z, n, im)
# else
#    define N_PP_REPEAT_FROM_TO_M_1(z, n, dfmd) N_PP_REPEAT_FROM_TO_M_1_I(z, n, N_PP_TUPLE_ELEM(4, 0, dfmd), N_PP_TUPLE_ELEM(4, 1, dfmd), N_PP_TUPLE_ELEM(4, 2, dfmd), N_PP_TUPLE_ELEM(4, 3, dfmd))
#    define N_PP_REPEAT_FROM_TO_M_2(z, n, dfmd) N_PP_REPEAT_FROM_TO_M_2_I(z, n, N_PP_TUPLE_ELEM(4, 0, dfmd), N_PP_TUPLE_ELEM(4, 1, dfmd), N_PP_TUPLE_ELEM(4, 2, dfmd), N_PP_TUPLE_ELEM(4, 3, dfmd))
#    define N_PP_REPEAT_FROM_TO_M_3(z, n, dfmd) N_PP_REPEAT_FROM_TO_M_3_I(z, n, N_PP_TUPLE_ELEM(4, 0, dfmd), N_PP_TUPLE_ELEM(4, 1, dfmd), N_PP_TUPLE_ELEM(4, 2, dfmd), N_PP_TUPLE_ELEM(4, 3, dfmd))
# endif
#
# define N_PP_REPEAT_FROM_TO_M_1_I(z, n, d, f, m, dt) N_PP_REPEAT_FROM_TO_M_1_II(z, N_PP_ADD_D(d, n, f), m, dt)
# define N_PP_REPEAT_FROM_TO_M_2_I(z, n, d, f, m, dt) N_PP_REPEAT_FROM_TO_M_2_II(z, N_PP_ADD_D(d, n, f), m, dt)
# define N_PP_REPEAT_FROM_TO_M_3_I(z, n, d, f, m, dt) N_PP_REPEAT_FROM_TO_M_3_II(z, N_PP_ADD_D(d, n, f), m, dt)
#
# define N_PP_REPEAT_FROM_TO_M_1_II(z, n, m, dt) m(z, n, dt)
# define N_PP_REPEAT_FROM_TO_M_2_II(z, n, m, dt) m(z, n, dt)
# define N_PP_REPEAT_FROM_TO_M_3_II(z, n, m, dt) m(z, n, dt)
#
# endif
