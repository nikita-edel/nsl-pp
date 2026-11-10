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
# ifndef NSL_PP_TUPLE_POP_BACK_H
# define NSL_PP_TUPLE_POP_BACK_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/array/pop_back.h"
# include "nsl/pp/array/to_tuple.h"
# include "nsl/pp/comparison/greater.h"
# include "nsl/pp/control/iif.h"
# include "nsl/pp/tuple/size.h"
# include "nsl/pp/tuple/to_array.h"
#
# /* N_PP_TUPLE_POP_BACK */
#
# define N_PP_TUPLE_POP_BACK(tuple) \
    N_PP_IIF \
        ( \
        N_PP_GREATER(N_PP_TUPLE_SIZE(tuple),1), \
        N_PP_TUPLE_POP_BACK_EXEC, \
        N_PP_TUPLE_POP_BACK_RETURN \
        ) \
    (tuple) \
/**/
#
# define N_PP_TUPLE_POP_BACK_EXEC(tuple) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_POP_BACK(N_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define N_PP_TUPLE_POP_BACK_RETURN(tuple) tuple
#
# /* N_PP_TUPLE_POP_BACK_Z */
#
# define N_PP_TUPLE_POP_BACK_Z(z, tuple) \
    N_PP_IIF \
        ( \
        N_PP_GREATER(N_PP_TUPLE_SIZE(tuple),1), \
        N_PP_TUPLE_POP_BACK_Z_EXEC, \
        N_PP_TUPLE_POP_BACK_Z_RETURN \
        ) \
    (z, tuple) \
/**/
#
# define N_PP_TUPLE_POP_BACK_Z_EXEC(z, tuple) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_POP_BACK_Z(z, N_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define N_PP_TUPLE_POP_BACK_Z_RETURN(z, tuple) tuple
#
# endif // NSL_PP_TUPLE_POP_BACK_H
