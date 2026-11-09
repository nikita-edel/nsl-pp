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
# /* Revised by Edward Diener (2011,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_CONFIG_LIMITS_H
# define NSL_PREPROCESSOR_CONFIG_LIMITS_H
#
# include "nsl/preprocessor/config/config.h"
#
# if defined(N_PP_LIMIT_DIM)
# undef N_PP_LIMIT_DIM
# endif
# if defined(N_PP_LIMIT_ITERATION_DIM)
# undef N_PP_LIMIT_ITERATION_DIM
# endif
# if defined(N_PP_LIMIT_SLOT_SIG)
# undef N_PP_LIMIT_SLOT_SIG
# endif
# if defined(N_PP_LIMIT_SLOT_COUNT)
# undef N_PP_LIMIT_SLOT_COUNT
# endif
# if defined(N_PP_LIMIT_WHILE)
# undef N_PP_LIMIT_WHILE
# endif
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# if defined(N_PP_LIMIT_MAG)
# undef N_PP_LIMIT_MAG
# endif
# if defined(N_PP_LIMIT_VARIADIC)
# undef N_PP_LIMIT_VARIADIC
# endif
# if defined(N_PP_LIMIT_TUPLE)
# undef N_PP_LIMIT_TUPLE
# endif
# if defined(N_PP_LIMIT_FOR)
# undef N_PP_LIMIT_FOR
# endif
# if defined(N_PP_LIMIT_REPEAT)
# undef N_PP_LIMIT_REPEAT
# endif
# if defined(N_PP_LIMIT_SEQ)
# undef N_PP_LIMIT_SEQ
# endif
# if defined(N_PP_LIMIT_ITERATION)
# undef N_PP_LIMIT_ITERATION
# endif
#
# define N_PP_LIMIT_MAG 256
# define N_PP_LIMIT_WHILE 256
# define N_PP_LIMIT_VARIADIC 64
# define N_PP_LIMIT_TUPLE 64
# define N_PP_LIMIT_FOR 256
# define N_PP_LIMIT_SEQ 256
# define N_PP_LIMIT_REPEAT 256
# define N_PP_LIMIT_ITERATION 256
#
#else
#
# if defined(N_PP_LIMIT_MAG)
# if !(N_PP_LIMIT_MAG == 256 || N_PP_LIMIT_MAG == 512 || N_PP_LIMIT_MAG == 1024)
# undef N_PP_LIMIT_MAG
# define N_PP_LIMIT_MAG 256
# define N_PP_LIMIT_WHILE 256
# else
# define N_PP_LIMIT_WHILE N_PP_LIMIT_MAG
# if !defined(N_PP_LIMIT_SEQ)
# define N_PP_LIMIT_SEQ N_PP_LIMIT_MAG
# endif
# endif
# else
# define N_PP_LIMIT_MAG 256
# define N_PP_LIMIT_WHILE 256
# endif
#
# if defined(N_PP_LIMIT_VARIADIC)
# if !(N_PP_LIMIT_VARIADIC == 64 || N_PP_LIMIT_VARIADIC == 128 || N_PP_LIMIT_VARIADIC == 256)
# undef N_PP_LIMIT_VARIADIC
# define N_PP_LIMIT_VARIADIC 64
# endif
# else
# define N_PP_LIMIT_VARIADIC 64
# endif
#
# if defined(N_PP_LIMIT_TUPLE)
# if !(N_PP_LIMIT_TUPLE == 64 || N_PP_LIMIT_TUPLE == 128 || N_PP_LIMIT_TUPLE == 256)
# undef N_PP_LIMIT_TUPLE
# define N_PP_LIMIT_TUPLE 64
# elif N_PP_LIMIT_TUPLE > N_PP_LIMIT_VARIADIC
# undef N_PP_LIMIT_VARIADIC
# define N_PP_LIMIT_VARIADIC N_PP_LIMIT_TUPLE
# endif
# else
# define N_PP_LIMIT_TUPLE 64
# endif
#
# if defined(N_PP_LIMIT_FOR)
# if !(N_PP_LIMIT_FOR == 256 || N_PP_LIMIT_FOR == 512 || N_PP_LIMIT_FOR == 1024)
# undef N_PP_LIMIT_FOR
# define N_PP_LIMIT_FOR 256
# elif N_PP_LIMIT_FOR > N_PP_LIMIT_MAG
# undef N_PP_LIMIT_FOR
# define N_PP_LIMIT_FOR N_PP_LIMIT_MAG
# endif
# else
# define N_PP_LIMIT_FOR 256
# endif
#
# if defined(N_PP_LIMIT_REPEAT)
# if !(N_PP_LIMIT_REPEAT == 256 || N_PP_LIMIT_REPEAT == 512 || N_PP_LIMIT_REPEAT == 1024)
# undef N_PP_LIMIT_REPEAT
# define N_PP_LIMIT_REPEAT 256
# elif N_PP_LIMIT_REPEAT > N_PP_LIMIT_MAG
# undef N_PP_LIMIT_REPEAT
# define N_PP_LIMIT_REPEAT N_PP_LIMIT_MAG
# endif
# else
# define N_PP_LIMIT_REPEAT 256
# endif
#
# if defined(N_PP_LIMIT_SEQ)
# if !(N_PP_LIMIT_SEQ == 256 || N_PP_LIMIT_SEQ == 512 || N_PP_LIMIT_SEQ == 1024)
# undef N_PP_LIMIT_SEQ
# define N_PP_LIMIT_SEQ 256
# elif N_PP_LIMIT_SEQ > N_PP_LIMIT_MAG
# undef N_PP_LIMIT_SEQ
# define N_PP_LIMIT_SEQ N_PP_LIMIT_MAG
# endif
# else
# define N_PP_LIMIT_SEQ 256
# endif
#
# if defined(N_PP_LIMIT_ITERATION)
# if !(N_PP_LIMIT_ITERATION == 256 || N_PP_LIMIT_ITERATION == 512 || N_PP_LIMIT_ITERATION == 1024)
# undef N_PP_LIMIT_ITERATION
# define N_PP_LIMIT_ITERATION 256
# elif N_PP_LIMIT_ITERATION > N_PP_LIMIT_MAG
# undef N_PP_LIMIT_ITERATION
# define N_PP_LIMIT_ITERATION N_PP_LIMIT_MAG
# endif
# else
# define N_PP_LIMIT_ITERATION 256
# endif
#
# endif
#
# define N_PP_LIMIT_DIM 3
# define N_PP_LIMIT_ITERATION_DIM 3
# define N_PP_LIMIT_SLOT_SIG 10
# define N_PP_LIMIT_SLOT_COUNT 5
#
# endif
