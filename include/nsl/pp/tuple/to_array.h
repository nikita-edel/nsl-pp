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
# ifndef NSL_PP_TUPLE_TO_ARRAY_H
# define NSL_PP_TUPLE_TO_ARRAY_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/facilities/overload.h"
# include "nsl/pp/tuple/size.h"
# include "nsl/pp/variadic/size.h"
# include "nsl/pp/variadic/has_opt.h"
#
# /* N_PP_TUPLE_TO_ARRAY */
#
# if N_PP_VARIADICS_MSVC
#     define N_PP_TUPLE_TO_ARRAY(...) N_PP_TUPLE_TO_ARRAY_I(N_PP_OVERLOAD(N_PP_TUPLE_TO_ARRAY_, __VA_ARGS__), (__VA_ARGS__))
#     define N_PP_TUPLE_TO_ARRAY_I(m, args) N_PP_TUPLE_TO_ARRAY_II(m, args)
#     define N_PP_TUPLE_TO_ARRAY_II(m, args) N_PP_CAT(m ## args,)
#     define N_PP_TUPLE_TO_ARRAY_1(tuple) (N_PP_TUPLE_SIZE(tuple), tuple)
# else
#     define N_PP_TUPLE_TO_ARRAY(...) N_PP_OVERLOAD(N_PP_TUPLE_TO_ARRAY_, __VA_ARGS__)(__VA_ARGS__)
#     if N_PP_VARIADIC_HAS_OPT()
#         define N_PP_TUPLE_TO_ARRAY_1(tuple) N_PP_TUPLE_TO_ARRAY_1_SIZE(N_PP_VARIADIC_SIZE tuple, tuple)
#         define N_PP_TUPLE_TO_ARRAY_1_SIZE(size,tuple) (N_PP_IF(size,size,1), tuple)
#     else
#         define N_PP_TUPLE_TO_ARRAY_1(tuple) (N_PP_VARIADIC_SIZE tuple, tuple)
#     endif
# endif
# define N_PP_TUPLE_TO_ARRAY_2(size, tuple) (size, tuple)
#
# endif
