#include <bits/stdc++.h>
using namespace std;

/*
📘 SORTING ALGORITHMS (WITH EXPLANATION + DIFFERENCE)
----------------------------------------------------
Includes:
- Explanation
- Approach
- Time Complexity
- C++ Code
*/

// --------------------------------------------------
// 1. Bubble Sort
// --------------------------------------------------
/*
Explanation:
Repeatedly compares adjacent elements and swaps them if they are in wrong order.

Time Complexity:
Best: O(n)
Worst: O(n^2)

Stable: Yes
*/
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// --------------------------------------------------
// 2. Selection Sort
// --------------------------------------------------
/*
Explanation:
Finds the minimum element and places it at correct position.

Time Complexity:
O(n^2)

Stable: No
*/
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

// --------------------------------------------------
// 3. Insertion Sort
// --------------------------------------------------
/*
Explanation:
Builds sorted array one element at a time.

Time Complexity:
Best: O(n)
Worst: O(n^2)

Stable: Yes
*/
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// --------------------------------------------------
// 4. Merge Sort
// --------------------------------------------------
/*
Explanation:
Divide and conquer algorithm.
Splits array and merges sorted halves.

Time Complexity:
O(n log n)

Stable: Yes
*/
void merge(vector<int> &arr, int l, int m, int r)
{
    vector<int> temp;
    int i = l, j = m + 1;

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }
    while (i <= m)
        temp.push_back(arr[i++]);
    while (j <= r)
        temp.push_back(arr[j++]);

    for (int k = l; k <= r; k++)
    {
        arr[k] = temp[k - l];
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

// --------------------------------------------------
// 5. Quick Sort
// --------------------------------------------------
/*
Explanation:
Picks a pivot and partitions array around it.

Time Complexity:
Best/Average: O(n log n)
Worst: O(n^2)

Stable: No
*/
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// --------------------------------------------------
// 6. Heap Sort
// --------------------------------------------------
/*
Explanation:
Uses binary heap structure.

Time Complexity:
O(n log n)

Stable: No
*/
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// --------------------------------------------------
// 🔥 DIFFERENCE SUMMARY
// --------------------------------------------------
/*
Algorithm      Time Complexity     Stable   Use Case
----------------------------------------------------
Bubble Sort    O(n^2)              Yes      Small data
Selection Sort O(n^2)              No       Simple cases
Insertion Sort O(n^2)              Yes      Nearly sorted data
Merge Sort     O(n log n)          Yes      Large data, stable needed
Quick Sort     O(n log n) avg      No       Fast in practice
Heap Sort      O(n log n)          No       Memory efficient
*/

// --------------------------------------------------
// MAIN FUNCTION
// --------------------------------------------------
int main()
{
    vector<int> arr = {5, 3, 8, 1, 2};

    quickSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
