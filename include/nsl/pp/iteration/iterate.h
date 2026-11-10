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
# ifndef NSL_PP_ITERATION_ITERATE_H
# define NSL_PP_ITERATION_ITERATE_H
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/array/elem.h"
# include "nsl/pp/array/size.h"
# include "nsl/pp/cat.h"
# include "nsl/pp/slot/slot.h"
# include "nsl/pp/tuple/elem.h"
#
# /* N_PP_ITERATION_DEPTH */
#
# define N_PP_ITERATION_DEPTH() 0
#
# /* N_PP_ITERATION */
#
# define N_PP_ITERATION() N_PP_CAT(N_PP_ITERATION_, N_PP_ITERATION_DEPTH())
#
# /* N_PP_ITERATION_START && N_PP_ITERATION_FINISH */
#
# define N_PP_ITERATION_START() N_PP_CAT(N_PP_ITERATION_START_, N_PP_ITERATION_DEPTH())
# define N_PP_ITERATION_FINISH() N_PP_CAT(N_PP_ITERATION_FINISH_, N_PP_ITERATION_DEPTH())
#
# /* N_PP_ITERATION_FLAGS */
#
# define N_PP_ITERATION_FLAGS() (N_PP_CAT(N_PP_ITERATION_FLAGS_, N_PP_ITERATION_DEPTH())())
#
# /* N_PP_FRAME_ITERATION */
#
# define N_PP_FRAME_ITERATION(i) N_PP_CAT(N_PP_ITERATION_, i)
#
# /* N_PP_FRAME_START && N_PP_FRAME_FINISH */
#
# define N_PP_FRAME_START(i) N_PP_CAT(N_PP_ITERATION_START_, i)
# define N_PP_FRAME_FINISH(i) N_PP_CAT(N_PP_ITERATION_FINISH_, i)
#
# /* N_PP_FRAME_FLAGS */
#
# define N_PP_FRAME_FLAGS(i) (N_PP_CAT(N_PP_ITERATION_FLAGS_, i)())
#
# /* N_PP_RELATIVE_ITERATION */
#
# define N_PP_RELATIVE_ITERATION(i) N_PP_CAT(N_PP_RELATIVE_, i)(N_PP_ITERATION_)
#
# define N_PP_RELATIVE_0(m) N_PP_CAT(m, N_PP_ITERATION_DEPTH())
# define N_PP_RELATIVE_1(m) N_PP_CAT(m, N_PP_DEC(N_PP_ITERATION_DEPTH()))
# define N_PP_RELATIVE_2(m) N_PP_CAT(m, N_PP_DEC(N_PP_DEC(N_PP_ITERATION_DEPTH())))
# define N_PP_RELATIVE_3(m) N_PP_CAT(m, N_PP_DEC(N_PP_DEC(N_PP_DEC(N_PP_ITERATION_DEPTH()))))
# define N_PP_RELATIVE_4(m) N_PP_CAT(m, N_PP_DEC(N_PP_DEC(N_PP_DEC(N_PP_DEC(N_PP_ITERATION_DEPTH())))))
#
# /* N_PP_RELATIVE_START && N_PP_RELATIVE_FINISH */
#
# define N_PP_RELATIVE_START(i) N_PP_CAT(N_PP_RELATIVE_, i)(N_PP_ITERATION_START_)
# define N_PP_RELATIVE_FINISH(i) N_PP_CAT(N_PP_RELATIVE_, i)(N_PP_ITERATION_FINISH_)
#
# /* N_PP_RELATIVE_FLAGS */
#
# define N_PP_RELATIVE_FLAGS(i) (N_PP_CAT(N_PP_RELATIVE_, i)(N_PP_ITERATION_FLAGS_)())
#
# /* N_PP_ITERATE */
#
# define N_PP_ITERATE() N_PP_CAT(N_PP_ITERATE_, N_PP_INC(N_PP_ITERATION_DEPTH()))
#
# define N_PP_ITERATE_1 <nsl/pp/iteration/detail/iter/forward1.h>
# define N_PP_ITERATE_2 <nsl/pp/iteration/detail/iter/forward2.h>
# define N_PP_ITERATE_3 <nsl/pp/iteration/detail/iter/forward3.h>
# define N_PP_ITERATE_4 <nsl/pp/iteration/detail/iter/forward4.h>
# define N_PP_ITERATE_5 <nsl/pp/iteration/detail/iter/forward5.h>
#
# endif
