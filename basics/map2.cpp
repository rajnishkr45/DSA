#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;

    for (int i = 0; i <= 20; i++)
    {
        m[i] = 2 * i;
    }

    // print the map

    // for (auto &pr : m)
    // {
    //     cout << pr.first << " : " << pr.second << endl;
    // }

    // find key word in map

    auto it = m.find(21); // It will return iterator if no value present the it will return last one

    if (it == m.end())
    {
        cout << "No value";
    }
    else
    {
        cout << it->first << " : " << it->second << endl;
    }

    // erase in map

    m.erase(3); // it will delete the key value 
    m.erase(it); // we can pass iterator it will erase the found value which was founded by m.find() => always add a check wether the it exist or not

    

    return 0;
}