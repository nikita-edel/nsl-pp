# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2013.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_TUPLE_PUSH_FRONT_H
# define NSL_PP_TUPLE_PUSH_FRONT_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/array/push_front.h"
# include "nsl/pp/array/to_tuple.h"
# include "nsl/pp/tuple/to_array.h"
#
# /* N_PP_TUPLE_PUSH_FRONT */
#
# define N_PP_TUPLE_PUSH_FRONT(tuple, elem) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_PUSH_FRONT(N_PP_TUPLE_TO_ARRAY(tuple), elem)) \
/**/
#
# endif // NSL_PP_TUPLE_PUSH_FRONT_H
