/*

A B C
B C D
C D E

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << char(65 + i + j - 2) << " "; // type casting used
        }
        cout << endl;
    }

    return 0;
}