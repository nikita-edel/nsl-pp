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
# ifndef NSL_PREPROCESSOR_SEQ_FOR_EACH_PRODUCT_H
# define NSL_PREPROCESSOR_SEQ_FOR_EACH_PRODUCT_H
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/repetition/for.h"
# include "nsl/pp/seq/seq.h"
# include "nsl/pp/seq/size.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
#
# /* N_PP_SEQ_FOR_EACH_PRODUCT */
#
# define N_PP_SEQ_FOR_EACH_PRODUCT(macro, sets) N_PP_SEQ_FOR_EACH_PRODUCT_E(N_PP_FOR, macro, sets)
#
# /* N_PP_SEQ_FOR_EACH_PRODUCT_R */
#
# define N_PP_SEQ_FOR_EACH_PRODUCT_R(r, macro, sets) N_PP_SEQ_FOR_EACH_PRODUCT_E(N_PP_FOR_ ## r, macro, sets)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FOR_EACH_PRODUCT_E(impl, macro, sets) impl((N_PP_SEQ_HEAD(sets)(nil), N_PP_SEQ_TAIL(sets)(nil), (nil), macro), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_0)
# else
#    define N_PP_SEQ_FOR_EACH_PRODUCT_E(impl, macro, sets) N_PP_SEQ_FOR_EACH_PRODUCT_E_I(impl, macro, sets)
#    define N_PP_SEQ_FOR_EACH_PRODUCT_E_I(impl, macro, sets) impl((N_PP_SEQ_HEAD(sets)(nil), N_PP_SEQ_TAIL(sets)(nil), (nil), macro), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_0)
# endif
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#    define N_PP_SEQ_FOR_EACH_PRODUCT_P(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_P_I data
#    define N_PP_SEQ_FOR_EACH_PRODUCT_P_I(cset, rset, res, macro) N_PP_DEC(N_PP_SEQ_SIZE(cset))
# else
#    define N_PP_SEQ_FOR_EACH_PRODUCT_P(r, data) N_PP_DEC(N_PP_SEQ_SIZE(N_PP_TUPLE_ELEM(4, 0, data)))
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SEQ_FOR_EACH_PRODUCT_O(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_O_I data
#    define N_PP_SEQ_FOR_EACH_PRODUCT_O_I(cset, rset, res, macro) (N_PP_SEQ_TAIL(cset), rset, res, macro)
# else
#    define N_PP_SEQ_FOR_EACH_PRODUCT_O(r, data) (N_PP_SEQ_TAIL(N_PP_TUPLE_ELEM(4, 0, data)), N_PP_TUPLE_ELEM(4, 1, data), N_PP_TUPLE_ELEM(4, 2, data), N_PP_TUPLE_ELEM(4, 3, data))
# endif
#
# define N_PP_SEQ_FOR_EACH_PRODUCT_C(data, i) N_PP_IF(N_PP_DEC(N_PP_SEQ_SIZE(N_PP_TUPLE_ELEM(4, 1, data))), N_PP_SEQ_FOR_EACH_PRODUCT_N_ ## i, N_PP_SEQ_FOR_EACH_PRODUCT_I)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_FOR_EACH_PRODUCT_I(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_I_I(r, N_PP_TUPLE_ELEM(4, 0, data), N_PP_TUPLE_ELEM(4, 1, data), N_PP_TUPLE_ELEM(4, 2, data), N_PP_TUPLE_ELEM(4, 3, data))
# else
#    define N_PP_SEQ_FOR_EACH_PRODUCT_I(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_I_IM(r, N_PP_TUPLE_REM_4 data)
#    define N_PP_SEQ_FOR_EACH_PRODUCT_I_IM(r, im) N_PP_SEQ_FOR_EACH_PRODUCT_I_I(r, im)
# endif
#
# define N_PP_SEQ_FOR_EACH_PRODUCT_I_I(r, cset, rset, res, macro) macro(r, N_PP_SEQ_TAIL(res (N_PP_SEQ_HEAD(cset))))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SEQ_FOR_EACH_PRODUCT_H(data) N_PP_SEQ_FOR_EACH_PRODUCT_H_I data
# else
#    define N_PP_SEQ_FOR_EACH_PRODUCT_H(data) N_PP_SEQ_FOR_EACH_PRODUCT_H_I(N_PP_TUPLE_ELEM(4, 0, data), N_PP_TUPLE_ELEM(4, 1, data), N_PP_TUPLE_ELEM(4, 2, data), N_PP_TUPLE_ELEM(4, 3, data))
# endif
#
# define N_PP_SEQ_FOR_EACH_PRODUCT_H_I(cset, rset, res, macro) (N_PP_SEQ_HEAD(rset)(nil), N_PP_SEQ_TAIL(rset), res (N_PP_SEQ_HEAD(cset)), macro)
#
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_0(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 0)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_1(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 1)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_2(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 2)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_3(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 3)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_4(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 4)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_5(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 5)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_6(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 6)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_7(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 7)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_8(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 8)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_9(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 9)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_10(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 10)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_11(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 11)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_12(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 12)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_13(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 13)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_14(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 14)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_15(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 15)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_16(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 16)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_17(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 17)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_18(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 18)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_19(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 19)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_20(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 20)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_21(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 21)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_22(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 22)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_23(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 23)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_24(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 24)(r, data)
# define N_PP_SEQ_FOR_EACH_PRODUCT_M_25(r, data) N_PP_SEQ_FOR_EACH_PRODUCT_C(data, 25)(r, data)
#
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_0(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_1)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_1(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_2)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_2(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_3)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_3(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_4)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_4(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_5)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_5(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_6)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_6(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_7)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_7(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_8)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_8(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_9)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_9(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_10)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_10(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_11)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_11(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_12)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_12(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_13)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_13(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_14)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_14(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_15)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_15(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_16)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_16(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_17)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_17(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_18)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_18(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_19)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_19(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_20)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_20(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_21)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_21(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_22)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_22(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_23)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_23(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_24)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_24(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_25)
# define N_PP_SEQ_FOR_EACH_PRODUCT_N_25(r, data) N_PP_FOR_ ## r(N_PP_SEQ_FOR_EACH_PRODUCT_H(data), N_PP_SEQ_FOR_EACH_PRODUCT_P, N_PP_SEQ_FOR_EACH_PRODUCT_O, N_PP_SEQ_FOR_EACH_PRODUCT_M_26)
#
# endif
