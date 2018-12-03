cmake_minimum_required(VERSION 3.5)

project(IPK-Statistics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(statistics_iolib io.cc statistics.cc )

add_executable(normal normal.cc)
add_executable(readvector readvector.cc)
add_executable(uniform uniform.cc)

target_link_libraries(normal PUBLIC statistics_iolib)
target_link_libraries(readvector PUBLIC statistics_iolib)
target_link_libraries(uniform PUBLIC statistics_iolib)

enable_testing()

add_executable(test_mean test_mean.cc)
add_executable(test_median test_median.cc)

add_test(demo1 test_mean)
add_test(demo2 test_median)

target_link_libraries(test_mean PUBLIC statistics_iolib)
target_link_libraries(test_median PUBLIC statistics_iolib)

