# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_SEQ_DETAIL_BINARY_TRANSFORM_H
# define NSL_PP_SEQ_DETAIL_BINARY_TRANSFORM_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/tuple/eat.h"
# include "nsl/pp/tuple/rem.h"
# include "nsl/pp/variadic/detail/is_single_return.h"
#
# /* N_PP_SEQ_BINARY_TRANSFORM */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_SEQ_BINARY_TRANSFORM(seq) N_PP_SEQ_BINARY_TRANSFORM_I(, seq)
#    define N_PP_SEQ_BINARY_TRANSFORM_I(p, seq) N_PP_SEQ_BINARY_TRANSFORM_II(p ## seq)
#    define N_PP_SEQ_BINARY_TRANSFORM_II(seq) N_PP_SEQ_BINARY_TRANSFORM_III(seq)
#    define N_PP_SEQ_BINARY_TRANSFORM_III(seq) N_PP_CAT(N_PP_SEQ_BINARY_TRANSFORM_A seq, 0)
# else
#    define N_PP_SEQ_BINARY_TRANSFORM(seq) N_PP_CAT(N_PP_SEQ_BINARY_TRANSFORM_A seq, 0)
# endif
# if N_PP_VARIADICS_MSVC
#    define N_PP_SEQ_BINARY_TRANSFORM_REM(data) data
#    define N_PP_SEQ_BINARY_TRANSFORM_A(...) (N_PP_SEQ_BINARY_TRANSFORM_REM, __VA_ARGS__)() N_PP_SEQ_BINARY_TRANSFORM_B
#    define N_PP_SEQ_BINARY_TRANSFORM_B(...) (N_PP_SEQ_BINARY_TRANSFORM_REM, __VA_ARGS__)() N_PP_SEQ_BINARY_TRANSFORM_A
# else
#    define N_PP_SEQ_BINARY_TRANSFORM_A(...) (N_PP_REM, __VA_ARGS__)() N_PP_SEQ_BINARY_TRANSFORM_B
#    define N_PP_SEQ_BINARY_TRANSFORM_B(...) (N_PP_REM, __VA_ARGS__)() N_PP_SEQ_BINARY_TRANSFORM_A
# endif
# define N_PP_SEQ_BINARY_TRANSFORM_A0 (N_PP_EAT, ?)
# define N_PP_SEQ_BINARY_TRANSFORM_B0 (N_PP_EAT, ?)
#
# endif
