project(subProject)
set(DEF_PROJECT_NAME ${PROJECT_NAME})

add_library(${PROJECT_NAME} lib.cpp lib.h)

target_include_directories(${PROJECT_NAME} PUBLIC .)


# LIBROMFS

set(LIBROMFS_PROJECT_NAME ${PROJECT_NAME})

# Set the location of our romfs folder
set(LIBROMFS_RESOURCE_LOCATION /mnt)


# Include libromfs
add_subdirectory(../libromfs ${CMAKE_CURRENT_BINARY_DIR}/libromfs-subProject)

# Link libromfs into our application
target_link_libraries(${PROJECT_NAME} PUBLIC ${LIBROMFS_LIBRARY})
