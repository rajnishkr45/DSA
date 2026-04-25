#include <bits/stdc++.h>
using namespace std;
void printName(int i, int n, string name)
{

    if (i > n)
    {
        return;
    }

    cout << name << endl;
    return printName(i + 1, n, name);
    
}

int main()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    printName(1, n, str);

    // for(int i =1; i<=n; i++){

    //     cout<< str;

        
    // }

    return 0;
}