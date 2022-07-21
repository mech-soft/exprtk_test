
cmake_minimum_required(VERSION 3.2)
project(exprtk_lib C CXX)

add_compile_options(/bigobj)

file(GLOB_RECURSE SRC_EXPRTK_LIB *.cpp)

set(SOURCE_FILES
  ${SRC_EXPRTK_LIB}
)

option(BUILD_SHARED_LIBS "Build shared libs" OFF)

if(BUILD_SHARED_LIBS)
	add_library(exprtk_lib SHARED ${SOURCE_FILES})
	add_compile_definitions(EXPRTKDLLBUILD)
else()
	add_library(exprtk_lib STATIC ${SOURCE_FILES})
endif()

install(TARGETS exprtk_lib
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
	COMPONENT exprtk_lib)