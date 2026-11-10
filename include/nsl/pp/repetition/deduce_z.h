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
# ifndef NSL_PREPROCESSOR_REPETITION_DEDUCE_Z_H
# define NSL_PREPROCESSOR_REPETITION_DEDUCE_Z_H
#
# include "nsl/pp/detail/auto_rec.h"
# include "nsl/pp/repetition/repeat.h"
#
# /* N_PP_DEDUCE_Z */
#
# define N_PP_DEDUCE_Z() N_PP_AUTO_REC(N_PP_REPEAT_P, 4)
#
# endif
