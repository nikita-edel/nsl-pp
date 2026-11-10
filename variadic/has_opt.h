# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_VARIADIC_HAS_OPT_H
# define NSL_PP_VARIADIC_HAS_OPT_H
#
# include "nsl/pp/config/config.h"
#
# /* N_PP_VARIADIC_HAS_OPT */
#
# if defined(__cplusplus) && __cplusplus > 201703L
#  if defined(__GNUC__) && !defined(__clang__) && __GNUC__ >= 8 && __GNUC__ < 10
#   define N_PP_VARIADIC_HAS_OPT() 0
#  elif defined(__clang__) && __clang_major__ < 9
#   define N_PP_VARIADIC_HAS_OPT() 0
#  else
#   include "nsl/pp/variadic/detail/has_opt.h"
#   define N_PP_VARIADIC_HAS_OPT() \
  N_PP_VARIADIC_HAS_OPT_ELEM2(N_PP_VARIADIC_HAS_OPT_FUNCTION(?),) \
/**/
#  endif
# else
# define N_PP_VARIADIC_HAS_OPT() 0
# endif
#
# endif
