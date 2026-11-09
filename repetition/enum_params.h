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
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_PARAMS_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_PARAMS_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/punctuation/comma_if.h"
# include "nsl/preprocessor/repetition/repeat.h"
#
# /* N_PP_ENUM_PARAMS */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_PARAMS(count, param) N_PP_REPEAT(count, N_PP_ENUM_PARAMS_M, param)
# else
#    define N_PP_ENUM_PARAMS(count, param) N_PP_ENUM_PARAMS_I(count, param)
#    define N_PP_ENUM_PARAMS_I(count, param) N_PP_REPEAT(count, N_PP_ENUM_PARAMS_M, param)
# endif
#
# define N_PP_ENUM_PARAMS_M(z, n, param) N_PP_COMMA_IF(n) param ## n
#
# /* N_PP_ENUM_PARAMS_Z */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_PARAMS_Z(z, count, param) N_PP_REPEAT_ ## z(count, N_PP_ENUM_PARAMS_M, param)
# else
#    define N_PP_ENUM_PARAMS_Z(z, count, param) N_PP_ENUM_PARAMS_Z_I(z, count, param)
#    define N_PP_ENUM_PARAMS_Z_I(z, count, param) N_PP_REPEAT_ ## z(count, N_PP_ENUM_PARAMS_M, param)
# endif
#
# endif
