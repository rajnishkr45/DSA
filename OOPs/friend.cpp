// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class GFG
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class Friend_class;
};

// Here, class Friend_class is declared as a friend inside class GFG. Therefore, Friend_class is a friend of class GFG. Class F can access the private members of class GFG.

class Friend_class
{
public:
    void display(GFG &t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

// Driver code
int main()
{
    GFG g;
    Friend_class fri;
    
    fri.display(g);
    return 0;
}
