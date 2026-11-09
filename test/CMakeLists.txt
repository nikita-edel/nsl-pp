# Copyright 2018, 2019, 2022 Peter Dimov
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/.boost-cmake/include")

include(BoostTest OPTIONAL RESULT_VARIABLE HAVE_NSL_TEST)

if(NOT HAVE_NSL_TEST)
	return()
endif()

enable_language(C)

set(tests_c
	arithmetic
	array
	comparison
	control
	debug
	facilities
	list
	logical
	punctuation
	selection
	seq
	slot
	stringize
	tuple
	variadic
	isempty
)

set(tests_c_fail
	isempty_variadic_standard_failure
	isempty_variadic_standard_failure2
)

set(BOOST_TEST_LINK_LIBRARIES Boost::preprocessor)
set(BOOST_TEST_INCLUDE_DIRECTORIES .)

foreach(test IN LISTS tests_c)
	boost_test(
		TYPE compile
		SOURCES ${test}.c
		NAME ${test}_c
	)
endforeach()

foreach(test IN LISTS tests_c_fail)
	boost_test(
		TYPE compile-fail
		SOURCES ${test}.c
		NAME ${test}_c
	)
endforeach()
