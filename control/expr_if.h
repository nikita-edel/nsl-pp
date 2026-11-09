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
# ifndef NSL_PREPROCESSOR_CONTROL_EXPR_IF_H
# define NSL_PREPROCESSOR_CONTROL_EXPR_IF_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/expr_iif.h"
# include "nsl/preprocessor/logical/bool.h"
#
# /* N_PP_EXPR_IF */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_EXPR_IF(cond, expr) N_PP_EXPR_IIF(N_PP_BOOL(cond), expr)
# else
#    define N_PP_EXPR_IF(cond, expr) N_PP_EXPR_IF_I(cond, expr)
#    define N_PP_EXPR_IF_I(cond, expr) N_PP_EXPR_IIF(N_PP_BOOL(cond), expr)
# endif
#
# endif
