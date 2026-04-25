/*

D
C D
B C D
A B C D

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
        for (j = 1; j <= i; j++)
        {
            cout << char(65 + n - i + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}