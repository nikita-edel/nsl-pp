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
#ifndef NSL_PREPROCESSOR_DETAIL_IS_EMPTY_H
#define NSL_PREPROCESSOR_DETAIL_IS_EMPTY_H

#include "nsl/preprocessor/punctuation/is_begin_parens.h"

#if N_PP_VARIADICS_MSVC

# pragma warning(once:4002)

#define N_PP_DETAIL_IS_EMPTY_IIF_0(t, b) b
#define N_PP_DETAIL_IS_EMPTY_IIF_1(t, b) t

#else

#define N_PP_DETAIL_IS_EMPTY_IIF_0(t, ...) __VA_ARGS__
#define N_PP_DETAIL_IS_EMPTY_IIF_1(t, ...) t

#endif

#if N_PP_VARIADICS_MSVC && _MSC_VER <= 1400

#define N_PP_DETAIL_IS_EMPTY_PROCESS(param) \
    N_PP_IS_BEGIN_PARENS \
        ( \
        N_PP_DETAIL_IS_EMPTY_NON_FUNCTION_C param () \
        ) \
/**/

#else

#define N_PP_DETAIL_IS_EMPTY_PROCESS(...) \
    N_PP_IS_BEGIN_PARENS \
        ( \
        N_PP_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ () \
        ) \
/**/

#endif

#define N_PP_DETAIL_IS_EMPTY_PRIMITIVE_CAT(a, b) a ## b
#define N_PP_DETAIL_IS_EMPTY_IIF(bit) N_PP_DETAIL_IS_EMPTY_PRIMITIVE_CAT(N_PP_DETAIL_IS_EMPTY_IIF_,bit)
#define N_PP_DETAIL_IS_EMPTY_NON_FUNCTION_C(...) ()

#endif /* NSL_PREPROCESSOR_DETAIL_IS_EMPTY_H */
