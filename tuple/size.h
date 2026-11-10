# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_TUPLE_SIZE_H
# define NSL_PP_TUPLE_SIZE_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/variadic/has_opt.h"
# include "nsl/pp/variadic/size.h"
#
# if N_PP_VARIADIC_HAS_OPT()
#     if N_PP_VARIADICS_MSVC
#         define N_PP_TUPLE_SIZE(tuple) N_PP_TUPLE_SIZE_CHECK(N_PP_CAT(N_PP_VARIADIC_SIZE tuple,))
#     else
#         define N_PP_TUPLE_SIZE(tuple) N_PP_TUPLE_SIZE_CHECK(N_PP_VARIADIC_SIZE tuple)
#     endif
#     define N_PP_TUPLE_SIZE_CHECK(size) N_PP_IF(size,size,1)
# elif N_PP_VARIADICS_MSVC
#     define N_PP_TUPLE_SIZE(tuple) N_PP_CAT(N_PP_VARIADIC_SIZE tuple,)
# else
#     define N_PP_TUPLE_SIZE(tuple) N_PP_VARIADIC_SIZE tuple
# endif
#
# endif
