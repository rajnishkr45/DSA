#include <bits/stdc++.h>
using namespace std;
int linearSearch(int *arr, int size, int target, int index = 0)
{
    // 1. Check base case FIRST (Is the index out of bounds?)
    if (index >= size)
    {
        return -1;
    }

    // 2. Check current element
    if (arr[index] == target)
    {
        return index;
    }

    // 3. Recursive call (Pointer stays same, index moves up)
    return linearSearch(arr, size, target, index + 1);
}
int main()
{

    int n;
    int target;
    cin >> n;
    cin >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int ans = linearSearch(arr, n, target);

    cout << ans;

    return 0;
}