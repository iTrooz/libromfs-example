cmake_minimum_required(VERSION 3.22)
project(testProject)

include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 23)
set(DEF_PROJECT_NAME ${PROJECT_NAME})

file(GLOB_RECURSE DATA src/*)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(subProject)
target_link_libraries(${PROJECT_NAME} PUBLIC subProject)

# LIBROMFS

set(LIBROMFS_PROJECT_NAME ${PROJECT_NAME})

# Set the location of our romfs folder
set(LIBROMFS_RESOURCE_LOCATION /mnt)


# Include libromfs
add_subdirectory(libromfs)

# Link libromfs into our application
target_link_libraries(${PROJECT_NAME} PUBLIC ${LIBROMFS_LIBRARY})
