add_executable(test_log_lib test_log_lib.cpp)
target_link_libraries(test_log_lib PUBLIC oust)
add_test(NAME test_log_lib COMMAND test_log_lib)

add_executable(test_stone test_stone.cpp)
target_link_libraries(test_stone PUBLIC oust)
add_test(NAME test_stone COMMAND test_stone)