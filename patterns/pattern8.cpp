/*

1
2 3
4 5 6
7 8 9 10

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
        for (j = 1; j <= i; j++) // columns
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}