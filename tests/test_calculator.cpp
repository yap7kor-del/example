#include <iostream>
#include "calculator.h"

bool test_add() {
    return add(2, 3) == 5;
}

bool test_subtract() {
    return subtract(10, 4) == 6;
}

bool test_multiply() {
    return multiply(3, 4) == 12;
}

bool test_divide() {
    return divide(10, 2) == 5;
}

bool test_divide_by_zero() {
    return divide(10, 0) == 0;
}

int main() {
    bool success = true;

    if (test_add()) {
        std::cout << "PASS: add\n";
    } else {
        std::cout << "FAIL: add\n";
        success = false;
    }

    if (test_subtract()) {
        std::cout << "PASS: subtract\n";
    } else {
        std::cout << "FAIL: subtract\n";
        success = false;
    }

    if (test_multiply()) {
        std::cout << "PASS: multiply\n";
    } else {
        std::cout << "FAIL: multiply\n";
        success = false;
    }

    if (test_divide()) {
        std::cout << "PASS: divide\n";
    } else {
        std::cout << "FAIL: divide\n";
        success = false;
    }

    if (test_divide_by_zero()) {
        std::cout << "PASS: divide by zero\n";
    } else {
        std::cout << "FAIL: divide by zero\n";
        success = false;
    }

    return success ? 0 : 1;
}
