add_executable(test_log_lib test_log_lib.cpp)
target_link_libraries(test_log_lib PUBLIC oust)
add_test(NAME test_log_lib COMMAND test_log_lib)

add_executable(test_stone test_stone.cpp)
target_link_libraries(test_stone PUBLIC oust)
add_test(NAME test_stone COMMAND test_stone)

add_executable(test_stone_black test_stone_black.cpp)
target_link_libraries(test_stone_black PUBLIC oust)
add_test(NAME test_stone_black COMMAND test_stone_black)

add_executable(test_stone_white test_stone_white.cpp)
target_link_libraries(test_stone_white PUBLIC oust)
add_test(NAME test_stone_white COMMAND test_stone_white)

add_executable(test_plateau test_plateau.cpp)
target_link_libraries(test_plateau PUBLIC oust)
add_test(NAME test_plateau COMMAND test_plateau)