#include <iostream>
using namespace std;
int main()
{
    // Pinter in array;

    int num[10] = {5, 8, 9, 55};

    cout << num << endl; // it will give the address of 1st [0]th element ;

    // cout << &num[0] << endl; // It will also give the arrderss of [0]th element ;
    // cout << &num[1] << endl; // It will also give the arrderss of [1]st element ;
    // cout << &num[2] << endl; // It will also give the arrderss of [2]nd element ;

    /*
        for (int i = 0; i < 10; i++)
        {
            cout << "address of " << i <<"th element : "<< &num[i] << endl;
        }
    */

    cout << *num << endl;       // It will print base value of array
    cout << *(num + 2) << endl; // It will print second value of array
    cout << *num + 1 << endl;   // It will printbase value after increaseing 1 of array

    cout << num[2] << endl; // line no. 23 is same as it

    // so we came to know that arr[i] == *( arr + i )
    // similarly i[arr] == *(i+arr) It will not give error

    cout << 2 [num] << endl; // Its working

    /*
    int arr[5] = {1, 2, 3, 6, 4};
    char ch[6] = {'a', 'b', 'c', 'd', 'e'};

    // char *c = &ch; // Its giving the error

    cout << "Integer array : " << arr << endl; // Its giving base address

    cout << "Character array (string) : " << ch << endl; // Its printing the string

    cout << "Printing the address : " << &ch[0] << endl; // It will also print the complete string

*/

    return 0;
}