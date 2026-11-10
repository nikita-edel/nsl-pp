# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002-2011.                             *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_TUPLE_TO_SEQ_H
# define NSL_PP_TUPLE_TO_SEQ_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/facilities/overload.h"
# include "nsl/pp/tuple/size.h"
# include "nsl/pp/variadic/size.h"
# include "nsl/pp/variadic/has_opt.h"
#
# /* N_PP_TUPLE_TO_SEQ */
#
# if N_PP_VARIADICS_MSVC
#     define N_PP_TUPLE_TO_SEQ(...) N_PP_TUPLE_TO_SEQ_I(N_PP_OVERLOAD(N_PP_TUPLE_TO_SEQ_O_, __VA_ARGS__), (__VA_ARGS__))
#     define N_PP_TUPLE_TO_SEQ_I(m, args) N_PP_TUPLE_TO_SEQ_II(m, args)
#     define N_PP_TUPLE_TO_SEQ_II(m, args) N_PP_CAT(m ## args,)
#     define N_PP_TUPLE_TO_SEQ_O_1(tuple) N_PP_CAT(N_PP_TUPLE_TO_SEQ_, N_PP_TUPLE_SIZE(tuple)) tuple
# else
#     define N_PP_TUPLE_TO_SEQ(...) N_PP_OVERLOAD(N_PP_TUPLE_TO_SEQ_O_, __VA_ARGS__)(__VA_ARGS__)
#     if N_PP_VARIADIC_HAS_OPT()
#         define N_PP_TUPLE_TO_SEQ_O_1(tuple) N_PP_TUPLE_TO_SEQ_O_1_SIZE(N_PP_VARIADIC_SIZE tuple, tuple)
#         define N_PP_TUPLE_TO_SEQ_O_1_SIZE(size,tuple) N_PP_CAT(N_PP_TUPLE_TO_SEQ_, N_PP_IF(size,size,1)) tuple
#     else
#         define N_PP_TUPLE_TO_SEQ_O_1(tuple) N_PP_CAT(N_PP_TUPLE_TO_SEQ_, N_PP_VARIADIC_SIZE tuple) tuple
#     endif
# endif
# define N_PP_TUPLE_TO_SEQ_O_2(size, tuple) N_PP_TUPLE_TO_SEQ_O_1(tuple)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
/* An empty array can be passed */
# define N_PP_TUPLE_TO_SEQ_0() ()
#
# define N_PP_TUPLE_TO_SEQ_1(e0) (e0)
# define N_PP_TUPLE_TO_SEQ_2(e0, e1) (e0)(e1)
# define N_PP_TUPLE_TO_SEQ_3(e0, e1, e2) (e0)(e1)(e2)
# define N_PP_TUPLE_TO_SEQ_4(e0, e1, e2, e3) (e0)(e1)(e2)(e3)
# define N_PP_TUPLE_TO_SEQ_5(e0, e1, e2, e3, e4) (e0)(e1)(e2)(e3)(e4)
# define N_PP_TUPLE_TO_SEQ_6(e0, e1, e2, e3, e4, e5) (e0)(e1)(e2)(e3)(e4)(e5)
# define N_PP_TUPLE_TO_SEQ_7(e0, e1, e2, e3, e4, e5, e6) (e0)(e1)(e2)(e3)(e4)(e5)(e6)
# define N_PP_TUPLE_TO_SEQ_8(e0, e1, e2, e3, e4, e5, e6, e7) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)
# define N_PP_TUPLE_TO_SEQ_9(e0, e1, e2, e3, e4, e5, e6, e7, e8) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)
# define N_PP_TUPLE_TO_SEQ_10(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)
# define N_PP_TUPLE_TO_SEQ_11(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)
# define N_PP_TUPLE_TO_SEQ_12(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)
# define N_PP_TUPLE_TO_SEQ_13(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)
# define N_PP_TUPLE_TO_SEQ_14(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)
# define N_PP_TUPLE_TO_SEQ_15(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)
# define N_PP_TUPLE_TO_SEQ_16(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)
# define N_PP_TUPLE_TO_SEQ_17(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)
# define N_PP_TUPLE_TO_SEQ_18(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)
# define N_PP_TUPLE_TO_SEQ_19(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)
# define N_PP_TUPLE_TO_SEQ_20(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)
# define N_PP_TUPLE_TO_SEQ_21(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)
# define N_PP_TUPLE_TO_SEQ_22(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)
# define N_PP_TUPLE_TO_SEQ_23(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)
# define N_PP_TUPLE_TO_SEQ_24(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)
# define N_PP_TUPLE_TO_SEQ_25(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)
# define N_PP_TUPLE_TO_SEQ_26(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)
# define N_PP_TUPLE_TO_SEQ_27(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)
# define N_PP_TUPLE_TO_SEQ_28(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)
# define N_PP_TUPLE_TO_SEQ_29(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)
# define N_PP_TUPLE_TO_SEQ_30(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)
# define N_PP_TUPLE_TO_SEQ_31(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)
# define N_PP_TUPLE_TO_SEQ_32(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)
# define N_PP_TUPLE_TO_SEQ_33(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)
# define N_PP_TUPLE_TO_SEQ_34(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)
# define N_PP_TUPLE_TO_SEQ_35(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)
# define N_PP_TUPLE_TO_SEQ_36(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)
# define N_PP_TUPLE_TO_SEQ_37(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)
# define N_PP_TUPLE_TO_SEQ_38(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)
# define N_PP_TUPLE_TO_SEQ_39(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)
# define N_PP_TUPLE_TO_SEQ_40(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)
# define N_PP_TUPLE_TO_SEQ_41(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)
# define N_PP_TUPLE_TO_SEQ_42(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)
# define N_PP_TUPLE_TO_SEQ_43(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)
# define N_PP_TUPLE_TO_SEQ_44(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)
# define N_PP_TUPLE_TO_SEQ_45(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)
# define N_PP_TUPLE_TO_SEQ_46(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)
# define N_PP_TUPLE_TO_SEQ_47(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)
# define N_PP_TUPLE_TO_SEQ_48(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)
# define N_PP_TUPLE_TO_SEQ_49(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)
# define N_PP_TUPLE_TO_SEQ_50(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)
# define N_PP_TUPLE_TO_SEQ_51(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)
# define N_PP_TUPLE_TO_SEQ_52(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)
# define N_PP_TUPLE_TO_SEQ_53(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)
# define N_PP_TUPLE_TO_SEQ_54(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)
# define N_PP_TUPLE_TO_SEQ_55(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)
# define N_PP_TUPLE_TO_SEQ_56(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)
# define N_PP_TUPLE_TO_SEQ_57(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)
# define N_PP_TUPLE_TO_SEQ_58(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)
# define N_PP_TUPLE_TO_SEQ_59(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)(e58)
# define N_PP_TUPLE_TO_SEQ_60(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)(e58)(e59)
# define N_PP_TUPLE_TO_SEQ_61(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)(e58)(e59)(e60)
# define N_PP_TUPLE_TO_SEQ_62(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60, e61) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)(e58)(e59)(e60)(e61)
# define N_PP_TUPLE_TO_SEQ_63(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60, e61, e62) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)(e58)(e59)(e60)(e61)(e62)
# define N_PP_TUPLE_TO_SEQ_64(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60, e61, e62, e63) (e0)(e1)(e2)(e3)(e4)(e5)(e6)(e7)(e8)(e9)(e10)(e11)(e12)(e13)(e14)(e15)(e16)(e17)(e18)(e19)(e20)(e21)(e22)(e23)(e24)(e25)(e26)(e27)(e28)(e29)(e30)(e31)(e32)(e33)(e34)(e35)(e36)(e37)(e38)(e39)(e40)(e41)(e42)(e43)(e44)(e45)(e46)(e47)(e48)(e49)(e50)(e51)(e52)(e53)(e54)(e55)(e56)(e57)(e58)(e59)(e60)(e61)(e62)(e63)
#
# else
#
# include "nsl/pp/config/limits.h"
#
# if N_PP_LIMIT_TUPLE == 64
# include "nsl/pp/tuple/limits/to_seq_64.h"
# elif N_PP_LIMIT_TUPLE == 128
# include "nsl/pp/tuple/limits/to_seq_64.h"
# include "nsl/pp/tuple/limits/to_seq_128.h"
# elif N_PP_LIMIT_TUPLE == 256
# include "nsl/pp/tuple/limits/to_seq_64.h"
# include "nsl/pp/tuple/limits/to_seq_128.h"
# include "nsl/pp/tuple/limits/to_seq_256.h"
# else
# error Incorrect value for the N_PP_LIMIT_TUPLE limit
# endif
#
# endif
#
# endif
