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
# ifndef NSL_PREPROCESSOR_PUNCTUATION_PAREN_IF_H
# define NSL_PREPROCESSOR_PUNCTUATION_PAREN_IF_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/facilities/empty.h"
# include "nsl/preprocessor/punctuation/paren.h"
#
# /* N_PP_LPAREN_IF */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LPAREN_IF(cond) N_PP_IF(cond, N_PP_LPAREN, N_PP_EMPTY)()
# else
#    define N_PP_LPAREN_IF(cond) N_PP_LPAREN_IF_I(cond)
#    define N_PP_LPAREN_IF_I(cond) N_PP_IF(cond, N_PP_LPAREN, N_PP_EMPTY)()
# endif
#
# /* N_PP_RPAREN_IF */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_RPAREN_IF(cond) N_PP_IF(cond, N_PP_RPAREN, N_PP_EMPTY)()
# else
#    define N_PP_RPAREN_IF(cond) N_PP_RPAREN_IF_I(cond)
#    define N_PP_RPAREN_IF_I(cond) N_PP_IF(cond, N_PP_RPAREN, N_PP_EMPTY)()
# endif
#
# endif
