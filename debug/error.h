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
# ifndef NSL_PREPROCESSOR_DEBUG_ERROR_H
# define NSL_PREPROCESSOR_DEBUG_ERROR_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_ERROR */
#
# if N_PP_CONFIG_ERRORS
#    define N_PP_ERROR(code) N_PP_CAT(N_PP_ERROR_, code)
# endif
#
# define N_PP_ERROR_0x0000 N_PP_ERROR(0x0000, N_PP_INDEX_OUT_OF_BOUNDS)
# define N_PP_ERROR_0x0001 N_PP_ERROR(0x0001, N_PP_WHILE_OVERFLOW)
# define N_PP_ERROR_0x0002 N_PP_ERROR(0x0002, N_PP_FOR_OVERFLOW)
# define N_PP_ERROR_0x0003 N_PP_ERROR(0x0003, N_PP_REPEAT_OVERFLOW)
# define N_PP_ERROR_0x0004 N_PP_ERROR(0x0004, N_PP_LIST_FOLD_OVERFLOW)
# define N_PP_ERROR_0x0005 N_PP_ERROR(0x0005, N_PP_SEQ_FOLD_OVERFLOW)
# define N_PP_ERROR_0x0006 N_PP_ERROR(0x0006, N_PP_ARITHMETIC_OVERFLOW)
# define N_PP_ERROR_0x0007 N_PP_ERROR(0x0007, N_PP_DIVISION_BY_ZERO)
#
# endif
