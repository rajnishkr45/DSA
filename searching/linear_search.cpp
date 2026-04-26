#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin >> n;
    int arr[n];

    cout<<"Enter the target :";
    int target;
    cin >> target;

    cout<<"Enter the elements in array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    for (i; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "element is at " << i + 1 << " Position";
            return 0;
        }
    }

    if (i >= n)
    {
        cout << "Not Found";
    }

    return 0;
}