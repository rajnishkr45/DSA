// Print fibonacci series till n terms

// f(n) = f(n-1)+ f(n-2)

// 0, 1, 1 , 2, 3, 5, 8, 13

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int f1 = 0;
    int f2 = 1;
    cout << f1 << " " << f2 << " ";
    for (int i = 1; i <= n - 2; i++)
    {
        int f3 = f2 + f1;
        cout << f3 << ' ';
        f1 = f2;
        f2 = f3;
    }

    return 0;
}