cmake_minimum_required(VERSION 3.10.2)

set(This lms-tests)
project(${This})

# gcov - coverage
set(CMAKE_COMPILER_IS_GNUCXX true)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(CodeCoverage)
setup_target_for_coverage_gcovr_html(
    NAME coverage
    EXECUTABLE lms-tests
    BASE_DIRECTORY "${CMAKE_SOURCE_DIR}"
    EXCLUDE "${CMAKE_SOURCE_DIR}/src/main.cpp" "${CMAKE_SOURCE_DIR}/test/*"
)

add_subdirectory(lib/googletest)

include_directories(${LMS_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES 
    main.cpp 
    lms/book_tests.cpp
)

add_executable(${This} ${SOURCE_FILES})
target_link_libraries(${This} lms gtest)
install(TARGETS ${This} DESTINATION bin)