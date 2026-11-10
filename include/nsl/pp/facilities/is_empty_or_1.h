# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2003.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_FACILITIES_IS_EMPTY_OR_1_H
# define NSL_PREPROCESSOR_FACILITIES_IS_EMPTY_OR_1_H
#
# include "nsl/pp/control/iif.h"
# include "nsl/pp/facilities/empty.h"
# include "nsl/pp/facilities/identity.h"
# include "nsl/pp/facilities/is_1.h"
# include "nsl/pp/facilities/is_empty.h"
#
# /* N_PP_IS_EMPTY_OR_1 */
#
# define N_PP_IS_EMPTY_OR_1(x) \
    N_PP_IIF( \
        N_PP_IS_EMPTY(x N_PP_EMPTY()), \
        N_PP_IDENTITY(1), \
        N_PP_IS_1 \
    )(x) \
    /**/
#
# endif
