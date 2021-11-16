cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(TP_ALL)
enable_language(C)
enable_testing(ON)

set(C_STANDARD 11)

set(INC ${CMAKE_SOURCE_DIR}/inc)
set(SRC ${CMAKE_SOURCE_DIR}/src)
set(TEST ${CMAKE_SOURCE_DIR}/test)
set(BIN ${CMAKE_SOURCE_DIR}/bin)
set(LIB ${CMAKE_SOURCE_DIR}/lib)

add_compile_options(-pg)
add_link_options(-pg)

set (EJOVO_TIME ON)

if (EJOVO_TIME)
    add_compile_options(-fno-reorder-functions)
    add_compile_options(-fgnu89-inline)
    add_compile_options(-fno-inline)
    add_compile_options(-O3)
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIB})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIB})

add_compile_options(

    # -Wall
    # -Werror
    # -Wimplicit
    # -Wno-incompatible-pointer-types-discards-qualifiers

)

file(MAKE_DIRECTORY ${BIN})
file(MAKE_DIRECTORY ${LIB})
# file(MAKE_DIRECTORY ${})

include_directories(${INC})

add_subdirectory(${SRC})
add_subdirectory(${TEST})

add_custom_target( unit_tests ALL
                    DEPENDS ${TESTS})

# Run tests after building the project
# add_custom_command(TARGET unit_tests
#                 COMMENT "Run tests"
#                 POST_BUILD COMMAND ctest --output-on-failure)
