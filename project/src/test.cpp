#include "test.hpp"

void Test::print_something() {
    std::cout << "Hello from new Test!" << std::endl;
}

void Test::a_new_method(int a) {
    std::cout << "Here is a number: " << a << std::endl;
}

void Test::a_virtual_method()
{
    std::cout << "Hello from virtual method!" << std::endl;
}
