# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARRAY_ENUM_H
# define NSL_PREPROCESSOR_ARRAY_ENUM_H
#
# include "nsl/pp/cat.h"
# include "nsl/pp/config/config.h"
# include "nsl/pp/control/if.h"
# include "nsl/pp/array/size.h"
# include "nsl/pp/tuple/rem.h"
# include "nsl/pp/variadic/has_opt.h"
#
# /* N_PP_ARRAY_ENUM */
#
# if N_PP_VARIADIC_HAS_OPT()
#    if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#        define N_PP_ARRAY_ENUM_NOT_EMPTY(array) N_PP_ARRAY_ENUM_I(N_PP_TUPLE_REM_CTOR, array)
#        define N_PP_ARRAY_ENUM_I(m, args) N_PP_ARRAY_ENUM_II(m, args)
#        define N_PP_ARRAY_ENUM_II(m, args) N_PP_CAT(m ## args,)
#    elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#        define N_PP_ARRAY_ENUM_NOT_EMPTY(array) N_PP_ARRAY_ENUM_I(array)
#        define N_PP_ARRAY_ENUM_I(array) N_PP_TUPLE_REM_CTOR ## array
#    else
#        define N_PP_ARRAY_ENUM_NOT_EMPTY(array) N_PP_TUPLE_REM_CTOR array
#    endif
#    define N_PP_ARRAY_ENUM_EMPTY(array)
#    define N_PP_ARRAY_ENUM(array) N_PP_IF(N_PP_ARRAY_SIZE(array),N_PP_ARRAY_ENUM_NOT_EMPTY,N_PP_ARRAY_ENUM_EMPTY)(array)
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
#    define N_PP_ARRAY_ENUM(array) N_PP_ARRAY_ENUM_I(N_PP_TUPLE_REM_CTOR, array)
#    define N_PP_ARRAY_ENUM_I(m, args) N_PP_ARRAY_ENUM_II(m, args)
#    define N_PP_ARRAY_ENUM_II(m, args) N_PP_CAT(m ## args,)
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_ARRAY_ENUM(array) N_PP_ARRAY_ENUM_I(array)
#    define N_PP_ARRAY_ENUM_I(array) N_PP_TUPLE_REM_CTOR ## array
# else
#    define N_PP_ARRAY_ENUM(array) N_PP_TUPLE_REM_CTOR array
# endif
#
# endif
