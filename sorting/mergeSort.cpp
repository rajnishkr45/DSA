#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1]; // dynamically allocating array
    int *arr2 = new int[len2];

    // Copying values into new arrays
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++]; 
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++]; 
    }

    // Merging two sorted arrays
    int i = 0, j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }

    while (i < len1)
    {
        arr[k++] = arr1[i++];
    }

    while (j < len2)
    {
        arr[k++] = arr2[j++];
    }

    // Freeing the allocated space
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // Sorting left part
    mergeSort(arr, s, mid);

    // Sorting right part
    mergeSort(arr, mid + 1, e);

    // Merging the sorted arrays
    merge(arr, s, e);
}

int main()
{
    int arr[7] = {1, 5, 4, 3, 2, 5, 7};
    int n = 7, s = 0, e = n - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
