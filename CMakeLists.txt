cmake_minimum_required(VERSION 3.10)
project(AdapterPattern VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(adapter_pattern STATIC
    src/Target.cpp
    src/Adaptee.cpp
    src/Adapter.cpp
)
target_include_directories(adapter_pattern PUBLIC include)

add_executable(adapter_example src/main.cpp)
target_link_libraries(adapter_example adapter_pattern)

option(BUILD_TESTS "Build tests" ON)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(third-party/gtest)
    
    add_executable(test_target tests/test_target.cpp)
    target_link_libraries(test_target adapter_pattern gtest_main)
    add_test(NAME test_target COMMAND test_target)

    add_executable(test_adaptee tests/test_adaptee.cpp)
    target_link_libraries(test_adaptee adapter_pattern gtest_main)
    add_test(NAME test_adaptee COMMAND test_adaptee)

    add_executable(test_adapter tests/test_adapter.cpp)
    target_link_libraries(test_adapter adapter_pattern gtest_main)
    add_test(NAME test_adapter COMMAND test_adapter)
endif()

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "adapter-pattern")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_CONTACT "Vladimir <123@mail.ru>")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Vladimit")
include(CPack)
