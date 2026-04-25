/*

1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

*/

#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i, j;

    for (i = 1; i <= n; i++) // Rows
    {
        for (j = 1; j <= n; j++) // Columns
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}