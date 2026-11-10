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
# include "nsl/pp/cat.h"
# include "nsl/pp/facilities.h"
# include "nsl/pp/arithmetic/add.h"
# include "nsl/pp/arithmetic/mul.h"
# include "test.h"

BEGIN N_PP_APPLY(N_PP_NIL) 0 == 0 END
BEGIN N_PP_APPLY((0)) == 0 END

BEGIN N_PP_APPLY((N_PP_EMPTY))() 0 == 0 END

# define MACRO(x, y, z) 1
# define ARGS (1, 2, 3)

BEGIN N_PP_EXPAND(MACRO ARGS) == 1 END

BEGIN N_PP_IDENTITY(1)() == 1 END
BEGIN N_PP_IDENTITY_N(36,10)(0,1,2,3,4,5,6,7,8,9) == 36 END

BEGIN N_PP_CAT(N_PP_INTERCEPT, 2) 1 == 1 END

#define OVMAC_1(x) N_PP_ADD(x,5)
#define OVMAC_2(x,y) N_PP_ADD(x,y)
#define OVMAC_3(x,y,z) N_PP_ADD(N_PP_MUL(x,y),z)
#define OVMAC_4(x,y,z,a) N_PP_ADD(N_PP_MUL(x,y),N_PP_MUL(a,z))

#if N_PP_VARIADICS_MSVC

#define OVTEST(...) N_PP_CAT(N_PP_OVERLOAD(OVMAC_,__VA_ARGS__)(__VA_ARGS__),N_PP_EMPTY())

#else

#define OVTEST(...) N_PP_OVERLOAD(OVMAC_,__VA_ARGS__)(__VA_ARGS__)

#endif

BEGIN OVTEST(3,4,5) == 17 END
BEGIN OVTEST(9,3,2,7) == 41 END
BEGIN OVTEST(8) == 13 END
BEGIN OVTEST(24,61) == 85 END
