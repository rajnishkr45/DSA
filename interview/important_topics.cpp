#include <bits/stdc++.h>
using namespace std;

/*
📘 DSA INTERVIEW QUESTIONS WITH EXPLANATION + C++ CODE
-----------------------------------------------------
This file contains commonly asked DSA questions with:
1. Explanation
2. Approach
3. Code in C++
*/

// --------------------------------------------------
// 1. Reverse an Array
// --------------------------------------------------
/*
Explanation:
Reversing an array means swapping elements from start and end.

Approach:
Use two pointers: one at start, one at end.
Swap and move inward.

Time Complexity: O(n)
*/
void reverseArray(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// --------------------------------------------------
// 2. Check Palindrome String
// --------------------------------------------------
/*
Explanation:
A string is palindrome if it reads same forward and backward.

Approach:
Use two pointers and compare characters.

Time Complexity: O(n)
*/
bool isPalindrome(string s)
{
    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

// --------------------------------------------------
// 3. Find Largest Element
// --------------------------------------------------
/*
Explanation:
Find maximum value in array.

Approach:
Traverse array and keep track of max.

Time Complexity: O(n)
*/
int findMax(vector<int> &arr)
{
    int mx = arr[0];
    for (int x : arr)
    {
        mx = max(mx, x);
    }
    return mx;
}

// --------------------------------------------------
// 4. Binary Search
// --------------------------------------------------
/*
Explanation:
Search element in sorted array.

Approach:
Divide array into halves.

Time Complexity: O(log n)
*/
int binarySearch(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// --------------------------------------------------
// 5. Bubble Sort
// --------------------------------------------------
/*
Explanation:
Repeatedly swap adjacent elements if they are in wrong order.

Time Complexity: O(n^2)
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
// 6. Two Sum Problem
// --------------------------------------------------
/*
Explanation:
Find two numbers that add up to target.

Approach:
Use hashmap to store visited elements.

Time Complexity: O(n)
*/
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if (mp.count(diff))
        {
            return {mp[diff], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

// --------------------------------------------------
// 7. Valid Parentheses
// --------------------------------------------------
/*
Explanation:
Check if parentheses are balanced.

Approach:
Use stack.

Time Complexity: O(n)
*/
bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
            st.push(c);
        else
        {
            if (st.empty())
                return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;
        }
    }
    return st.empty();
}

// --------------------------------------------------
// 8. Merge Two Sorted Arrays
// --------------------------------------------------
/*
Explanation:
Merge two sorted arrays into one sorted array.

Approach:
Use two pointers.

Time Complexity: O(n + m)
*/
vector<int> mergeArrays(vector<int> &a, vector<int> &b)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            res.push_back(a[i++]);
        else
            res.push_back(b[j++]);
    }
    while (i < a.size())
        res.push_back(a[i++]);
    while (j < b.size())
        res.push_back(b[j++]);
    return res;
}

// --------------------------------------------------
// 9. Fibonacci (Recursion)
// --------------------------------------------------
/*
Explanation:
Each number is sum of previous two.

Time Complexity: Exponential
*/
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// --------------------------------------------------
// 10. Detect Cycle in Linked List
// --------------------------------------------------
/*
Explanation:
Check if linked list has loop.

Approach:
Floyd’s Cycle Detection (slow & fast pointers)

Time Complexity: O(n)
*/
struct ListNode
{
    int val;
    ListNode *next;
};

bool hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

// --------------------------------------------------
// MAIN FUNCTION (for testing)
// --------------------------------------------------
int main()
{
    vector<int> arr = {5, 2, 9, 1};
    reverseArray(arr);

    cout << "Max: " << findMax(arr) << endl;
    cout << "Palindrome (madam): " << isPalindrome("madam") << endl;

    return 0;
}
