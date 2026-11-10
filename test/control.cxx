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
# include "nsl/pp/config/limits.h"
# include "nsl/pp/arithmetic/add.h"
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/control.h"
# include "test.h"

# define TR(x) 1

BEGIN N_PP_EXPR_IIF(0, TR)(0) == 0 END
BEGIN N_PP_EXPR_IIF(1, TR)(0) == 1 END

BEGIN N_PP_EXPR_IF(3, TR)(0) == 1 END
BEGIN N_PP_EXPR_IF(0, TR)(0) == 0 END

BEGIN N_PP_IIF(0, 1, 0) == 0 END
BEGIN N_PP_IIF(1, 1, 0) == 1 END

BEGIN N_PP_IF(0, 1, 0) == 0 END
BEGIN N_PP_IF(9, 1, 0) == 1 END

# define PRED(d, state) state
# define OP_1(d, state) N_PP_DEC(state)

BEGIN N_PP_WHILE(PRED, OP_1, 50) == 0 END

# define OP_2(d, state) N_PP_DEC(N_PP_ADD(N_PP_WHILE(PRED, OP_1, state), state))
# define OP_3(d, state) N_PP_DEC(N_PP_ADD_D(d, N_PP_WHILE_ ## d(PRED, OP_1, state), state))

BEGIN N_PP_WHILE(PRED, OP_2, 10) == 0 END
BEGIN N_PP_WHILE(PRED, OP_3, 10) == 0 END

#if N_PP_LIMIT_MAG != 256

BEGIN N_PP_WHILE(PRED, OP_1, N_PP_LIMIT_MAG) == 0 END

#endif
