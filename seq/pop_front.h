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
# ifndef NSL_PP_SEQ_POP_FRONT_H
# define NSL_PP_SEQ_POP_FRONT_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/seq/seq.h"
#
# /* N_PP_SEQ_POP_FRONT */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_POP_FRONT(seq) N_PP_SEQ_TAIL(seq)
# else
#    define N_PP_SEQ_POP_FRONT(seq) N_PP_SEQ_POP_FRONT_I(seq)
#    define N_PP_SEQ_POP_FRONT_I(seq) N_PP_SEQ_TAIL(seq)
# endif
#
# endif
