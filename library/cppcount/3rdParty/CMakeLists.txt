if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

add_subdirectory(pybind11)

if (CPP_COUNT_ENABLE_TESTS)
    add_subdirectory(googletest)
endif()
