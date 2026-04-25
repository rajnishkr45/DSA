#include <bits/stdc++.h>
using namespace std;

// Custom comperator function
bool cmp(pair<int, int> a, pair<int, int> b)
{
    
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    //Sorting pairs 
    


    // Output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}