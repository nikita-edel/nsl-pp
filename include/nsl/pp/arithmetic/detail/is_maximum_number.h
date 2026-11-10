# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2020.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_ARITHMETIC_DETAIL_IS_MAXIMUM_NUMBER_H
# define NSL_PP_ARITHMETIC_DETAIL_IS_MAXIMUM_NUMBER_H
#
# /* N_PP_DETAIL_IS_MAXIMUM_NUMBER */
#
# include "nsl/pp/comparison/equal.h"
# include "nsl/pp/arithmetic/detail/maximum_number.h"
#
# define N_PP_DETAIL_IS_MAXIMUM_NUMBER(x) N_PP_EQUAL(x,N_PP_DETAIL_MAXIMUM_NUMBER)
#
# endif
