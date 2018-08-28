cmake_minimum_required(VERSION 2.8)

PROJECT(BlankProject CXX CUDA)

#Add C++11
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# Add -Wall
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

MESSAGE("Final CXX flags ${CMAKE_CXX_FLAGS} " )


MESSAGE("\nProcessing \"src\" directory")
ADD_SUBDIRECTORY(src)


MESSAGE("Adding testing")
ENABLE_TESTING()
MESSAGE("Add unit tests")
ADD_SUBDIRECTORY(googletest)
ADD_SUBDIRECTORY(test)

