# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
#ifndef NSL_PP_DETAIL_IS_BEGIN_PARENS_H
#define NSL_PP_DETAIL_IS_BEGIN_PARENS_H

#if N_PP_VARIADICS_MSVC

#include "nsl/pp/facilities/empty.h"

#define N_PP_DETAIL_VD_IBP_CAT(a, b) N_PP_DETAIL_VD_IBP_CAT_I(a, b)
#define N_PP_DETAIL_VD_IBP_CAT_I(a, b) N_PP_DETAIL_VD_IBP_CAT_II(a ## b)
#define N_PP_DETAIL_VD_IBP_CAT_II(res) res

#define N_PP_DETAIL_IBP_SPLIT(i, ...) \
    N_PP_DETAIL_VD_IBP_CAT(N_PP_DETAIL_IBP_PRIMITIVE_CAT(N_PP_DETAIL_IBP_SPLIT_,i)(__VA_ARGS__),N_PP_EMPTY()) \
/**/

#define N_PP_DETAIL_IBP_IS_VARIADIC_C(...) 1 1

#else

#define N_PP_DETAIL_IBP_SPLIT(i, ...) \
    N_PP_DETAIL_IBP_PRIMITIVE_CAT(N_PP_DETAIL_IBP_SPLIT_,i)(__VA_ARGS__) \
/**/

#define N_PP_DETAIL_IBP_IS_VARIADIC_C(...) 1

#endif /* N_PP_VARIADICS_MSVC */

#define N_PP_DETAIL_IBP_SPLIT_0(a, ...) a
#define N_PP_DETAIL_IBP_SPLIT_1(a, ...) __VA_ARGS__

#define N_PP_DETAIL_IBP_CAT(a, ...) N_PP_DETAIL_IBP_PRIMITIVE_CAT(a,__VA_ARGS__)
#define N_PP_DETAIL_IBP_PRIMITIVE_CAT(a, ...) a ## __VA_ARGS__

#define N_PP_DETAIL_IBP_IS_VARIADIC_R_1 1,
#define N_PP_DETAIL_IBP_IS_VARIADIC_R_N_PP_DETAIL_IBP_IS_VARIADIC_C 0,

#endif /* NSL_PP_DETAIL_IS_BEGIN_PARENS_H */
