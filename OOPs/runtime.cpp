#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal *a;
    Dog d;

    a = &d;
    a->speak(); // Runtime polymorphism

    return 0;
}