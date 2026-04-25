// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base
{
public:
    virtual void print() { cout << "print base class\n"; } // virtual function

    void show() { cout << "show base class\n"; }
};

// Derived Class

class derived : public base
{
public:
    void print() { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

int main()
{
    base *base_ptr;
    derived derived;
    base_ptr = &derived;

    // Virtual function, binded at runtime
    base_ptr->print();

    // Non-virtual function, binded at compile time
    base_ptr->show();

    return 0;
}
