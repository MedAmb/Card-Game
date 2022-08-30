cmake_minimum_required(VERSION 3.0.0)

project(CardGame VERSION 0.0.1)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

include(BuildOptions)
include(Dependencies)
include(CompileOptions)


if(ENABLE_UNIT_TESTS)
    setup_unit_testing()
endif()

if(ENABLE_COMPONENT_TESTS)
    setup_component_testing()
endif()

feature_summary(WHAT ALL)

add_subdirectory(src)
add_subdirectory(test)