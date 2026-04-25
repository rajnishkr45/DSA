#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int setAge(int a)
    {
        this->age = a;
    }

    int getAge()
    {
        return this->age;
    }
};

// Single inheritance 

class Male : public Human // male is inheriting the property of human.
{
public:
    string color;
};

int main()
{
    Male Rajnish;

    cout << Rajnish.age << endl;
    cout << Rajnish.color << endl;
    cout << Rajnish.height << endl;

    Rajnish.setAge(21);
    cout << Rajnish.getAge() << endl;
    cout << Rajnish.age << endl;

    return 0;
}