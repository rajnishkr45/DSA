#include <iostream>
using namespace std;

class Hero // Hero is className
{

    // properties of class also called data members.
    // By default these properties are private it means it can be access inside the class only
    int age;

public: // public private and protected is access modifiers
        // we can access the data inside the class and outside the class below public
    int health;
    int level;

    void print()
    {
        cout << "Age of hero " << age << endl; // age is private so we can access it only inside class.
    }

}; // class k end me humesa semi-colon(terminator) hota hai .

int main()
{

    Hero knight;
    // we can access the values using dot operator

    knight.health = 69;
    knight.level = 350;

    // cout << "Age of Knight is " << knight.age << endl; // its giving the error because age is private by default.

    cout << "Health of knight is " << knight.health << endl;
    cout << "Health of knight is " << knight.level << endl;

    return 0;
}