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
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_PARAMS_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_PARAMS_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/repetition/repeat.h"
#
# /* N_PP_ENUM_TRAILING_PARAMS */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_TRAILING_PARAMS(count, param) N_PP_REPEAT(count, N_PP_ENUM_TRAILING_PARAMS_M, param)
# else
#    define N_PP_ENUM_TRAILING_PARAMS(count, param) N_PP_ENUM_TRAILING_PARAMS_I(count, param)
#    define N_PP_ENUM_TRAILING_PARAMS_I(count, param) N_PP_REPEAT(count, N_PP_ENUM_TRAILING_PARAMS_M, param)
# endif
#
# define N_PP_ENUM_TRAILING_PARAMS_M(z, n, param) , param ## n
#
# /* N_PP_ENUM_TRAILING_PARAMS_Z */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ENUM_TRAILING_PARAMS_Z(z, count, param) N_PP_REPEAT_ ## z(count, N_PP_ENUM_TRAILING_PARAMS_M, param)
# else
#    define N_PP_ENUM_TRAILING_PARAMS_Z(z, count, param) N_PP_ENUM_TRAILING_PARAMS_Z_I(z, count, param)
#    define N_PP_ENUM_TRAILING_PARAMS_Z_I(z, count, param) N_PP_REPEAT_ ## z(count, N_PP_ENUM_TRAILING_PARAMS_M, param)
# endif
#
# endif
