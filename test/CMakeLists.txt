INCLUDE_DIRECTORIES ( ${CMAKE_CURRENT_LIST_DIR} )


set(TEST_NAMES
  test_one
)


FOREACH(item ${TEST_NAMES})
  ADD_EXECUTABLE(${item} ${item}.cpp)
  TARGET_LINK_LIBRARIES(${item} mylib gtest)
  TARGET_INCLUDE_DIRECTORIES ( ${item} PUBLIC ../src gtest )
  ADD_TEST(${item}_test ${item})
ENDFOREACH()


