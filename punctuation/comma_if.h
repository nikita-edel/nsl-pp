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
# ifndef NSL_PREPROCESSOR_PUNCTUATION_COMMA_IF_H
# define NSL_PREPROCESSOR_PUNCTUATION_COMMA_IF_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/facilities/empty.h"
# include "nsl/preprocessor/punctuation/comma.h"
#
# /* N_PP_COMMA_IF */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_COMMA_IF(cond) N_PP_IF(cond, N_PP_COMMA, N_PP_EMPTY)()
# else
#    define N_PP_COMMA_IF(cond) N_PP_COMMA_IF_I(cond)
#    define N_PP_COMMA_IF_I(cond) N_PP_IF(cond, N_PP_COMMA, N_PP_EMPTY)()
# endif
#
# endif
