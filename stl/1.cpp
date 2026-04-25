#include <iostream>
#include <array>
using namespace std;
int main()
{

    cout << "Hello one and all lets learn STL ARRAY" << endl;
    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }

    cout << "";

        return 0;
}