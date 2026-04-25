#include <iostream>
using namespace std;
void update(int **ptr)
{
    // ptr = ptr + 1; // Kuch change hoga ? => NO!

    // *ptr = *ptr + 1; // Kuch change hoga ? => YES! , address which is stored in p1 will change by 4 bit and hence the value of num

    **ptr = **ptr + 1; // Kuch change hoga ? => YES! , Value of num will change 
}

int main()
{
    // Double pointer

    int num = 10;

    int *p1 = &num; // pointer wrt num

    int **p2 = &p1; // pointer wrt p1

    /*
        cout << "Address 1 : " << p1 << endl;
        cout << "Address 2 : " << p2 << endl;

        cout << "Value 1 : " << *p1 << endl; // Prints the value of num
        cout << "Value 2 : " << *p2 << endl; // Prints the address stired in p1( ie. value present in p1)
        cout << "Value 3: " << **p2 << endl; // Prints the value of num

        */

    cout << " Before" << endl
         << endl;

    cout << "Value 1 : " << *p1 << endl;
    cout << "Value 2 : " << *p2 << endl;
    cout << "Value 3: " << **p2 << endl;

    update(p2);

    cout << "After" << endl
         << endl;

    cout << "Value 1 : " << *p1 << endl;
    cout << "Value 2 : " << *p2 << endl;
    cout << "Value 3: " << **p2 << endl;

    return 0;
}