cmake_minimum_required(VERSION 3.16)

project(SimpleCalculator
    VERSION 1.0
    DESCRIPTION "Simple C++ Calculator"
    LANGUAGES CXX
)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create calculator library
add_library(calculator
    src/calculator.cpp
)

# Tell the library where its header files are
target_include_directories(calculator
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# Create main application
add_executable(calculator_app
    src/main.cpp
)

# Link calculator library with application
target_link_libraries(calculator_app
    PRIVATE
        calculator
)

# Enable testing
enable_testing()

# Create test executable
add_executable(calculator_tests
    tests/test_calculator.cpp
)

# Link calculator library with tests
target_link_libraries(calculator_tests
    PRIVATE
        calculator
)

# Register test with CTest
add_test(
    NAME CalculatorTests
    COMMAND calculator_tests
)
