/*

A
B B
C C C
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
    for (i = 1; i <= n; i++) // Its for rows
    {
        for (j = 1; j <= i; j++) // Its for columns
        {
            cout << char(65 + i - 1) <<" ";
        }
        cout << "\n";
    }

    return 0;
}