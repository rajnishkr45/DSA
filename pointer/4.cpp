#include <iostream>
using namespace std;
void print(int *a)
{
    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl;
}

void update(int *q)
{

    // q  = q + 1; // It will update the value of pointer indside update not outside

    *q = *q + 1; // It will change the value of pointer passed through
}

int getSum(int arr[], int n) // we can write arr[] as *arr;
{
    cout << "Size of getSum arr : " << sizeof(arr) << endl;
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
int main()
{
    // Functions and array

    /*
        int num = 2;
        int *p = &num;

        print(p);

        cout << "Before : " << *p << endl;

        update(p);

        cout << "After : " << *p << endl;
    */

    int arr[5] = {1, 2, 3, 4, 5};

    cout << getSum(arr, 5) << endl; // passed the array actually the base address

    return 0;
}