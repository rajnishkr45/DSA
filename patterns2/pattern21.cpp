/*

****
***
**
*

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i, j;
    for (i = 1; i <= n; i++) // Rows
    {
        for (j = n - i + 1; j >= 1; j--) // Columns
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}