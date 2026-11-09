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
# include "nsl/preprocessor/slot.h"
# include "test.h"
# include "nsl/preprocessor/slot/counter.h"

# define X() 4

# define N_PP_VALUE 1 + 2 + 3 + X()
# include N_PP_ASSIGN_SLOT(1)

# undef X

BEGIN N_PP_SLOT(1) == 10 END

# define N_PP_VALUE N_PP_SLOT(1) * N_PP_SLOT(1)
# include N_PP_ASSIGN_SLOT(1)

BEGIN N_PP_SLOT(1) == 100 END

BEGIN N_PP_COUNTER == 0 END

#include N_PP_UPDATE_COUNTER()

BEGIN N_PP_COUNTER == 1 END

#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()

BEGIN N_PP_COUNTER == 3 END

#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()

BEGIN N_PP_COUNTER == 6 END

#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()
#include N_PP_UPDATE_COUNTER()

BEGIN N_PP_COUNTER == 11 END
