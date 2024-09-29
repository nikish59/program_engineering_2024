cmake_minimum_required(VERSION 3.14)
project(sample_cpp_project)

add_executable(main main.cpp my_add.cpp)

include(FetchContent)
set(BENCHMARK_ENABLE_TESTING off)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG main
)

FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG main
)
FetchContent_MakeAvailable(
    googletest
    googlebenchmark)

enable_testing()
add_executable(tests test_add.cpp my_add.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)


add_executable(bench bench_add.cpp my_add.cpp)
target_link_libraries(bench benchmark::benchmark)


