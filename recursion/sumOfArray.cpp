#include <bits/stdc++.h>
using namespace std;
int sum(int *arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    else if (size == 0)
    {
        return 0;
    }

    return arr[0] + sum(arr + 1, size - 1);
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int ans = sum(arr, n);

    cout << ans;

    return 0;
}