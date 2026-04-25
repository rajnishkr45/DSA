#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) // n-1 tak chalega because last element automatically gets sorted
    {
        bool swapped = false; // added for optimization

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    cout << "\n\n****************** sorted array **********************\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity => worst case => n^2 ( Array in reverse order )
// Time complexity => Best case => n ( Array already sorted )
// Use case => i th round me ith largest element sort hoga ( last se );