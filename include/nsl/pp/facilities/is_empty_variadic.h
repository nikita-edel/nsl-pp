# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014,2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_FACILITIES_IS_EMPTY_VARIADIC_H
# define NSL_PP_FACILITIES_IS_EMPTY_VARIADIC_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/punctuation/is_begin_parens.h"
# include "nsl/pp/facilities/detail/is_empty.h"
#
#if N_PP_VARIADICS_MSVC && _MSC_VER <= 1400
#
#define N_PP_IS_EMPTY(param) \
    N_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      N_PP_IS_BEGIN_PARENS \
        ( \
        param \
        ) \
      ) \
      ( \
      N_PP_IS_EMPTY_ZERO, \
      N_PP_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (param) \
/**/
#define N_PP_IS_EMPTY_ZERO(param) 0
# else
# if defined(__cplusplus) && __cplusplus > 201703L
# include "nsl/pp/variadic/has_opt.h"
#define N_PP_IS_EMPTY(...) \
    N_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      N_PP_VARIADIC_HAS_OPT() \
      ) \
      ( \
      N_PP_IS_EMPTY_OPT, \
      N_PP_IS_EMPTY_NO_OPT \
      ) \
    (__VA_ARGS__) \
/**/
#define N_PP_IS_EMPTY_FUNCTION2(...) \
    __VA_OPT__(0,) 1 \
/**/
#define N_PP_IS_EMPTY_FUNCTION(...) \
    N_PP_IS_EMPTY_FUNCTION2(__VA_ARGS__) \
/**/
#define N_PP_IS_EMPTY_OPT(...) \
    N_PP_VARIADIC_HAS_OPT_ELEM0(N_PP_IS_EMPTY_FUNCTION(__VA_ARGS__),) \
/**/
# else
#define N_PP_IS_EMPTY(...) \
    N_PP_IS_EMPTY_NO_OPT(__VA_ARGS__) \
/**/
# endif /* defined(__cplusplus) && __cplusplus > 201703L */
#define N_PP_IS_EMPTY_NO_OPT(...) \
    N_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      N_PP_IS_BEGIN_PARENS \
        ( \
        __VA_ARGS__ \
        ) \
      ) \
      ( \
      N_PP_IS_EMPTY_ZERO, \
      N_PP_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (__VA_ARGS__) \
/**/
#define N_PP_IS_EMPTY_ZERO(...) 0
# endif /* N_PP_VARIADICS_MSVC && _MSC_VER <= 1400 */
# endif /* NSL_PP_FACILITIES_IS_EMPTY_VARIADIC_H */
