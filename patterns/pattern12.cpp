/*

A B C D
A B C D
A B C D
A B C D

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    if (n >= 1 && n <= 26)
    {

        int i, j;

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cout << char(65 + j - 1) << " "; // type casting used
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No character exist ..." << endl;
    }
    return 0;
}