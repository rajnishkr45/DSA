#include <iostream>
using namespace std;

// Abstract class
class Shape
{

protected:
    int width, height;

public:
    // Pure virtual function (abstract method)
    virtual void draw() = 0;

    // Non-abstract method
    void setDimensions(int a, int b)
    {
        width = a;
        height = b;
    }
};

// Derived class 1
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Rectangle with width: " << width << " and height: " << height << endl;
    }
};

// Derived class 2
class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Triangle with base: " << width << " and height: " << height << endl;
    }
};

int main()
{
    // Shape shape; 
    // This will cause an error because we can't instantiate an abstract class

    Rectangle rect;
    rect.setDimensions(10, 5);
    rect.draw();

    Triangle tri;
    tri.setDimensions(6, 8);
    tri.draw();

    return 0;
}
