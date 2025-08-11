// Swap number with three variable
#include <iostream>
using namespace std;
int main()
{

    int a, b, temp = 0;
    cout << "Enter a and b one by one: ";
    cin >> a >> b;
    cout << "a: " << a << " b:" << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "after swapping\na: " << a << " b:" << b;

    return 0;
}