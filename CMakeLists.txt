cmake_minimum_required(VERSION 3.8)
project(a_star VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-g -O2 -march=native")

enable_testing()

add_subdirectory(fmt)

add_library(a_star SHARED "")
add_executable(a_star_run "")

target_include_directories(a_star
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        )

target_sources(a_star
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/derp.cpp
        )

target_sources(a_star_run
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
        )



target_link_libraries(a_star_run a_star fmt::fmt)
target_compile_options(a_star_run PRIVATE -static -Wall -Wextra -pedantic PUBLIC -std=gnu++20)
add_subdirectory(test)