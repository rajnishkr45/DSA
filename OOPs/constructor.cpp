#include <iostream>
using namespace std;

class Hero
{

    // constructor

    // constructor is a special function that initializes an object when a class is declared or an object is created. Constructors are automatically called by the compiler and have the same name as the class. They can take parameters to set the initial values of the object's attributes, or they can have no parameters and use default values.

private:
    int age;

public:
    int health;
    int level;

    int setAge(int a) // setter also called mutator
    {
        age = a;
    }

    int getAge() // getter also called accessor
    {
        return age;
    }
};

int main()
{
    // it is static allocation;
    Hero knight;

    knight.setAge(21);
    knight.level = 350;
    knight.health = 69;

    cout << "Age of knight is : " << knight.getAge() << endl; // it will give the age using getter
    cout << "Level of knight is : " << knight.level << endl;
    cout << "Health of knight is : " << knight.health << endl;

    // Dynamic allocation;

    Hero *sexy_killer = new Hero;

    // setting the dynamic Hero

    (*sexy_killer).setAge(18); // Method 1 => First you dereferance and then access.
    (*sexy_killer).level = 181;

    sexy_killer->health = 89; // Method 2 => Just use arrow operator and access it.

    cout << "age of sexy_killer is : " << sexy_killer->getAge() << endl;
    cout << "Level of sexy_killer is : " << (*sexy_killer).level << endl;
    cout << "Health of sexy_killer is : " << sexy_killer->health << endl;

    return 0;
}