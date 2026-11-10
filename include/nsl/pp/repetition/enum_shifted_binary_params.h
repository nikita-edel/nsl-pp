# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2005.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_REPETITION_ENUM_SHIFTED_BINARY_PARAMS_H
# define NSL_PP_REPETITION_ENUM_SHIFTED_BINARY_PARAMS_H
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/punctuation/comma_if.h"
# include "nsl/pp/repetition/repeat.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_ENUM_SHIFTED_BINARY_PARAMS */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS(count, p1, p2) N_PP_REPEAT(N_PP_DEC(count), N_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# else
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS(count, p1, p2) N_PP_ENUM_SHIFTED_BINARY_PARAMS_I(count, p1, p2)
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_I(count, p1, p2) N_PP_REPEAT(N_PP_DEC(count), N_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_M(z, n, pp) N_PP_ENUM_SHIFTED_BINARY_PARAMS_M_IM(z, n, N_PP_TUPLE_REM_2 pp)
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_M_IM(z, n, im) N_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, im)
# else
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_M(z, n, pp) N_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, N_PP_TUPLE_ELEM(2, 0, pp), N_PP_TUPLE_ELEM(2, 1, pp))
# endif
#
# define N_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, p1, p2) N_PP_COMMA_IF(n) N_PP_CAT(p1, N_PP_INC(n)) N_PP_CAT(p2, N_PP_INC(n))
#
# /* N_PP_ENUM_SHIFTED_BINARY_PARAMS_Z */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_Z(z, count, p1, p2) N_PP_REPEAT_ ## z(N_PP_DEC(count), N_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# else
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_Z(z, count, p1, p2) N_PP_ENUM_SHIFTED_BINARY_PARAMS_Z_I(z, count, p1, p2)
#    define N_PP_ENUM_SHIFTED_BINARY_PARAMS_Z_I(z, count, p1, p2) N_PP_REPEAT_ ## z(N_PP_DEC(count), N_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# endif
#
# endif
