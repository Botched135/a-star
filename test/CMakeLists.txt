add_executable(a_star_test "")

add_subdirectory(doctest)

target_include_directories(a_star_test  PRIVATE
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        ${DOCTEST_INCLUDE_DIR}
        )

target_sources(a_star_test PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/a_star_test_main.cpp
        )

target_link_libraries(a_star_test doctest a_star)

add_test(NAME a_star_tests COMMAND a_star_test)