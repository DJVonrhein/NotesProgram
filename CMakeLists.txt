CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
project(cs100finalproject)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(main
    src/main.cpp
    src/Note.cpp
    src/Notebook.cpp
    src/DisplayWordCount.cpp
    src/DisplayNoWordCount.cpp
)

ADD_EXECUTABLE(test
    src/unit_test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
