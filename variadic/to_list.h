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
# ifndef NSL_PREPROCESSOR_VARIADIC_TO_LIST_H
# define NSL_PREPROCESSOR_VARIADIC_TO_LIST_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/tuple/to_list.h"
# include "nsl/preprocessor/variadic/has_opt.h"
# include "nsl/preprocessor/variadic/size.h"
#
# /* N_PP_VARIADIC_TO_LIST */
#
# if N_PP_VARIADIC_HAS_OPT()
#     define N_PP_VARIADIC_TO_LIST_NOT_EMPTY(...) N_PP_TUPLE_TO_LIST((__VA_ARGS__))
#     define N_PP_VARIADIC_TO_LIST_EMPTY(...) N_PP_NIL
#     define N_PP_VARIADIC_TO_LIST(...) N_PP_IF(N_PP_VARIADIC_SIZE(__VA_ARGS__),N_PP_VARIADIC_TO_LIST_NOT_EMPTY,N_PP_VARIADIC_TO_LIST_EMPTY)(__VA_ARGS__)
# else
#     define N_PP_VARIADIC_TO_LIST(...) N_PP_TUPLE_TO_LIST((__VA_ARGS__))
# endif
#
# endif
