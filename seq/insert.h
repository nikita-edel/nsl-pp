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
# ifndef NSL_PREPROCESSOR_SEQ_INSERT_H
# define NSL_PREPROCESSOR_SEQ_INSERT_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/seq/first_n.h"
# include "nsl/pp/seq/rest_n.h"
#
# /* N_PP_SEQ_INSERT */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_INSERT(seq, i, elem) N_PP_SEQ_FIRST_N(i, seq) (elem) N_PP_SEQ_REST_N(i, seq)
# else
#    define N_PP_SEQ_INSERT(seq, i, elem) N_PP_SEQ_INSERT_I(seq, i, elem)
#    define N_PP_SEQ_INSERT_I(seq, i, elem) N_PP_SEQ_FIRST_N(i, seq) (elem) N_PP_SEQ_REST_N(i, seq)
# endif
#
# endif
