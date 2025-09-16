#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{

    // Time Complexity : unordered map -> O(1)
    // Time Complexity : ordered map -> O(log n)
    unordered_map<string, int> m;

    // Instertion in map
    // 1
    pair<string, int> p = make_pair("Ram", 2);
    m.insert(p);

    // 2
    pair<string, int> pair2("Ramlal", 3);
    m.insert(pair2);

    // 3
    m["Ramu"] = 1;

    // what will happen if
    m["Ramu"] = 2; // it will update the old value indtead of creating duplicate one so no redundancy

    // Searching
    cout << m["Ramu"] << endl;      // method 1
    cout << m.at("Ramlal") << endl; // method 2

    // what will happen if we search unknow key

    // cout << m.at("unkonwnKey") << endl; // It will throw an error if key doesn't exist
    cout << m["unknownKey"] << endl;    // It will create a new key with zero value
    cout << m.at("unknownKey") << endl; // here it will show 0 because above new entry created

    cout << m.size() << endl; // It will show the size of map

    // How to check any key exist or not in the map
    cout << m.count("Rajnish") << endl; // Not present so it will be zero
    cout << m.count("Ramu") << endl;    // Present so it will be one

    // erase
    m.erase("Ramlal");
    cout << m.size() << endl;

    // Iterator : to excess full map
    unordered_map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << ": " << it->second << endl;
        it++;
    }

    return 0;
}