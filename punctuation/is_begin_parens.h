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
# ifndef NSL_PREPROCESSOR_IS_BEGIN_PARENS_H
# define NSL_PREPROCESSOR_IS_BEGIN_PARENS_H

#include "nsl/pp/config/config.h"
#include "nsl/pp/punctuation/detail/is_begin_parens.h"

#if N_PP_VARIADICS_MSVC && _MSC_VER <= 1400

#define N_PP_IS_BEGIN_PARENS(param) \
    N_PP_DETAIL_IBP_SPLIT \
      ( \
      0, \
      N_PP_DETAIL_IBP_CAT \
        ( \
        N_PP_DETAIL_IBP_IS_VARIADIC_R_, \
        N_PP_DETAIL_IBP_IS_VARIADIC_C param \
        ) \
      ) \
/**/

#else

#define N_PP_IS_BEGIN_PARENS(...) \
    N_PP_DETAIL_IBP_SPLIT \
      ( \
      0, \
      N_PP_DETAIL_IBP_CAT \
        ( \
        N_PP_DETAIL_IBP_IS_VARIADIC_R_, \
        N_PP_DETAIL_IBP_IS_VARIADIC_C __VA_ARGS__ \
        ) \
      ) \
/**/

#endif /* N_PP_VARIADICS_MSVC && _MSC_VER <= 1400 */
#endif /* NSL_PREPROCESSOR_IS_BEGIN_PARENS_H */
