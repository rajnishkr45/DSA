/*

3 2 1
3 2 1
3 2 1

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
        for (j = n; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}