#include <iostream>
using namespace std;

class Student
{
private:
    int age; // hidden data
    string name;

public:
    // Setter (to set value)
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }

    // Getter (to access value)
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;

    // s.age = 20; ❌ Not allowed (private)

    s.setData("Rajnish", 21); // allowed
    s.getData();

    return 0;
}