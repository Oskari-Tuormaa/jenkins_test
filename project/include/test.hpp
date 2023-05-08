#pragma once

#include <iostream>

class Test {
public:
    void print_something();

    void a_new_method(int a);

    virtual void a_virtual_method() = 0;
};

