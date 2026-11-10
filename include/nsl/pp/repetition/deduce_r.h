# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_REPETITION_DEDUCE_R_H
# define NSL_PP_REPETITION_DEDUCE_R_H
#
# include "nsl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/pp/detail/auto_rec.h"
# include "nsl/pp/repetition/for.h"
#
# /* N_PP_DEDUCE_R */
#
# define N_PP_DEDUCE_R() N_PP_AUTO_REC(N_PP_FOR_P, 256)
#
# else
#
# /* N_PP_DEDUCE_R */
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/detail/auto_rec.h"
# include "nsl/pp/repetition/for.h"
# include "nsl/pp/config/limits.h"
#
# if N_PP_LIMIT_FOR == 256
# define N_PP_DEDUCE_R() N_PP_DEC(N_PP_AUTO_REC(N_PP_FOR_P, 256))
# elif N_PP_LIMIT_FOR == 512
# define N_PP_DEDUCE_R() N_PP_DEC(N_PP_AUTO_REC(N_PP_FOR_P, 512))
# elif N_PP_LIMIT_FOR == 1024
# define N_PP_DEDUCE_R() N_PP_DEC(N_PP_AUTO_REC(N_PP_FOR_P, 1024))
# else
# error Incorrect value for the N_PP_LIMIT_FOR limit
# endif
#
# endif
#
# endif
