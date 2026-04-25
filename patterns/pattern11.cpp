/*

A A A A
B B B B
C C C C
D D D D

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
            cout << char(65 + i - 1) << " "; // type casting used
        }
        cout << endl;
    }

    return 0;
}