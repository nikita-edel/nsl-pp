# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
# include "nsl/preprocessor/repetition/repeat.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* N_PP_ENUM_TRAILING */
#
# if 0
#    define N_PP_ENUM_TRAILING(count, macro, data)
# endif
#
# define N_PP_ENUM_TRAILING N_PP_CAT(N_PP_ENUM_TRAILING_, N_PP_AUTO_REC(N_PP_REPEAT_P, 4))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_TRAILING_1(c, m, d) N_PP_REPEAT_1(c, N_PP_ENUM_TRAILING_M_1, (m, d))
#    define N_PP_ENUM_TRAILING_2(c, m, d) N_PP_REPEAT_2(c, N_PP_ENUM_TRAILING_M_2, (m, d))
#    define N_PP_ENUM_TRAILING_3(c, m, d) N_PP_REPEAT_3(c, N_PP_ENUM_TRAILING_M_3, (m, d))
# else
#    define N_PP_ENUM_TRAILING_1(c, m, d) N_PP_ENUM_TRAILING_1_I(c, m, d)
#    define N_PP_ENUM_TRAILING_2(c, m, d) N_PP_ENUM_TRAILING_2_I(c, m, d)
#    define N_PP_ENUM_TRAILING_3(c, m, d) N_PP_ENUM_TRAILING_3_I(c, m, d)
#    define N_PP_ENUM_TRAILING_1_I(c, m, d) N_PP_REPEAT_1(c, N_PP_ENUM_TRAILING_M_1, (m, d))
#    define N_PP_ENUM_TRAILING_2_I(c, m, d) N_PP_REPEAT_2(c, N_PP_ENUM_TRAILING_M_2, (m, d))
#    define N_PP_ENUM_TRAILING_3_I(c, m, d) N_PP_REPEAT_3(c, N_PP_ENUM_TRAILING_M_3, (m, d))
# endif
#
# define N_PP_ENUM_TRAILING_4(c, m, d) N_PP_ERROR(0x0003)
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ENUM_TRAILING_M_1(z, n, md) N_PP_ENUM_TRAILING_M_1_IM(z, n, N_PP_TUPLE_REM_2 md)
#    define N_PP_ENUM_TRAILING_M_2(z, n, md) N_PP_ENUM_TRAILING_M_2_IM(z, n, N_PP_TUPLE_REM_2 md)
#    define N_PP_ENUM_TRAILING_M_3(z, n, md) N_PP_ENUM_TRAILING_M_3_IM(z, n, N_PP_TUPLE_REM_2 md)
#    define N_PP_ENUM_TRAILING_M_1_IM(z, n, im) N_PP_ENUM_TRAILING_M_1_I(z, n, im)
#    define N_PP_ENUM_TRAILING_M_2_IM(z, n, im) N_PP_ENUM_TRAILING_M_2_I(z, n, im)
#    define N_PP_ENUM_TRAILING_M_3_IM(z, n, im) N_PP_ENUM_TRAILING_M_3_I(z, n, im)
# else
#    define N_PP_ENUM_TRAILING_M_1(z, n, md) N_PP_ENUM_TRAILING_M_1_I(z, n, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md))
#    define N_PP_ENUM_TRAILING_M_2(z, n, md) N_PP_ENUM_TRAILING_M_2_I(z, n, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md))
#    define N_PP_ENUM_TRAILING_M_3(z, n, md) N_PP_ENUM_TRAILING_M_3_I(z, n, N_PP_TUPLE_ELEM(2, 0, md), N_PP_TUPLE_ELEM(2, 1, md))
# endif
#
# define N_PP_ENUM_TRAILING_M_1_I(z, n, m, d) , m(z, n, d)
# define N_PP_ENUM_TRAILING_M_2_I(z, n, m, d) , m(z, n, d)
# define N_PP_ENUM_TRAILING_M_3_I(z, n, m, d) , m(z, n, d)
#
# endif
