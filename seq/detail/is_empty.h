# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2015.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_DETAIL_IS_EMPTY_H
# define NSL_PREPROCESSOR_SEQ_DETAIL_IS_EMPTY_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/logical/bool.h"
# include "nsl/preprocessor/logical/compl.h"
# include "nsl/preprocessor/seq/size.h"
#
/* An empty seq is one that is just N_PP_SEQ_NIL */
#
# define N_PP_SEQ_DETAIL_IS_EMPTY(seq) \
    N_PP_COMPL \
        ( \
        N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
        ) \
/**/
#
# define N_PP_SEQ_DETAIL_IS_EMPTY_SIZE(size) \
    N_PP_COMPL \
        ( \
        N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
        ) \
/**/
#
# define N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
    N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(N_PP_SEQ_DETAIL_EMPTY_SIZE(seq)) \
/**/
#
# define N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
    N_PP_BOOL(size) \
/**/
#
# define N_PP_SEQ_DETAIL_EMPTY_SIZE(seq) \
    N_PP_DEC(N_PP_SEQ_SIZE(seq (nil))) \
/**/
#
# endif
