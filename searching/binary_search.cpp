#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Binary search is alway need a sorted array;
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];

    cout << "Enter the target :";
    int target;
    cin >> target;

    cout << "Enter the elements in array in sorted manner : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Algorithm
    bool found = 0;
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2; // It used for large number of inputs

    while (start < end)
    {

        if (arr[mid] == target)
        {
            cout << "Key found at :" << mid + 1 <<" Position";
            found = 1;
            return 0;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    if (!found)
    {
        cout << "Key does not exist";
    }

    return 0;
}