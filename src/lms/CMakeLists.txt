cmake_minimum_required(VERSION 3.10.2)

set(SOURCE_FILES
    book.h
    book.cpp
)

add_library(lms SHARED STATIC ${SOURCE_FILES})

install(TARGETS lms DESTINATION ${LMS_INSTALL_LIB_DIR})
install(FILES lms.h DESTINATION ${LMS_INSTALL_INCLUDE_DIR})