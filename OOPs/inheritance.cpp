#include <iostream>
using namespace std;

// ---------------- BASE CLASS ----------------
class Human
{
public:
    int height;
    int weight;
    int age;

    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

// ---------------- 1. SINGLE INHERITANCE ----------------
class Male : public Human
{
public:
    string color;
};

// ---------------- 2. MULTILEVEL INHERITANCE ----------------
class Indian : public Male
{
public:
    string language = "Hindi";
};

// ---------------- 3. MULTIPLE INHERITANCE ----------------
class Student
{
public:
    int rollNo;
};

class Athlete
{
public:
    string sport;
};

class SportsStudent : public Student, public Athlete
{
public:
    string name;
};

// ---------------- 4. HIERARCHICAL INHERITANCE ----------------
class Female : public Human
{
public:
    string hairType;
};

// ---------------- 5. HYBRID INHERITANCE ----------------
// Hybrid = combination (here: multiple + hierarchical)

class A
{
public:
    void funcA()
    {
        cout << "Class A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Class B" << endl;
    }
};

class C
{
public:
    void funcC()
    {
        cout << "Class C" << endl;
    }
};

class D : public B, public C
{
public:
    void funcD()
    {
        cout << "Class D (Hybrid)" << endl;
    }
};

// ---------------- MAIN FUNCTION ----------------
int main()
{
    cout << "----- Single Inheritance -----" << endl;
    Male m;
    m.height = 180;
    m.setAge(21);
    m.color = "Brown";
    cout << m.getAge() << endl;

    cout << "\n----- Multilevel Inheritance -----" << endl;
    Indian i;
    i.setAge(22);
    cout << i.getAge() << " " << i.language << endl;

    cout << "\n----- Multiple Inheritance -----" << endl;
    SportsStudent s;
    s.name = "Rajnish";
    s.rollNo = 101;
    s.sport = "Cricket";
    cout << s.name << " " << s.rollNo << " " << s.sport << endl;

    cout << "\n----- Hierarchical Inheritance -----" << endl;
    Female f;
    f.setAge(20);
    f.hairType = "Curly";
    cout << f.getAge() << " " << f.hairType << endl;

    cout << "\n----- Hybrid Inheritance -----" << endl;
    D obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    obj.funcD();

    return 0;
}