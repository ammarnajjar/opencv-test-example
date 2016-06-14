file(GLOB mytest_source *.cc)
add_executable(mytest ${mytest_source})

target_link_libraries(mytest mylib)

find_package(OpenCV REQUIRED ts)
target_link_libraries(mytest ${OpenCV_LIBS})

add_test(mycmaketest mytest)
