/*

1 1 1
2 2 2
3 3 3

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
        for (j = 1; j <= n; j++) // Coulmns
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}