# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2016.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
# define NSL_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
#
# include "nsl/preprocessor/config/config.h"
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# define N_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT(state) \
    N_PP_TUPLE_ELEM(2, 0, state) \
/**/
# define N_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state) \
    N_PP_TUPLE_ELEM(2, 1, state) \
/**/
# define N_PP_SEQ_DETAIL_TO_LIST_MSVC_PRED(d,state) \
    N_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state) \
/**/
# define N_PP_SEQ_DETAIL_TO_LIST_MSVC_OP(d,state) \
    ( \
    N_PP_CAT(N_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT(state),), \
    N_PP_DEC(N_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state)) \
    ) \
/**/
#
# /* N_PP_SEQ_DETAIL_TO_LIST_MSVC */
#
# define N_PP_SEQ_DETAIL_TO_LIST_MSVC(result,seqsize) \
    N_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT \
        ( \
        N_PP_WHILE \
            ( \
            N_PP_SEQ_DETAIL_TO_LIST_MSVC_PRED, \
            N_PP_SEQ_DETAIL_TO_LIST_MSVC_OP, \
            (result,seqsize) \
            ) \
        ) \
/**/
# endif // N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#
# endif // NSL_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
