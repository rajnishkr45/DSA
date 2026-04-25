#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> mp)
{
    cout << "Size of map : " << mp.size() << endl;

    for (auto it : mp)
    {
        cout << it.first << " => " << it.second << endl;
    }
}


int main()
{

    // by default map is ordered and its time complexity is O[log(n)] and it uses Red Black Tress behind the scene

    map<int, string> m;

    // Instertion

    m[1] = "Rajnish";
    m[8] = "Ramu";
    m[6] = "Ramlal";

    m[4]; // here empty string will be inserted by default

    m[8] = "Ramu Kaka"; // it will replace the old value of m[8] and new value will be added as map stores only unique values

    print(m);

    // find method => it will always return an iterator and if no key found then it returns end ie. m.end()
    auto it = m.find(3);

    if (it == m.end())
    {
        cout << "No value Found";
    }
    else
    {
        cout << (*it).first << " => " << (*it).second << endl;
    }
    return 0;
}