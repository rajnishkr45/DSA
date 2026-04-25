// Fibonacci series => 0 1 1 2 3 5 8 13 21 34.....
// n = ( n-1 ) + ( n-2 )

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of series  ";
    cin >> n;

    int i, a = 0, b = 1;
    cout << a << " " << b << " ";
    for (i = 1; i <= n; i++)
    {
        int series = a + b;
        cout << series << " ";
        a = b;
        b = series;
    }

    return 0;
}