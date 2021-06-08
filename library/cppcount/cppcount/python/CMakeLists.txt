project(cppcount_pybind11)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE})

include_directories(../../3rdParty/pybind11/include)
include_directories(../include)
include_directories(include)

file(GLOB_RECURSE
        source_files
        src/*
        include/*)

pybind11_add_module(cppcount_pybind11
        MODULE
        ${source_files})

target_link_libraries(cppcount_pybind11 PRIVATE
        cppcount)

set_property(TARGET cppcount_pybind11 PROPERTY CXX_STANDARD 14)

assign_source_group(${source_files})
