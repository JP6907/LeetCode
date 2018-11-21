cmake_minimum_required(VERSION 3.10)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(include /usr/local/include)

#用于将当前目录下的所有源文件的名字保存在变量 DIR_SRCS 中
aux_source_directory(. DIR_SRCS)

link_directories(/usr/local/lib)

#add_executable(LeetCode src/main.cpp)

add_executable(unit_test src/unit_test.cpp include/7ReverseInteger.h include/9PalindromeNumber.h include/13RomantoInteger.h include/12IntegertoRoman.h include/14LongestCommonPrefix.h)

#target_link_libraries(unit_test boost_unit_test_framework)