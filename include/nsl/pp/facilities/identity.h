# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2015) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_FACILITIES_IDENTITY_H
# define NSL_PREPROCESSOR_FACILITIES_IDENTITY_H
#
# include "nsl/pp/facilities/empty.h"
# include "nsl/pp/tuple/eat.h"
#
# /* N_PP_IDENTITY */
#
# define N_PP_IDENTITY(item) item N_PP_EMPTY
#
# define N_PP_IDENTITY_N(item,n) item N_PP_TUPLE_EAT_N(n)
#
# endif
