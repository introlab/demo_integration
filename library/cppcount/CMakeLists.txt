cmake_minimum_required(VERSION 3.14.0)

if (POLICY CMP0014)
    cmake_policy(SET CMP0014 NEW)
endif (POLICY CMP0014)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()

if (WIN32)
    message(FATAL_ERROR "Windows is not supported yet.")
elseif (UNIX)
    set(CMAKE_CXX_FLAGS "-fPIC")
else()
    message(FATAL_ERROR "Unsupported operating system.")
endif (WIN32)

function(assign_source_group)
    foreach (_source IN ITEMS ${ARGN})
        if (IS_ABSOLUTE "${_source}")
            file(RELATIVE_PATH _source_rel "${CMAKE_CURRENT_SOURCE_DIR}" "${_source}")
        else ()
            set(_source_rel "${_source}")
        endif ()
        get_filename_component(_source_path "${_source_rel}" PATH)
        string(REPLACE "/" "\\" _source_path_msvc "${_source_path}")
        source_group("${_source_path_msvc}" FILES "${_source}")
    endforeach ()
endfunction(assign_source_group)

# Default behavior is to enable tests
option(CPP_COUNT_ENABLE_TESTS "Build tests" ON)

project(cppcount)

add_subdirectory(3rdParty)
add_subdirectory(cppcount)
