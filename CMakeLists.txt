cmake_minimum_required(VERSION 2.6)

project(mylib)

include_directories(lib/include)

add_subdirectory(lib)

option(WITH_TEST "build test" ON)

if(WITH_TEST)
	enable_testing()
	add_subdirectory(test)
endif()

