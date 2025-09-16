// Find the longest substring without repeating the character

// Bruteforce method
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "asgrtabjdtar";
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        string substr;
        for (int j = i; j < n; j++)
        {
            substr += str[j];
            cout << substr << endl;
        }
        cout << endl;
    }

    return 0;
}