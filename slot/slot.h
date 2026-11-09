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
# ifndef NSL_PREPROCESSOR_SLOT_SLOT_H
# define NSL_PREPROCESSOR_SLOT_SLOT_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/slot/detail/def.h"
#
# /* N_PP_ASSIGN_SLOT */
#
# define N_PP_ASSIGN_SLOT(i) N_PP_CAT(N_PP_ASSIGN_SLOT_, i)
#
# define N_PP_ASSIGN_SLOT_1 <nsl/preprocessor/slot/detail/slot1.h>
# define N_PP_ASSIGN_SLOT_2 <nsl/preprocessor/slot/detail/slot2.h>
# define N_PP_ASSIGN_SLOT_3 <nsl/preprocessor/slot/detail/slot3.h>
# define N_PP_ASSIGN_SLOT_4 <nsl/preprocessor/slot/detail/slot4.h>
# define N_PP_ASSIGN_SLOT_5 <nsl/preprocessor/slot/detail/slot5.h>
#
# /* N_PP_SLOT */
#
# define N_PP_SLOT(i) N_PP_CAT(N_PP_SLOT_, i)()
#
# endif
