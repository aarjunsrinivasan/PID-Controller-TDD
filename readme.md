# PID-Controller-TDD
[![Build Status](https://travis-ci.org/aarjunsrinivasan/PID-Controller-TDD.svg?branch=master)](https://travis-ci.org/aarjunsrinivasan/PID-Controller-TDD)
[![Coverage Status](https://coveralls.io/repos/github/aarjunsrinivasan/PID-Controller-TDD/badge.svg?branch=master)](https://coveralls.io/github/aarjunsrinivasan/PID-Controller-TDD?branch=master)

---

## Overview

PID-Controller C++ project with:

- cmake
- googletest

## Part 1- Authors

- Arjun Srinivasan Ambalam - Driver
- Santosh Kesani- Navigator

## Part 2- Authors

- Sneha Nayak; GitHub: [snehanyk05](https://github.com/snehanyk05); Role: Driver
- Kushagra Agrawal; GitHub: [kushagra7176](https://github.com/kushagra7176); Role: Navigator

## Notes for other group
- [Activity Diagram](https://drive.google.com/file/d/1dRbkq3Taf6Z73ygjnV3DdDV7xV2uicI_/view?usp=sharing) - Refer this link for the UML Activity Diagram
- [Class Diagram](https://drive.google.com/file/d/1g7V8JkIfbAIJ0B3mUg6zvwWFMx9G7tNl/view?usp=sharing) - Refer this link for the UML Class Diagram

- Implement two methods tuneController,errorFeedbackin PIDController.cpp refer the class method definition and doxygen comments

## Standard install via command-line
```
git clone --recursive https://github.com/aarjunsrinivasan/PID-Controller-TDD
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Run cppcheck

To detect bugs and perform static code analysis, cppcheck is used. It can be installed with the following command:
```
sudo apt-get install cppcheck
```
To run cppcheck, run the following command in the `/PID-Controller-TDD` folder:
```
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )
```

## Run cpplint

To check if the Google style guide is followed cpplint is used:
```
sudo apt-get install cpplint
```

To run the cpplint, follow the following commands in the `/PID-Controller-TDD` directory:
```
cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./data" )
