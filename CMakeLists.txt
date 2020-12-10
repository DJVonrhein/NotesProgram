CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
project(CS100 Final Proj.)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(terminotes
    src/main.cpp
    src/Note.cpp
    src/Notebook.cpp
    src/DisplayWordCount.cpp
    src/DisplayNoWordCount.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
