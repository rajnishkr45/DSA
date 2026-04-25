#include <bits/stdc++.h>
using namespace std;
void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << endl;
    return printName(i + 1, n);
}

int main()
{

    int n;
    cin >> n;

    cout << endl;
    printName(1, n);

    return 0;
}