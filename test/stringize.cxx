# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2018.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include "nsl/preprocessor/stringize.h"
# include "nsl/preprocessor/wstringize.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# if !defined __cplusplus
#include <wchar.h>
#endif
# include "test.h"

#define VDATA 1,2,3,4
#define NDATA
#define DATA data
#define FDATA(x) N_PP_INC(x)

# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MSVC()
BEGIN sizeof(N_PP_STR(NDATA)) / sizeof(char) == 1 END
BEGIN sizeof(N_PP_WSTR(NDATA)) / sizeof(wchar_t) == 1 END
#endif
BEGIN sizeof(N_PP_STR(DATA)) / sizeof(char) == 5 END
BEGIN sizeof(N_PP_STR(FDATA(1))) / sizeof(char) == 2 END
BEGIN sizeof(N_PP_STR(FDATA(9))) / sizeof(char) == 3 END
BEGIN sizeof(N_PP_WSTR(DATA)) / sizeof(wchar_t) == 5 END
BEGIN sizeof(N_PP_WSTR(FDATA(1))) / sizeof(wchar_t) == 2 END
BEGIN sizeof(N_PP_WSTR(FDATA(9))) / sizeof(wchar_t) == 3 END
BEGIN sizeof(N_PP_STR(VDATA)) / sizeof(char) == 8 END
BEGIN sizeof(N_PP_WSTR(VDATA)) / sizeof(wchar_t) == 8 END
