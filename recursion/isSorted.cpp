#include <bits/stdc++.h>
using namespace std;
bool isShorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }else
    {
        return isShorted(arr + 1, size - 1);
    }
}

int main()
{
    int n;
    cin>> n;
    int nums[n];

    for(int i = 0; i< n; i++){
        int num;
        cin>>num;
        nums[i]  = num;
    }

    bool answer = isShorted(nums, n);

    cout<<answer;

    return 0;
}