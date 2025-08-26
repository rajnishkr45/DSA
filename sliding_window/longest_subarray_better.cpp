// Find the longest subarray where the sum <= 15
// n = lenght of array

// Better approach => T(n) = O(2*n)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {7, 2, 3, 1, 5, 4, 6, 2, 10};
    int n = arr.size();
    int target = 7;
    int maxLen = 0;
    int left = 0, right = 0;
    int sum = 0;

    while (right < n)
    {
        sum += arr[right];

        while (sum > target && left <= right)
        {
            sum = sum - arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
        right++;
    }

    cout << "Max length of subarray: " << maxLen << endl;

    // if (right != 0)
    // {
    //     for (int i = left; i <= right; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // For optimal answer just replace while with if and it will be => T(n) = O(n)
    return 0;
}