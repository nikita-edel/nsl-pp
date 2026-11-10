# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
#ifndef NSL_PP_REMOVE_PARENS_H
#define NSL_PP_REMOVE_PARENS_H

#include "nsl/pp/config/config.h"
#include "nsl/pp/control/iif.h"
#include "nsl/pp/facilities/identity.h"
#include "nsl/pp/punctuation/is_begin_parens.h"
#include "nsl/pp/tuple/enum.h"

#define N_PP_REMOVE_PARENS(param) \
    N_PP_IIF \
      ( \
      N_PP_IS_BEGIN_PARENS(param), \
      N_PP_REMOVE_PARENS_DO, \
      N_PP_IDENTITY \
      ) \
    (param)() \
/**/

#define N_PP_REMOVE_PARENS_DO(param) \
  N_PP_IDENTITY(N_PP_TUPLE_ENUM(param)) \
/**/

#endif /* NSL_PP_REMOVE_PARENS_H */
