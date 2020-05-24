#include <iostream>
#include "lms_config.h"

#include <book.h>

int main(int argc, char* argv[]) {
    // report version
    std::cout << "========================================" << std::endl;
    std::cout << "Library Management System \n" << "Version " << LMS_VERSION_MAJOR << "." << LMS_VERSION_MINOR << std::endl;
    std::cout << "========================================" << std::endl;  
}