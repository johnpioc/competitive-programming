cmake_minimum_required(VERSION 3.29)
project(codeforces_cpp)

set(CMAKE_CXX_STANDARD 17)

# Problem Set
add_executable(Football96A problem-set/Football96A.cpp)
add_executable(Dragons230A problem-set/Dragons230A.cpp)
add_executable(SkibidusAndSigma2065D problem-set/SkibidusAndSigma2065D.cpp)

# Contest Round 1009 Div 3
add_executable(DrawASquare2074A contests/round1009div3/DrawASquare2074A.cpp)