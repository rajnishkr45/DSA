// Generate all subrray using brutefroce method
// n = lenght of array

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, -2, 3, 3, 4, 6, 7, -5, 2};
    int n = arr.size();
    vector<vector<int>> subarr;

    for (int i = 0; i < n; i++)
    {
        vector<int> arr1; // Temprory array
        for (int j = i; j < n; j++)
        {
            arr1.push_back(arr[j]); // Push the element in temprory array
            subarr.push_back(arr1); // Push the current subarray
        }
    }

    // Print all subarry
    for (int i = 0; i < subarr.size(); i++)
    {
        for (int j = 0; j < subarr[i].size(); j++)
        {
            cout << subarr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}