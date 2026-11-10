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
# ifndef NSL_PP_DEBUG_LINE_H
# define NSL_PP_DEBUG_LINE_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/iteration/iterate.h"
# include "nsl/pp/stringize.h"
#
# /* N_PP_LINE */
#
# if N_PP_CONFIG_EXTENDED_LINE_INFO
#    define N_PP_LINE(line, file) line N_PP_CAT(N_PP_LINE_, N_PP_IS_ITERATING)(file)
#    define N_PP_LINE_N_PP_IS_ITERATING(file) #file
#    define N_PP_LINE_1(file) N_PP_STR(file N_PP_CAT(N_PP_LINE_I_, N_PP_ITERATION_DEPTH())())
#    define N_PP_LINE_I_1() [N_PP_FRAME_ITERATION(1)]
#    define N_PP_LINE_I_2() N_PP_LINE_I_1()[N_PP_FRAME_ITERATION(2)]
#    define N_PP_LINE_I_3() N_PP_LINE_I_2()[N_PP_FRAME_ITERATION(3)]
#    define N_PP_LINE_I_4() N_PP_LINE_I_3()[N_PP_FRAME_ITERATION(4)]
#    define N_PP_LINE_I_5() N_PP_LINE_I_4()[N_PP_FRAME_ITERATION(5)]
# else
#    define N_PP_LINE(line, file) line __FILE__
# endif
#
# endif
