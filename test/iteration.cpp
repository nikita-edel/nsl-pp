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
# include "nsl/pp/config/limits.h"
#
# if !N_PP_IS_SELFISH
#
# include "iteration.h"
#
# define TEST(n) BEGIN n == n END
#
# define N_PP_LOCAL_MACRO(n) TEST(n)
# define N_PP_LOCAL_LIMITS (1, 5)
# include N_PP_LOCAL_ITERATE()
#
# define N_PP_LOCAL_MACRO(n) TEST(n)
# define N_PP_LOCAL_LIMITS (5, 1)
# include N_PP_LOCAL_ITERATE()
#
# if N_PP_LIMIT_ITERATION != 256
#
# define N_PP_LOCAL_MACRO(n) int N_PP_CAT(int_li_f_,n) = n ;
# define N_PP_LOCAL_LIMITS (0, N_PP_LIMIT_ITERATION)
# include N_PP_LOCAL_ITERATE()
#
# define N_PP_LOCAL_MACRO(n) int N_PP_CAT(int_li_r_,n) = n ;
# define N_PP_LOCAL_LIMITS (N_PP_LIMIT_ITERATION, 0)
# include N_PP_LOCAL_ITERATE()
#
# endif
#
# define N_PP_INDIRECT_SELF "iteration.cpp"
# include N_PP_INCLUDE_SELF()
#
# else

BEGIN N_PP_IS_SELFISH == 1 END

# endif
