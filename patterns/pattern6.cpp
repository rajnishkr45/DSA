/*

#
# #
# # #
# # # #

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i, j;

    for (i = 1; i <= n; i++) // it is for rows
    {
        for (j = 1; j <= i; j++) // it is for columns
        {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}