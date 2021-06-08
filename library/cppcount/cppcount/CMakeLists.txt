
project(cppcount)

set(LIBRARY_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

include_directories(include)

file(GLOB_RECURSE
        source_files
        src/*
        include/*)

add_library(cppcount
        STATIC
        ${source_files})

set_property(TARGET cppcount PROPERTY CXX_STANDARD 14)

assign_source_group(${source_files})

install(TARGETS cppcount DESTINATION lib)
install(DIRECTORY include/ DESTINATION include
    FILES_MATCHING PATTERN "*.h")

add_subdirectory(python)
add_subdirectory(tests)
