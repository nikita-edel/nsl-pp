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
# ifndef NSL_PREPROCESSOR_DETAIL_CHECK_H
# define NSL_PREPROCESSOR_DETAIL_CHECK_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
#
# /* N_PP_CHECK */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_CHECK(x, type) N_PP_CHECK_D(x, type)
# else
#    define N_PP_CHECK(x, type) N_PP_CHECK_OO((x, type))
#    define N_PP_CHECK_OO(par) N_PP_CHECK_D ## par
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC() && ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_DMC()
#    define N_PP_CHECK_D(x, type) N_PP_CHECK_1(N_PP_CAT(N_PP_CHECK_RESULT_, type x))
#    define N_PP_CHECK_1(chk) N_PP_CHECK_2(chk)
#    define N_PP_CHECK_2(res, _) res
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_CHECK_D(x, type) N_PP_CHECK_1(type x)
#    define N_PP_CHECK_1(chk) N_PP_CHECK_2(chk)
#    define N_PP_CHECK_2(chk) N_PP_CHECK_3((N_PP_CHECK_RESULT_ ## chk))
#    define N_PP_CHECK_3(im) N_PP_CHECK_5(N_PP_CHECK_4 im)
#    define N_PP_CHECK_4(res, _) res
#    define N_PP_CHECK_5(res) res
# else /* DMC */
#    define N_PP_CHECK_D(x, type) N_PP_CHECK_OO((type x))
#    define N_PP_CHECK_OO(par) N_PP_CHECK_0 ## par
#    define N_PP_CHECK_0(chk) N_PP_CHECK_1(N_PP_CAT(N_PP_CHECK_RESULT_, chk))
#    define N_PP_CHECK_1(chk) N_PP_CHECK_2(chk)
#    define N_PP_CHECK_2(res, _) res
# endif
#
# define N_PP_CHECK_RESULT_1 1, N_PP_NIL
#
# endif
