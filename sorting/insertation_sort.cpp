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

    // insertation sort algo
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i]; // storing the i th element for comparsion with the rest of the element
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    cout << "\n\n****************** sorted array ****************** \n\n ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time complexity => worst case n^2
// Time complexity => best case n
// Use case => Stable and adaptable algo and works better on small sized array and partially sorted array
