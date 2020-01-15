cmake_minimum_required(VERSION 3.10)

project(Tlpi)

file(GLOB LIB_FILES "lib/*.h" "lib/*.c")

add_executable(copy fileio/copy.c ${LIB_FILES})
target_include_directories(copy PRIVATE lib)

add_executable(t_fork procexec/t_fork.c ${LIB_FILES})
target_include_directories(t_fork PRIVATE lib)
