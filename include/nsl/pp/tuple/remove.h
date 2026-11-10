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
# ifndef NSL_PP_TUPLE_REMOVE_H
# define NSL_PP_TUPLE_REMOVE_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/array/remove.h"
# include "nsl/pp/array/to_tuple.h"
# include "nsl/pp/comparison/greater.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/tuple/size.h"
# include "nsl/pp/tuple/to_array.h"
#
# /* N_PP_TUPLE_REMOVE */
#
# define N_PP_TUPLE_REMOVE(tuple, i) \
    N_PP_IIF \
        ( \
        N_PP_GREATER(N_PP_TUPLE_SIZE(tuple),1), \
        N_PP_TUPLE_REMOVE_EXEC, \
        N_PP_TUPLE_REMOVE_RETURN \
        ) \
    (tuple, i) \
/**/
#
# define N_PP_TUPLE_REMOVE_EXEC(tuple, i) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_REMOVE(N_PP_TUPLE_TO_ARRAY(tuple), i)) \
/**/
#
# define N_PP_TUPLE_REMOVE_RETURN(tuple, i) tuple
#
# /* N_PP_TUPLE_REMOVE_D */
#
# define N_PP_TUPLE_REMOVE_D(d, tuple, i) \
    N_PP_IIF \
        ( \
        N_PP_GREATER_D(d, N_PP_TUPLE_SIZE(tuple), 1), \
        N_PP_TUPLE_REMOVE_D_EXEC, \
        N_PP_TUPLE_REMOVE_D_RETURN \
        ) \
    (d, tuple, i) \
/**/
#
# define N_PP_TUPLE_REMOVE_D_EXEC(d, tuple, i) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_REMOVE_D(d, N_PP_TUPLE_TO_ARRAY(tuple), i)) \
/**/
#
# define N_PP_TUPLE_REMOVE_D_RETURN(d, tuple, i) tuple
#
# endif // NSL_PP_TUPLE_REMOVE_H
