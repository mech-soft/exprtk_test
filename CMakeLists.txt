
cmake_minimum_required(VERSION 3.2)

project(exprtk_test)
include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(exprtk_lib)

add_executable(exprtk_test "main.cpp")
target_link_libraries(exprtk_test exprtk_lib)

install(TARGETS exprtk_test
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
	COMPONENT exprtk_test)