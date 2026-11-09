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
# ifndef NSL_PREPROCESSOR_TUPLE_DETAIL_IS_SINGLE_RETURN_H
# define NSL_PREPROCESSOR_TUPLE_DETAIL_IS_SINGLE_RETURN_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* N_PP_TUPLE_IS_SINGLE_RETURN */
#
# if N_PP_VARIADICS_MSVC
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/facilities/is_1.h"
# include "nsl/preprocessor/tuple/size.h"
# define N_PP_TUPLE_IS_SINGLE_RETURN(sr,nsr,tuple)  \
    N_PP_IIF(N_PP_IS_1(N_PP_TUPLE_SIZE(tuple)),sr,nsr) \
    /**/
# endif /* N_PP_VARIADICS_MSVC */
#
# endif /* NSL_PREPROCESSOR_TUPLE_DETAIL_IS_SINGLE_RETURN_H */
