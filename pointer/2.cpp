#include <iostream>
using namespace std;
int main()
{
    int num = 5;

    int *p = &num;
    cout << "Address : " << p << endl;
    cout << "Value : " << *p << endl;

    int *q = 0;
    q = &num;
    cout << "Address : " << q << endl;
    cout << "Value : " << *q << endl;

    // Both the above code will do same thing don't get cofused;

    // when we creat any variable and copy that and then make change then its original value is same

    int num2 = 5;
    int var = num2;
    cout << "Value of num2 before increament in var : " << num2 << endl;
    var++;
    cout << "Value of var after increament : " << var << endl;

    cout << "Value of num2 after increament in var : " << num2 << endl;

    // Now we will use the pointer method and check what happens;

    int num3 = 9;
    int *ptr = &num3;
    cout << "Before increament value of num3 : " << num3 << endl;
    (*ptr)++;

    cout << "After increament value of num3 : " << num3 << endl;

    // Copying a pointer => For copying the pointer we need to make new pointer

    int *copy = ptr;

    cout << " Copy : " << copy << " - Ptr : " << ptr << endl;

    cout << "V Copy : " << *copy << " - V Ptr : " << *ptr << endl;

    // when we increase *ptr++ => It will increase the value BUT when we do ptr++ => It will move to next integer ie. 4 byte will increase.

    return 0;
}