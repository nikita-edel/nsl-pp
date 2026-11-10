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
# ifndef NSL_PP_SEQ_SEQ_H
# define NSL_PP_SEQ_SEQ_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/seq/elem.h"
#
# /* N_PP_SEQ_HEAD */
#
# define N_PP_SEQ_HEAD(seq) N_PP_SEQ_ELEM(0, seq)
#
# /* N_PP_SEQ_TAIL */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SEQ_TAIL(seq) N_PP_SEQ_TAIL_1((seq))
#    define N_PP_SEQ_TAIL_1(par) N_PP_SEQ_TAIL_2 ## par
#    define N_PP_SEQ_TAIL_2(seq) N_PP_SEQ_TAIL_I ## seq
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_SEQ_TAIL(seq) N_PP_SEQ_TAIL_ID(N_PP_SEQ_TAIL_I seq)
#    define N_PP_SEQ_TAIL_ID(id) id
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_TAIL(seq) N_PP_SEQ_TAIL_D(seq)
#    define N_PP_SEQ_TAIL_D(seq) N_PP_SEQ_TAIL_I seq
# else
#    define N_PP_SEQ_TAIL(seq) N_PP_SEQ_TAIL_I seq
# endif
#
# define N_PP_SEQ_TAIL_I(x)
#
# /* N_PP_SEQ_NIL */
#
# define N_PP_SEQ_NIL(x) (x)
#
# endif
