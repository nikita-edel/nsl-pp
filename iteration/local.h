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
# ifndef NSL_PP_ITERATION_LOCAL_H
# define NSL_PP_ITERATION_LOCAL_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/slot/slot.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_LOCAL_ITERATE */
#
# define N_PP_LOCAL_ITERATE() <nsl/pp/iteration/detail/local.h>
#
# define N_PP_LOCAL_C(n) (N_PP_LOCAL_S) <= n && (N_PP_LOCAL_F) >= n
# define N_PP_LOCAL_R(n) (N_PP_LOCAL_F) <= n && (N_PP_LOCAL_S) >= n
#
# endif
