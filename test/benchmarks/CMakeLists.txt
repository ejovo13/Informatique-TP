set(EJOVO_TIME ON)

macro(ejovo_add_benchmark TESTNAME)

    # create an exectuable in which the tests will be stored
    set(TEST_BIN "time_${TESTNAME}")

    message(STATUS "Adding test ${TESTNAME}")
    add_executable(${TEST_BIN} "${TESTNAME}.c")
    target_link_libraries(${TEST_BIN} ${TEST_LIBS})
    target_include_directories(${TEST_BIN} PUBLIC ${TEST_INC})
    target_compile_options(${TEST_BIN} PUBLIC -g -pg)
    target_link_options(${TEST_BIN} PUBLIC -g -pg)
    set_target_properties(${TEST_BIN}
        PROPERTIES
        # OUTPUT_NAME ${TESTNAME}
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    )
    # add_test(${TESTNAME} test_${TESTNAME})
    add_custom_command(OUTPUT ${TEST_BIN}_out COMMAND ${TEST_BIN})

endmacro()

set(BENCHMARK_TESTS

    foreach_operations

)

if (EJOVO_TIME)

    message(STATUS "Enabling ejovo_time")

    ejovo_add_benchmark(foreach_operations)




endif()

# learn how to add a custom target to run a profiler on the benchmark operations!!!