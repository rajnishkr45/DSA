#include <iostream>
using namespace std;

int main()
{
    int n = 15, a = 6, b = 7;

    cout << "Right shift of " << n << " is : " << (15 >> 1) << endl;
    cout << "Left shift of " << n << " is : " << (15 << 1) << endl;
    cout << "Not of " << n << " is : " << (~n) << endl;
    cout << "OR of " << a <<" "<< b << " is : " << (a | b) << endl;
    cout << "AND of " << a <<" " << b << " is : " << (a & b) << endl;

    return 0;
}
