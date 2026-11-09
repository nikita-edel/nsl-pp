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
# if !N_PP_IS_ITERATING
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/comparison/equal.h"
# include "nsl/preprocessor/control/expr_iif.h"
# include "nsl/preprocessor/iteration.h"
# include "nsl/preprocessor/logical/bitor.h"
# include "test.h"
#
# define NO_FLAGS
#
# define N_PP_ITERATION_PARAMS_1 (3, (1, 10, "iteration.h"))
# include N_PP_ITERATE()
#
# undef NO_FLAGS
#
# define N_PP_ITERATION_PARAMS_1 (4, (1, 5, "iteration.h", 0x0001))
# include N_PP_ITERATE()
#
# define N_PP_ITERATION_PARAMS_1 (4, (1, 5, "iteration.h", 0x0002))
# include N_PP_ITERATE()
#
# if N_PP_LIMIT_ITERATION == 512
#
# define ITER100S(n)                       \
         N_PP_BITOR                    \
            (                              \
            N_PP_BITOR                 \
                (                          \
                N_PP_EQUAL(n,100),     \
                N_PP_EQUAL(n,200)      \
                ),                         \
            N_PP_BITOR                 \
                (                          \
                N_PP_BITOR             \
                    (                      \
                    N_PP_EQUAL(n,300), \
                    N_PP_EQUAL(n,400)  \
                    ),                     \
                N_PP_EQUAL(n,500)      \
                )                          \
            )                              \
/* */
#
# define N_PP_ITERATION_PARAMS_1 (4, (0, 512, "iteration.h", 0x0003))
# include N_PP_ITERATE()
#
# undef ITER100S
#
# define ITER50S(n)                        \
         N_PP_BITOR                    \
            (                              \
            N_PP_BITOR                 \
                (                          \
                N_PP_EQUAL(n,450),     \
                N_PP_EQUAL(n,350)      \
                ),                         \
            N_PP_BITOR                 \
                (                          \
                N_PP_BITOR             \
                    (                      \
                    N_PP_EQUAL(n,250), \
                    N_PP_EQUAL(n,150)  \
                    ),                     \
                N_PP_EQUAL(n,50)       \
                )                          \
            )                              \
/* */
#
# define N_PP_ITERATION_PARAMS_1 (4, (512, 0, "iteration.h", 0x0004))
# include N_PP_ITERATE()
#
# undef ITER50S
#
# endif
#
# if N_PP_LIMIT_ITERATION == 1024
#
# define ITER100SA(n)                          \
         N_PP_BITOR                        \
             (                                 \
             N_PP_BITOR                    \
                (                              \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_EQUAL(n,100),     \
                    N_PP_EQUAL(n,200)      \
                    ),                         \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_BITOR             \
                        (                      \
                        N_PP_EQUAL(n,300), \
                        N_PP_EQUAL(n,400)  \
                        ),                     \
                    N_PP_EQUAL(n,500)      \
                    )                          \
                ),                             \
             N_PP_BITOR                    \
                (                              \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_EQUAL(n,600),     \
                    N_PP_EQUAL(n,700)      \
                    ),                         \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_BITOR             \
                        (                      \
                        N_PP_EQUAL(n,800), \
                        N_PP_EQUAL(n,900)  \
                        ),                     \
                    N_PP_EQUAL(n,1000)     \
                    )                          \
                )                              \
             )                                 \
/* */
#
# define N_PP_ITERATION_PARAMS_1 (4, (0, 1024, "iteration.h", 0x0005))
# include N_PP_ITERATE()
#
# undef ITER100SA
#
# define ITER50SA(n)                           \
         N_PP_BITOR                        \
             (                                 \
             N_PP_BITOR                    \
                (                              \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_EQUAL(n,950),     \
                    N_PP_EQUAL(n,850)      \
                    ),                         \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_BITOR             \
                        (                      \
                        N_PP_EQUAL(n,750), \
                        N_PP_EQUAL(n,650)  \
                        ),                     \
                    N_PP_EQUAL(n,550)       \
                    )                          \
                ),                             \
             N_PP_BITOR                    \
                (                              \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_EQUAL(n,450),     \
                    N_PP_EQUAL(n,350)      \
                    ),                         \
                N_PP_BITOR                 \
                    (                          \
                    N_PP_BITOR             \
                        (                      \
                        N_PP_EQUAL(n,250), \
                        N_PP_EQUAL(n,150)  \
                        ),                     \
                    N_PP_EQUAL(n,50)       \
                    )                          \
                )                              \
             )                                 \
/* */
#
# define N_PP_ITERATION_PARAMS_1 (4, (1024, 0, "iteration.h", 0x0006))
# include N_PP_ITERATE()
#
# undef ITER50SA
#
# endif
#
# else
# if defined NO_FLAGS

struct N_PP_CAT(X, N_PP_ITERATION()) {
    BEGIN
        N_PP_ITERATION() >= N_PP_ITERATION_START() &&
        N_PP_ITERATION() <= N_PP_ITERATION_FINISH()
    END
};

# elif N_PP_ITERATION_DEPTH() == 1 \
    && N_PP_ITERATION_FLAGS() == 0x0001

struct N_PP_CAT(Y, N_PP_ITERATION()) { };

# elif N_PP_ITERATION_DEPTH() == 1 \
    && N_PP_ITERATION_FLAGS() == 0x0002

# define N_PP_ITERATION_PARAMS_2 (3, (1, N_PP_ITERATION(), "iteration.h"))
# include N_PP_ITERATE()

# elif N_PP_ITERATION_DEPTH() == 1 \
    && N_PP_ITERATION_FLAGS() == 0x0003
    
#define TEST_ITER_F(n)                         \
    N_PP_EXPR_IIF                          \
        (                                      \
        ITER100S(n),                           \
        struct N_PP_CAT(iter_512_f,n) { }; \
        )                                      \
/* */

TEST_ITER_F(N_PP_ITERATION())

# undef TEST_ITER_F

# elif N_PP_ITERATION_DEPTH() == 1 \
    && N_PP_ITERATION_FLAGS() == 0x0004

#define TEST_ITER_B(n)                         \
    N_PP_EXPR_IIF                          \
        (                                      \
        ITER50S(n),                            \
        struct N_PP_CAT(iter_512_b,n) { }; \
        )                                      \
/* */

TEST_ITER_B(N_PP_ITERATION())

# undef TEST_ITER_B

# elif N_PP_ITERATION_DEPTH() == 1 \
    && N_PP_ITERATION_FLAGS() == 0x0005
    
#define TEST_ITER_FA(n)                        \
    N_PP_EXPR_IIF                          \
        (                                      \
        ITER100SA(n),                          \
        struct N_PP_CAT(iter_1024_f,n) {}; \
        )                                      \
/* */

TEST_ITER_FA(N_PP_ITERATION())

# undef TEST_ITER_FA

# elif N_PP_ITERATION_DEPTH() == 1 \
    && N_PP_ITERATION_FLAGS() == 0x0006

#define TEST_ITER_BA(n)                        \
    N_PP_EXPR_IIF                          \
        (                                      \
        ITER50SA(n),                           \
        struct N_PP_CAT(iter_1024_b,n) {}; \
        )                                      \
/* */

TEST_ITER_BA(N_PP_ITERATION())

# undef TEST_ITER_BA

# elif N_PP_ITERATION_DEPTH() == 2 \
    && N_PP_FRAME_FLAGS(1) == 0x0002

struct N_PP_CAT(Z, N_PP_CAT(N_PP_ITERATION(), N_PP_RELATIVE_ITERATION(1))) { };

# else
#
# error should not get here!
#
# endif
# endif
