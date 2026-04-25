#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Given N string in print unique strings in laxographical order and also tell the frequency of string
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Solution form here
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s = v[i];
        // m[s] = m[s] + 1; // it will update frequency if same is found again else it will make 0
        m[s]++;
    }

    // Print unique string and its frequency
    for (auto it : m)
    {
        cout << it.first << " => " << it.second << endl;
    }

    return 0;
}