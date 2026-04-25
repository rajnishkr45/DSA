#include <iostream>
using namespace std;
int main()
{
    int num = 5;

    // Pointer is a variable used to store the address of other varialbes. Size of pointer is 8 byte

    int *ptr = &num; // ptr will store the address of num.

    // & is called as address of operator and &num will be read as address of num .

    cout << "address of num is : " << &num << endl;

    char ch = 'A';
    char *p2 = &ch; // The type of pointer will be same as the type of variabl type.

    cout << "Address of ch is : " << p2 << endl;
    cout << "Address of ch by method 2 : " << &ch << endl;

    cout << "Value of ch using ponter : " << *p2 << endl; // Here * behind p2 is called as derefrence operator. 
    return 0;
}