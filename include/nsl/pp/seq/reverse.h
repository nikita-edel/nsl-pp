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
# ifndef NSL_PP_SEQ_REVERSE_H
# define NSL_PP_SEQ_REVERSE_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/facilities/empty.h"
# include "nsl/pp/seq/fold_left.h"
#
# /* N_PP_SEQ_REVERSE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_REVERSE(seq) N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_REVERSE_O, N_PP_EMPTY, seq)()
# else
#    define N_PP_SEQ_REVERSE(seq) N_PP_SEQ_REVERSE_I(seq)
#    define N_PP_SEQ_REVERSE_I(seq) N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_REVERSE_O, N_PP_EMPTY, seq)()
# endif
#
# define N_PP_SEQ_REVERSE_O(s, state, elem) (elem) state
#
# /* N_PP_SEQ_REVERSE_S */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_REVERSE_S(s, seq) N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_REVERSE_O, N_PP_EMPTY, seq)()
# else
#    define N_PP_SEQ_REVERSE_S(s, seq) N_PP_SEQ_REVERSE_S_I(s, seq)
#    define N_PP_SEQ_REVERSE_S_I(s, seq) N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_REVERSE_O, N_PP_EMPTY, seq)()
# endif
#
# endif
