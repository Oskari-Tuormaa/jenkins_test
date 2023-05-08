#pragma once

#include <iostream>

class ITest {
public:
    virtual void a_virtual_method() = 0;
};

class Test: public ITest {
public:
    void print_something();

    void a_new_method(int a);

    void a_virtual_method() override;
};

