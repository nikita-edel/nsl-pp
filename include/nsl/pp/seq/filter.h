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
# ifndef NSL_PP_SEQ_FILTER_H
# define NSL_PP_SEQ_FILTER_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/expr_if.h"
# include "nsl/pp/facilities/empty.h"
# include "nsl/pp/seq/fold_left.h"
# include "nsl/pp/seq/seq.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_SEQ_FILTER */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FILTER(pred, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# else
#    define N_PP_SEQ_FILTER(pred, data, seq) N_PP_SEQ_FILTER_I(pred, data, seq)
#    define N_PP_SEQ_FILTER_I(pred, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_FILTER_O(s, st, elem) N_PP_SEQ_FILTER_O_IM(s, N_PP_TUPLE_REM_3 st, elem)
#    define N_PP_SEQ_FILTER_O_IM(s, im, elem) N_PP_SEQ_FILTER_O_I(s, im, elem)
# else
#    define N_PP_SEQ_FILTER_O(s, st, elem) N_PP_SEQ_FILTER_O_I(s, N_PP_TUPLE_ELEM(3, 0, st), N_PP_TUPLE_ELEM(3, 1, st), N_PP_TUPLE_ELEM(3, 2, st), elem)
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_DMC()
#   define N_PP_SEQ_FILTER_O_I(s, pred, data, res, elem) (pred, data, res N_PP_EXPR_IF(pred(s, data, elem), (elem)))
# else
#   define N_PP_SEQ_FILTER_O_I(s, pred, data, res, elem) (pred, data, res N_PP_EXPR_IF(pred##(s, data, elem), (elem)))
# endif
#
# /* N_PP_SEQ_FILTER_S */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FILTER_S(s, pred, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# else
#    define N_PP_SEQ_FILTER_S(s, pred, data, seq) N_PP_SEQ_FILTER_S_I(s, pred, data, seq)
#    define N_PP_SEQ_FILTER_S_I(s, pred, data, seq) N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(3, 2, N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# endif
#
# endif
