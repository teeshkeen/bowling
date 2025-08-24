add_library(bowling
    bowling_game.cpp)
set_target_properties(bowling PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)