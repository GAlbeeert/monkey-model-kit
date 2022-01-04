cmake_minimum_required(VERSION 3.21)
project(MMK)

set(CMAKE_C_STANDARD 11)

include_directories(src include)

add_executable(${PROJECT_NAME}
        src/MMK.c
        src/pather.c
        include/MMK.h)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "src/*.c" DESTINATION src)
