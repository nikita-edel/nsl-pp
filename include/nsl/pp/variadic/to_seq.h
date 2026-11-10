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
# ifndef NSL_PREPROCESSOR_VARIADIC_TO_SEQ_H
# define NSL_PREPROCESSOR_VARIADIC_TO_SEQ_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/tuple/to_seq.h"
#
# /* N_PP_VARIADIC_TO_SEQ */
#
# define N_PP_VARIADIC_TO_SEQ(...) N_PP_TUPLE_TO_SEQ((__VA_ARGS__))
#
# endif
