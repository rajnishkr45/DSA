#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // k = constatnt window size = 4
    // Rules => you can either choose form all first four, all last four, 2 first 2 last, 1 last first and so on but you cannot choose form between
    // You have to find the maxm sum

    vector<int> arr = {1, 5, 2, 6, 3, 8, 6, 4, 8, 4};
    int maxSum = 0;
    int rightSum = 0, leftSum = 0;
    int size = arr.size();
    int k = 4;

    for (int i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    leftSum = maxSum;

    for (int i = 0; i < k; i++)
    {
        rightSum += arr[size - i - 1];
        leftSum -= arr[k - i - 1];

        maxSum = max(maxSum, leftSum + rightSum);
    }

    cout << maxSum;

    return 0;
}