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
# ifndef NSL_PP_REPETITION_ENUM_SHIFTED_H
# define NSL_PP_REPETITION_ENUM_SHIFTED_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/debug/error.h"
# include "nsl/pp/detail/auto_rec.h"
# include "nsl/pp/punctuation/comma_if.h"
# include "nsl/pp/repetition/repeat.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_ENUM_SHIFTED */
#
# if 0
#    define N_PP_ENUM_SHIFTED(count, macro, data)
# endif
#
# define N_PP_ENUM_SHIFTED N_PP_CAT(N_PP_ENUM_SHIFTED_, N_PP_AUTO_REC(N_PP_REPEAT_P, 4))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_SHIFTED_1(c, m, d) N_PP_REPEAT_1(N_PP_DEC(c), N_PP_ENUM_SHIFTED_M_1, (m, d))
#    define N_PP_ENUM_SHIFTED_2(c, m, d) N_PP_REPEAT_2(N_PP_DEC(c), N_PP_ENUM_SHIFTED_M_2, (m, d))
#    define N_PP_ENUM_SHIFTED_3(c, m, d) N_PP_REPEAT_3(N_PP_DEC(c), N_PP_ENUM_SHIFTED_M_3, (m, d))
# else
#    define N_PP_ENUM_SHIFTED_1(c, m, d) N_PP_ENUM_SHIFTED_1_I(c, m, d)
#    define N_PP_ENUM_SHIFTED_2(c, m, d) N_PP_ENUM_SHIFTED_1_2(c, m, d)
#    define N_PP_ENUM_SHIFTED_3(c, m, d) N_PP_ENUM_SHIFTED_1_3(c, m, d)
#    define N_PP_ENUM_SHIFTED_1_I(c, m, d) N_PP_REPEAT_1(N_PP_DEC(c), N_PP_ENUM_SHIFTED_M_1, (m, d))
#    define N_PP_ENUM_SHIFTED_2_I(c, m, d) N_PP_REPEAT_2(N_PP_DEC(c), N_PP_ENUM_SHIFTED_M_2, (m, d))
#    define N_PP_ENUM_SHIFTED_3_I(c, m, d) N_PP_REPEAT_3(N_PP_DEC(c), N_PP_ENUM_SHIFTED_M_3, (m, d))
# endif
#
# define N_PP_ENUM_SHIFTED_4(c, m, d) N_PP_ERROR(0x0003)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ENUM_SHIFTED_M_1(z, n, md) N_PP_ENUM_SHIFTED_M_1_IM(z, n, N_PP_TUPLE_REM_2 md)
#    define N_PP_ENUM_SHIFTED_M_2(z, n, md) N_PP_ENUM_SHIFTED_M_2_IM(z, n, N_PP_TUPLE_REM_2 md)
#    define N_PP_ENUM_SHIFTED_M_3(z, n, md) N_PP_ENUM_SHIFTED_M_3_IM(z, n, N_PP_TUPLE_REM_2 md)
#    define N_PP_ENUM_SHIFTED_M_1_IM(z, n, im) N_PP_ENUM_SHIFTED_M_1_I(z, n, im)
#    define N_PP_ENUM_SHIFTED_M_2_IM(z, n, im) N_PP_ENUM_SHIFTED_M_2_I(z, n, im)
#    define N_PP_ENUM_SHIFTED_M_3_IM(z, n, im) N_PP_ENUM_SHIFTED_M_3_I(z, n, im)
# else
#    define N_PP_ENUM_SHIFTED_M_1(z, n, md) N_PP_ENUM_SHIFTED_M_1_I(z, n, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md))
#    define N_PP_ENUM_SHIFTED_M_2(z, n, md) N_PP_ENUM_SHIFTED_M_2_I(z, n, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md))
#    define N_PP_ENUM_SHIFTED_M_3(z, n, md) N_PP_ENUM_SHIFTED_M_3_I(z, n, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md))
# endif
#
# define N_PP_ENUM_SHIFTED_M_1_I(z, n, m, d) N_PP_COMMA_IF(n) m(z, N_PP_INC(n), d)
# define N_PP_ENUM_SHIFTED_M_2_I(z, n, m, d) N_PP_COMMA_IF(n) m(z, N_PP_INC(n), d)
# define N_PP_ENUM_SHIFTED_M_3_I(z, n, m, d) N_PP_COMMA_IF(n) m(z, N_PP_INC(n), d)
#
# endif
