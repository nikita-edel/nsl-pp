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
# ifndef NSL_PREPROCESSOR_SEQ_TRANSFORM_H
# define NSL_PREPROCESSOR_SEQ_TRANSFORM_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/seq/fold_left.h"
# include "nsl/pp/seq/seq.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_SEQ_TRANSFORM */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_TRANSFORM(op, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# else
#    define N_PP_SEQ_TRANSFORM(op, data, seq) N_PP_SEQ_TRANSFORM_I(op, data, seq)
#    define N_PP_SEQ_TRANSFORM_I(op, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_TRANSFORM_O(s, state, elem) N_PP_SEQ_TRANSFORM_O_IM(s, N_PP_TUPLE_REM_3 state, elem)
#    define N_PP_SEQ_TRANSFORM_O_IM(s, im, elem) N_PP_SEQ_TRANSFORM_O_I(s, im, elem)
# else
#    define N_PP_SEQ_TRANSFORM_O(s, state, elem) N_PP_SEQ_TRANSFORM_O_I(s, N_PP_TUPLE_ELEM(3, 0, state), N_PP_TUPLE_ELEM(3, 1, state), N_PP_TUPLE_ELEM(3, 2, state), elem)
# endif
#
# define N_PP_SEQ_TRANSFORM_O_I(s, op, data, res, elem) (op, data, res (op(s, data, elem)))
#
# /* N_PP_SEQ_TRANSFORM_S */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_TRANSFORM_S(s, op, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# else
#    define N_PP_SEQ_TRANSFORM_S(s, op, data, seq) N_PP_SEQ_TRANSFORM_S_I(s, op, data, seq)
#    define N_PP_SEQ_TRANSFORM_S_I(s, op, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# endif
#
# endif
