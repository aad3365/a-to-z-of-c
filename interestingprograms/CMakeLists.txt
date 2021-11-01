cmake_minimum_required(VERSION 3.10)

# set the project name
project(InterestingPrograms)

# add the executable
add_executable(InterestingPrograms interesting.c)

# link for math.h
target_link_libraries(InterestingPrograms PRIVATE m)
