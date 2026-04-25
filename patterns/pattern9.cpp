/*

1
2 3
3 4 5
4 5 6 7

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
        for (j = 1; j <= i; j++) // Columns
        {
            cout << i + j - 1 << " ";
        }
        cout << endl;
    }

    return 0;
}

// We can solve it by another method too

/*
    for (i = 1; i <= n; i++) // Rows
    {
        int value = i;
        for (j = 1; j <= i; j++) // Columns
        {
            cout <<value << " ";
            value++;
        }
        cout << endl;
    }

 */