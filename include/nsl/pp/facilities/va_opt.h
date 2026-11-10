# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_FACILITIES_VA_OPT_H
# define NSL_PREPROCESSOR_FACILITIES_VA_OPT_H
# include "nsl/pp/variadic/has_opt.h"
# if N_PP_VARIADIC_HAS_OPT()
# include "nsl/pp/control/iif.h"
# include "nsl/pp/facilities/check_empty.h"
# include "nsl/pp/tuple/rem.h"
# define N_PP_VA_OPT_IMPL(atuple) \
    N_PP_TUPLE_REM() atuple       \
/**/
# define N_PP_VA_OPT(rdata,rempty,...)     \
    N_PP_VA_OPT_IMPL                       \
        (                                      \
        N_PP_IIF                           \
            (                                  \
            N_PP_CHECK_EMPTY(__VA_ARGS__), \
            rempty,                            \
            rdata                              \
            )                                  \
        )                                      \
/**/
# endif /* N_PP_VARIADIC_HAS_OPT() */
# endif /* NSL_PREPROCESSOR_FACILITIES_VA_OPT_H */
