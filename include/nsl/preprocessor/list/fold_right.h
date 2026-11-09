# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_LIST_FOLD_RIGHT_H
# define NSL_PREPROCESSOR_LIST_FOLD_RIGHT_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
#
# if 0
#    define N_PP_LIST_FOLD_RIGHT(op, state, list)
# endif
#
# define N_PP_LIST_FOLD_RIGHT N_PP_CAT(N_PP_LIST_FOLD_RIGHT_, N_PP_AUTO_REC(N_PP_WHILE_P, 256))
#
# define N_PP_LIST_FOLD_RIGHT_257(o, s, l) N_PP_ERROR(0x0004)
#
# define N_PP_LIST_FOLD_RIGHT_D(d, o, s, l) N_PP_LIST_FOLD_RIGHT_ ## d(o, s, l)
# define N_PP_LIST_FOLD_RIGHT_2ND N_PP_LIST_FOLD_RIGHT
# define N_PP_LIST_FOLD_RIGHT_2ND_D N_PP_LIST_FOLD_RIGHT_D
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    include "nsl/preprocessor/list/detail/edg/fold_right.h"
# else
#    include "nsl/preprocessor/list/detail/fold_right.h"
# endif
#
# else
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
#
# if 0
#    define N_PP_LIST_FOLD_RIGHT(op, state, list)
# endif
#
# include "nsl/preprocessor/config/limits.h"
#
# if N_PP_LIMIT_WHILE == 256
# define N_PP_LIST_FOLD_RIGHT N_PP_CAT(N_PP_LIST_FOLD_RIGHT_, N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 256)))
# define N_PP_LIST_FOLD_RIGHT_257(o, s, l) N_PP_ERROR(0x0004)
# elif N_PP_LIMIT_WHILE == 512
# define N_PP_LIST_FOLD_RIGHT N_PP_CAT(N_PP_LIST_FOLD_RIGHT_, N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 512)))
# define N_PP_LIST_FOLD_RIGHT_513(o, s, l) N_PP_ERROR(0x0004)
# elif N_PP_LIMIT_WHILE == 1024
# define N_PP_LIST_FOLD_RIGHT N_PP_CAT(N_PP_LIST_FOLD_RIGHT_, N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 1024)))
# define N_PP_LIST_FOLD_RIGHT_1025(o, s, l) N_PP_ERROR(0x0004)
# else
# error Incorrect value for the N_PP_LIMIT_WHILE limit
# endif
#
# define N_PP_LIST_FOLD_RIGHT_D(d, o, s, l) N_PP_LIST_FOLD_RIGHT_ ## d(o, s, l)
# define N_PP_LIST_FOLD_RIGHT_2ND N_PP_LIST_FOLD_RIGHT
# define N_PP_LIST_FOLD_RIGHT_2ND_D N_PP_LIST_FOLD_RIGHT_D
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    include "nsl/preprocessor/list/detail/edg/fold_right.h"
# else
#    include "nsl/preprocessor/list/detail/fold_right.h"
# endif
#
# endif
#
# endif
