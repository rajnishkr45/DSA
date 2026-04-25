#include <iostream>
using namespace std;
// Merge two sorted array;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int arr1[3] = {1, 2, 4};
    int arr2[5] = {3, 5, 6, 8, 9};
    int arr3[8];

    merge(arr1, 3, arr2, 5, arr3);

    for (int i = 0; i < 8; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}