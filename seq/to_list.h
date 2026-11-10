# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_TO_LIST_H
# define NSL_PREPROCESSOR_SEQ_TO_LIST_H
#
# include "nsl/pp/punctuation/comma.h"
# include "nsl/pp/punctuation/paren.h"
# include "nsl/pp/seq/detail/binary_transform.h"
#
# /* N_PP_SEQ_TO_LIST */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
# include "nsl/pp/seq/size.h"
# include "nsl/pp/seq/detail/to_list_msvc.h"
# define N_PP_SEQ_TO_LIST(seq) \
    N_PP_SEQ_DETAIL_TO_LIST_MSVC \
        ( \
        N_PP_SEQ_TO_LIST_I(N_PP_SEQ_BINARY_TRANSFORM(seq)), \
        N_PP_SEQ_SIZE(seq) \
        ) \
/**/
# else
# define N_PP_SEQ_TO_LIST(seq) N_PP_SEQ_TO_LIST_I(N_PP_SEQ_BINARY_TRANSFORM(seq))
# endif
# define N_PP_SEQ_TO_LIST_I(bseq) N_PP_SEQ_TO_LIST_A bseq N_PP_NIL N_PP_SEQ_TO_LIST_B bseq
# define N_PP_SEQ_TO_LIST_A(m, e) m(N_PP_LPAREN() e N_PP_COMMA() N_PP_SEQ_TO_LIST_A_ID)
# define N_PP_SEQ_TO_LIST_A_ID() N_PP_SEQ_TO_LIST_A
# define N_PP_SEQ_TO_LIST_B(m, e) m(N_PP_RPAREN() N_PP_SEQ_TO_LIST_B_ID)
# define N_PP_SEQ_TO_LIST_B_ID() N_PP_SEQ_TO_LIST_B
#
# endif
