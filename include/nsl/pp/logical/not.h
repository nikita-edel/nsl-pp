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
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_LOGICAL_NOT_H
# define NSL_PREPROCESSOR_LOGICAL_NOT_H
#
# include "nsl/pp/config/config.h"
# include "nsl/pp/logical/bool.h"
# include "nsl/pp/logical/compl.h"
#
# /* N_PP_NOT */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_NOT(x) N_PP_COMPL(N_PP_BOOL(x))
# else
#    define N_PP_NOT(x) N_PP_NOT_I(x)
#    define N_PP_NOT_I(x) N_PP_COMPL(N_PP_BOOL(x))
# endif
#
# endif
