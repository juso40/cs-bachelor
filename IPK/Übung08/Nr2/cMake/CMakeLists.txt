cmake_minimum_required(VERSION 3.5)

project(IPK-Statistics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(statistics_iolib io.cc statistics.hh )

add_executable(driver statisticsdriver.cc)


target_link_libraries(driver PUBLIC statistics_iolib)


enable_testing()


