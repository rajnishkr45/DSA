// Find the longest subarray where the sum <= 14
// n = lenght of array

// Bruteforce method
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {10, 2, 3, 3, -5, 4, 6, 2, 2};
    int n = arr.size();
    int target = 14;
    int maxLen = 0;
    int start = -1, end = -1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum <= target)
            {
                if (maxLen < j - i + 1)
                {
                    maxLen = max(maxLen, j - i + 1);
                    start = i;
                    end = j;
                }
            }
        }
    }

    cout << "Max length of subarray: " << maxLen << endl;

    if (start != end)
    {
        for (int i = start; i <= end; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // Not a good approach => T(n) = O(n^2)

    return 0;
}