#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<string, int> m;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        // here the frequency will be checked and updated if it exist
        m[s] = m[s] + 1;
    }

    for (auto &pr : m)
    {
        cout << pr.first << " : " << pr.second << endl;
    }

    return 0;
}