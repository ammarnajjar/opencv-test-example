file(GLOB_RECURSE mylib_source src/*)
add_library(mylib SHARED ${mylib_source})

find_package(OpenCV	 REQUIRED core)
target_link_libraries(mylib ${OpenCV_LIBS})
