cmake_minimum_required(VERSION 3.10)

project(Tlpi)

file(GLOB LIB_FILES "lib/*.h" "lib/*.c")

add_executable(copy fileio/copy.c ${LIB_FILES})
target_include_directories(copy PRIVATE lib)

add_executable(t_fork procexec/t_fork.c ${LIB_FILES})
target_include_directories(t_fork PRIVATE lib)

add_executable(fork_file_sharing procexec/fork_file_sharing.c ${LIB_FILES})
target_include_directories(fork_file_sharing PRIVATE lib)

add_executable(seek_io procexec/seek_io.c ${LIB_FILES})
target_include_directories(seek_io PRIVATE lib)

# TODO: De-duplicate declarations
# https://stackoverflow.com/questions/14306642/adding-multiple-executables-in-cmake
