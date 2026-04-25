#include <bits/stdc++.h>
using namespace std;

// Custom sorting behaviour
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*

    // Sorting algorithm
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!cmp(arr[i], arr[j]))
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    */

    // Using cmp function in inbuilt sorting function
    sort(arr.begin(), arr.end(), cmp);

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}