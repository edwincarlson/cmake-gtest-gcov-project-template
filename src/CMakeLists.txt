cmake_minimum_required(VERSION 3.10.2)

add_subdirectory(lms)

set(SOURCE_FILES main.cpp)

add_executable(${This} ${SOURCE_FILES})
target_link_libraries(${This} lms)
install(TARGETS ${This} DESTINATION ${LMS_INSTALL_BIN_DIR})