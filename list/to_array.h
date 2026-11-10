# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.
#  *     (C) Copyright Edward Diener 2011,2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_LIST_TO_ARRAY_H
# define NSL_PP_LIST_TO_ARRAY_H
#
# include "nsl/pp/arithmetic/dec.h"
# include "nsl/pp/arithmetic/inc.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/while.h"
# include "nsl/pp/list/adt.h"
# include "nsl/pp/tuple/elem.h"
# include "nsl/pp/tuple/rem.h"
# if N_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# include "nsl/pp/control/iif.h"
# endif
#
# /* N_PP_LIST_TO_ARRAY */
#
# if N_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# define N_PP_LIST_TO_ARRAY(list) \
    N_PP_IIF \
        ( \
        N_PP_LIST_IS_NIL(list), \
        N_PP_LIST_TO_ARRAY_VC8ORLESS_EMPTY, \
        N_PP_LIST_TO_ARRAY_VC8ORLESS_DO \
        ) \
    (list) \
/**/
# define N_PP_LIST_TO_ARRAY_VC8ORLESS_EMPTY(list) (0,())
# define N_PP_LIST_TO_ARRAY_VC8ORLESS_DO(list) N_PP_LIST_TO_ARRAY_I(N_PP_WHILE, list)
# else
# define N_PP_LIST_TO_ARRAY(list) N_PP_LIST_TO_ARRAY_I(N_PP_WHILE, list)
# endif

# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_LIST_TO_ARRAY_I(w, list) \
        N_PP_LIST_TO_ARRAY_II(((N_PP_TUPLE_REM_CTOR( \
            3, \
            w(N_PP_LIST_TO_ARRAY_P, N_PP_LIST_TO_ARRAY_O, (list, 1, (~))) \
        )))) \
        /**/
#    define N_PP_LIST_TO_ARRAY_II(p) N_PP_LIST_TO_ARRAY_II_B(p)
#    define N_PP_LIST_TO_ARRAY_II_B(p) N_PP_LIST_TO_ARRAY_II_C ## p
#    define N_PP_LIST_TO_ARRAY_II_C(p) N_PP_LIST_TO_ARRAY_III p
# else
#    define N_PP_LIST_TO_ARRAY_I(w, list) \
        N_PP_LIST_TO_ARRAY_II(N_PP_TUPLE_REM_CTOR( \
            3, \
            w(N_PP_LIST_TO_ARRAY_P, N_PP_LIST_TO_ARRAY_O, (list, 1, (~))) \
        )) \
        /**/
#    define N_PP_LIST_TO_ARRAY_II(im) N_PP_LIST_TO_ARRAY_III(im)
# endif
# define N_PP_LIST_TO_ARRAY_III(list, size, tuple) (N_PP_DEC(size), N_PP_LIST_TO_ARRAY_IV tuple)
# define N_PP_LIST_TO_ARRAY_IV(_, ...) (__VA_ARGS__)
# define N_PP_LIST_TO_ARRAY_P(d, state) N_PP_LIST_IS_CONS(N_PP_TUPLE_ELEM(3, 0, state))
# define N_PP_LIST_TO_ARRAY_O(d, state) N_PP_LIST_TO_ARRAY_O_I state
# define N_PP_LIST_TO_ARRAY_O_I(list, size, tuple) (N_PP_LIST_REST(list), N_PP_INC(size), (N_PP_TUPLE_REM(size) tuple, N_PP_LIST_FIRST(list)))
#
# /* N_PP_LIST_TO_ARRAY_D */
#
# if N_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# define N_PP_LIST_TO_ARRAY_D(d, list) \
    N_PP_IIF \
        ( \
        N_PP_LIST_IS_NIL(list), \
        N_PP_LIST_TO_ARRAY_D_VC8ORLESS_EMPTY, \
        N_PP_LIST_TO_ARRAY_D_VC8ORLESS_DO \
        ) \
    (d, list) \
/**/
# define N_PP_LIST_TO_ARRAY_D_VC8ORLESS_EMPTY(d, list) (0,())
# define N_PP_LIST_TO_ARRAY_D_VC8ORLESS_DO(d, list) N_PP_LIST_TO_ARRAY_I(N_PP_WHILE_ ## d, list)
# else
# define N_PP_LIST_TO_ARRAY_D(d, list) N_PP_LIST_TO_ARRAY_I(N_PP_WHILE_ ## d, list)
# endif
#
# endif /* NSL_PP_LIST_TO_ARRAY_H */
