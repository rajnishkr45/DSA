#include <iostream>
using namespace std;

// -------------------- 1. FUNCTION OVERLOADING --------------------
class Math
{
public:
    // Same function name, different parameters
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

// -------------------- 2. OPERATOR OVERLOADING --------------------
class Complex
{
public:
    int real, imag;

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator + (Complex c)
    {
        Complex temp(0, 0);
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

// -------------------- 3. METHOD OVERRIDING --------------------
class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal
{
public:
    // Overriding parent method
    void speak()
    {
        cout << "Dog barks" << endl;
    }
};

// -------------------- MAIN FUNCTION --------------------
int main()
{
    cout << "----- Function Overloading -----" << endl;
    Math m;
    cout << m.add(2, 3) << endl;          // int version
    cout << m.add(2.5, 3.5) << endl;      // double version
    cout << m.add(1, 2, 3) << endl;       // 3 parameters

    cout << "\n----- Operator Overloading -----" << endl;
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;   // calls overloaded +
    c3.display();

    cout << "\n----- Method Overriding -----" << endl;
    Animal a;
    Dog d;

    a.speak();  // Parent
    d.speak();  // Child (overridden)

    return 0;
}