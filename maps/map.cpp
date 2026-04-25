#include <bits/stdc++.h>
using namespace std;
int main()
{

    // by default map is ordered and its time complexity is O[log(n)] and it uses Red Black Tress behind the scene

    map<int, string> m;

    // Instertion

    m[1] = "Rajnish";
    m[8] = "Ramu";
    m[6] = "Ramlal";

    // Second method to Insert
    m.insert({5, "Ramu Kaka"});

    // Custom iteratior
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " => " << (*it).second << endl;
    }

    cout << endl;
    // New way and better way
    for (auto &it : m)
    {
        cout << it.first << " => " << it.second << endl;
    }

    // find method => it will always return an iterator and if no key found then it returns end ie. m.end()

    auto it = m.find(3);
    if (it == m.end())
    {
        cout << "No value Found";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << "endl";
    }
    return 0;
}