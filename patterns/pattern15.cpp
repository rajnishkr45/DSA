/*

A B C
D E F
G H I

*/

#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << char(65 + count) << " "; // type casting used
            count++;
        }
        cout << endl;
    }

    return 0;
}