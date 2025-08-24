// Find the subarray that will give the maxm sum lenght of subarray must be 4

// n = lenght of array
// k = lenght of subarray = 4

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr = {1, -2, 3, 3, 4, 6, 7, -5, 2};
    int n = arr.size();
    int k = 4;
    int sum = 0, maxSum = INT_MIN;
    int l = 0, r = k - 1;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    while (r < n - 1)
    {
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        maxSum = max(sum, maxSum);
    }

    cout << maxSum;
    return 0;
}