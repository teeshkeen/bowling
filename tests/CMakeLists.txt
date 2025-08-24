find_package(GTest REQUIRED)
add_executable(bowling_tests bowling_tests.cpp)
target_link_libraries(bowling_tests bowling GTest::gtest GTest::gtest_main)
add_test(NAME BowlingTests COMMAND bowling_tests)