# Project Title

This project is a template for C++ projects using CMake, GoogleTest, and GCOV.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

What things you need to install the software and how to install them

```
GCC 7.5.0 or greater
CMake VERSION 3.10 or greater
gcovr 3.4 or greater
```

### Installing

Clone repo and grab submodules (GoogleTest)

```
git clone --recurse-submodules -j8 https://github.com/edwincarlson/cmake-gtest-gcov-project-template.git
cd cmake-gtest-gcov-project-template
```

Configure build

```
mkdir build
cd build
cmake ..
```

Build src

```
cmake --build . --config Debug --target library-management-system -- -j 4
```

Run bin

```
./src/library-management-system 
```

## Running the tests

Build test

```
cmake --build . --config Debug --target lms-tests -- -j 4
```

Run bin

```
./test/lms-tests 
```

Run coverage

```
cmake --build . --config Debug --target coverage -- -j 4
```

View coverage

```
open test/coverage/index.html in internet browser
```

## Built With

* [CMake](https://cmake.org/documentation/)
* [GoogleTest](https://github.com/google/googletest)
* [gcovr](https://gcovr.com/en/stable/guide.html)

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Edwin Carlson** - *Initial work* - [edwincarlson](https://github.com/edwincarlson)

## License

This project is licensed under the MIT License

## Acknowledgments

* [bilke cmake-modules](https://github.com/bilke/cmake-modules/blob/master/CodeCoverage.cmake)