cmake_minimum_required(VERSION 3.13)
project(hackerRank_CPlus)
include(GoogleTest)
set(CMAKE_CXX_STANDARD 14)

include_directories(.)
enable_testing()

add_executable(hackerRank_CPlus
        algorithms/contests/week26/armyGame/src/main.cpp
        algorithms/contests/week26/armyGame/test/test.cpp
        algorithms/contests/week26/bestDivisor/src/main.cpp
        algorithms/contests/week26/bestDivisor/test/test.cpp
        algorithms/contests/week26/hardHomework/src/main.cpp
        algorithms/contests/week26/hardHomework/test/test.cpp
        algorithms/contests/week26/musicOnTheStreet/src/main.cpp
        algorithms/contests/week26/musicOnTheStreet/test/test.cpp
        algorithms/contests/week26/satisfactoryPairs/src/main.cpp
        algorithms/contests/week26/satisfactoryPairs/test/test.cpp
        algorithms/contests/week26/twins/src/main.cpp
        algorithms/contests/week26/twins/test/test.cpp
        algorithms/implementation/extraLongFactorial/src/main.cpp
        algorithms/implementation/extraLongFactorial/test/test.cpp
        algorithms/implementation/formingMagicSquare/src/main.cpp
        algorithms/implementation/formingMagicSquare/test/test.cpp
        algorithms/implementation/kangaroo/src/main.cpp
        algorithms/implementation/kangaroo/test/test.cpp
        algorithms/implementation/matrixLayerRotation/src/main.cpp
        algorithms/implementation/matrixLayerRotation/test/test.cpp
        algorithms/implementation/queenAttack2/src/main.cpp
        algorithms/implementation/queenAttack2/test/test.cpp
        algorithms/implementation/repeatedString/src/main.cpp
        algorithms/implementation/repeatedString/test/test.cpp
        algorithms/warmup/aVeryBigSum/src/main.cpp
        algorithms/warmup/aVeryBigSum/test/test.cpp
        algorithms/warmup/compareTheTriplets/src/main.cpp
        algorithms/warmup/compareTheTriplets/test/test.cpp
        algorithms/warmup/diagonalDifference/src/main.cpp
        algorithms/warmup/diagonalDifference/test/test.cpp
        algorithms/warmup/plusMinus/src/main.cpp
        algorithms/warmup/plusMinus/test/test.cpp
        algorithms/warmup/simpleArraySum/src/main.cpp
        algorithms/warmup/simpleArraySum/test/test.cpp
        algorithms/warmup/staircase/src/main.cpp
        algorithms/warmup/staircase/test/test.cpp
        interview_preparation_kit/dynamic_programming/abbbreviation/Solution.cpp
        interview_preparation_kit/dynamic_programming/abbbreviation/Tests.cpp
        interview_preparation_kit/dynamic_programming/candy/Solution.cpp
        interview_preparation_kit/dynamic_programming/candy/Tests.cpp
        interview_preparation_kit/dynamic_programming/decibinary_numbers/Solution.cpp
        interview_preparation_kit/dynamic_programming/decibinary_numbers/Tests.cpp
        interview_preparation_kit/dynamic_programming/max_array_sum/Solution.cpp
        interview_preparation_kit/dynamic_programming/max_array_sum/Tests.cpp
        catch.hpp
        main.cpp algorithms/gameTheory/gamesOfStones/Tests.cpp algorithms/gameTheory/gamesOfStones/Solution.cpp)

add_dependencies(hackerRank_CPlus gtest)
target_link_libraries(hackerRank_CPlus /usr/local/lib/libgtest.a)
target_link_libraries(hackerRank_CPlus /usr/local/lib/libgtest_main.a)