#include <bits/stdc++.h>
using namespace std;
void printN(int n)
{
    if (n < 1)
    {
        return;
    }
    
    cout << n << endl;
    return printN(n - 1);
}

int main()
{

    int n;
    cin >> n;

    printN(n);

    return 0;
}