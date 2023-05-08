#include <iostream>

#include "test.hpp"

using namespace std;

void call_virtual(ITest &test) {
    test.a_virtual_method();
}

int main() {
    Test test;
    test.print_something();
    test.a_new_method(100);

    call_virtual(test);
}
