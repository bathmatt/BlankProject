file(GLOB HEADERS *.hpp)
file(GLOB SOURCES *.cpp *.cu)
LIST(REMOVE_ITEM SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

ADD_LIBRARY(mylib ${LIBTYPE} ${SOURCES} ${HEADERS})

set_target_properties(mylib PROPERTIES LINKER_LANGUAGE CXX)

ADD_EXECUTABLE(my_program.exe main.cpp)

TARGET_LINK_LIBRARIES(my_program.exe LINK_PUBLIC mylib )
