cmake_minimum_required(VERSION 3.10.2)

set(This library-management-system)

# set the project name
project(${This} VERSION 0.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3 -fprofile-arcs -ftest-coverage")

configure_file(lms_config.h.in lms_config.h)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(LMS_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(LMS_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(LMS_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(LMS_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/lms)

include_directories(${LMS_INSTALL_INCLUDE_DIR})
include_directories(${LMS_HEADERS_DIR})

add_subdirectory(src)
add_subdirectory(test)

add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

target_include_directories(${This} PUBLIC
    "${PROJECT_BINARY_DIR}"
)