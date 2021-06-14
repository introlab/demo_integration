project(test_cppcount)

include_directories(../../3rdParty/googletest/googletest/include)
include_directories(../../3rdParty/googletest/googlemock/include)
include_directories(../include)
include_directories(include)

file(GLOB_RECURSE
        source_files
        src/*
        include/*)

add_executable(test_cppcount
        ${source_files})

target_link_libraries(test_cppcount
        cppcount
        gtest
        gmock)

set_property(TARGET test_cppcount PROPERTY CXX_STANDARD 14)

assign_source_group(${source_files})
