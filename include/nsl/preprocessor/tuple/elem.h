# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002-2011) */
# /* Revised by Edward Diener (2011,2014,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_TUPLE_ELEM_H
# define NSL_PREPROCESSOR_TUPLE_ELEM_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/facilities/expand.h"
# include "nsl/preprocessor/facilities/overload.h"
# include "nsl/preprocessor/tuple/rem.h"
# include "nsl/preprocessor/variadic/elem.h"
# include "nsl/preprocessor/tuple/detail/is_single_return.h"
#
# if N_PP_VARIADICS_MSVC
#     define N_PP_TUPLE_ELEM(...) N_PP_TUPLE_ELEM_I(N_PP_OVERLOAD(N_PP_TUPLE_ELEM_O_, __VA_ARGS__), (__VA_ARGS__))
#     define N_PP_TUPLE_ELEM_I(m, args) N_PP_TUPLE_ELEM_II(m, args)
#     define N_PP_TUPLE_ELEM_II(m, args) N_PP_CAT(m ## args,)
/*
  Use N_PP_REM_CAT if it is a single element tuple ( which might be empty )
  else use N_PP_REM. This fixes a VC++ problem with an empty tuple and N_PP_TUPLE_ELEM
  functionality. See tuple_elem_bug_test.cxx.
*/
#     define N_PP_TUPLE_ELEM_O_2(n, tuple) \
         N_PP_VARIADIC_ELEM(n, N_PP_EXPAND(N_PP_TUPLE_IS_SINGLE_RETURN(N_PP_REM_CAT,N_PP_REM,tuple) tuple)) \
         /**/
# else
#     define N_PP_TUPLE_ELEM(...) N_PP_OVERLOAD(N_PP_TUPLE_ELEM_O_, __VA_ARGS__)(__VA_ARGS__)
#     define N_PP_TUPLE_ELEM_O_2(n, tuple) N_PP_VARIADIC_ELEM(n, N_PP_REM tuple)
# endif
# define N_PP_TUPLE_ELEM_O_3(size, n, tuple) N_PP_TUPLE_ELEM_O_2(n, tuple)
#
# /* directly used elsewhere in Boost... */
#
# define N_PP_TUPLE_ELEM_1_0(a) a
#
# define N_PP_TUPLE_ELEM_2_0(a, b) a
# define N_PP_TUPLE_ELEM_2_1(a, b) b
#
# define N_PP_TUPLE_ELEM_3_0(a, b, c) a
# define N_PP_TUPLE_ELEM_3_1(a, b, c) b
# define N_PP_TUPLE_ELEM_3_2(a, b, c) c
#
# endif
