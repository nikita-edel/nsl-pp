# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Paul Mensonides (2011) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_LIST_TO_SEQ_H
# define NSL_PREPROCESSOR_LIST_TO_SEQ_H
#
# include "nsl/preprocessor/list/for_each.h"
#
# /* N_PP_LIST_TO_SEQ */
#
# define N_PP_LIST_TO_SEQ(list) \
    N_PP_LIST_FOR_EACH(N_PP_LIST_TO_SEQ_MACRO, ~, list) \
    /**/
# define N_PP_LIST_TO_SEQ_MACRO(r, data, elem) (elem)
#
# /* N_PP_LIST_TO_SEQ_R */
#
# define N_PP_LIST_TO_SEQ_R(r, list) \
    N_PP_LIST_FOR_EACH_R(r, N_PP_LIST_TO_SEQ_MACRO, ~, list) \
    /**/
#
# endif /* NSL_PREPROCESSOR_LIST_TO_SEQ_H */
