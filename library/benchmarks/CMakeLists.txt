cmake_minimum_required(VERSION 3.14.0)

if (POLICY CMP0014)
    cmake_policy(SET CMP0014 NEW)
endif (POLICY CMP0014)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

add_subdirectory(../cppcount ./cppcount)


project(benchmark_cppcount)


include_directories(../cppcount/cppcount/include)

add_executable(benchmark_cppcount benchmark_cppcount.cpp)

target_link_libraries(benchmark_cppcount
        cppcount)

set_property(TARGET benchmark_cppcount PROPERTY CXX_STANDARD 14)


add_custom_command(TARGET benchmark_cppcount POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${PROJECT_SOURCE_DIR}/input.txt $<TARGET_FILE_DIR:benchmark_cppcount>/input.txt)
