cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_COMPILER g++)
project(Lab_1 CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDART_REQUIRED ON)

add_executable(Lab_1
    dice.cpp
    ThreeDicePool.cpp
    expected_value.cpp
    PenaltyDice.cpp
    BonusDice.cpp
    probability.cpp
    DoubleDice.cpp
    main.cpp
)

