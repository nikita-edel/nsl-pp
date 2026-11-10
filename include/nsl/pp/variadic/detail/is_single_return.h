# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PP_VARIADIC_DETAIL_IS_SINGLE_RETURN_H
# define NSL_PP_VARIADIC_DETAIL_IS_SINGLE_RETURN_H
#
# include "nsl/pp/config/config.h"
#
# /* N_PP_VARIADIC_IS_SINGLE_RETURN */
#
# if N_PP_VARIADICS_MSVC
# include "nsl/pp/control/iif.h"
# include "nsl/pp/facilities/is_1.h"
# include "nsl/pp/variadic/size.h"
# define N_PP_VARIADIC_IS_SINGLE_RETURN(sr,nsr,...) \
    N_PP_IIF(N_PP_IS_1(N_PP_VARIADIC_SIZE(__VA_ARGS__)),sr,nsr) \
    /**/
# endif /* N_PP_VARIADICS_MSVC */
#
# endif /* NSL_PP_VARIADIC_DETAIL_IS_SINGLE_RETURN_H */
