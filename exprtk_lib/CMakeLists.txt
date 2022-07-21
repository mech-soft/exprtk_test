
cmake_minimum_required(VERSION 3.2)
project(exprtk_lib C CXX)

add_compile_options(/bigobj)

file(GLOB_RECURSE HEADERS_EXPRTK_LIB *.h)
file(GLOB_RECURSE SRC_EXPRTK_LIB *.cpp *.hpp)

set(SOURCE_FILES
  ${HEADERS_EXPRTK_LIB}
  ${SRC_EXPRTK_LIB}
)

add_library(exprtk_lib SHARED ${SOURCE_FILES})

add_compile_definitions(EXPRTKDLLBUILD)

install(TARGETS exprtk_lib
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
	COMPONENT exprtk_lib)