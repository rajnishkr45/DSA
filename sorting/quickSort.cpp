#include <iostream>
using namespace std;

// Function to partition the array on the basis of pivot
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    // Count how many elements are less than or equal to pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Giving pivot element its correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Sorting left and right parts of pivot element
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

// Function to perform quicksort
void quickSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    // Partitioning the array
    int p = partition(arr, s, e);

    // Sorting the left part
    quickSort(arr, s, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[9] = {8, 1, 5, 6, 4, 3, 4, 7, 2};
    int n = 9;

    quickSort(arr, 0, n - 1);

    // Printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
