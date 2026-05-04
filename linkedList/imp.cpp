#include <bits/stdc++.h>
using namespace std;

// ---------------- NODE STRUCTURE ----------------
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// ---------------- HELPER FUNCTIONS ----------------

// Insert at end
void insertAtEnd(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);

    if (!head)
    {
        head = newNode;
        return;
    }

    ListNode *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Print linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// ---------------- 1. REVERSE LINKED LIST ----------------
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;

    while (curr)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// ---------------- 2. FIND MIDDLE ----------------
ListNode *findMiddle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// ---------------- 3. DETECT CYCLE ----------------
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

// ---------------- 4. MERGE TWO SORTED LISTS ----------------
ListNode *mergeLists(ListNode *l1, ListNode *l2)
{
    ListNode dummy(0);
    ListNode *tail = &dummy;

    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

// ---------------- 5. REMOVE Nth NODE FROM END ----------------
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode dummy(0);
    dummy.next = head;

    ListNode *fast = &dummy;
    ListNode *slow = &dummy;

    for (int i = 0; i <= n; i++)
    {
        fast = fast->next;
    }

    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return dummy.next;
}

// ---------------- 6. CHECK PALINDROME ----------------
bool isPalindrome(ListNode *head)
{
    if (!head || !head->next)
        return true;

    // find middle
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // reverse second half
    ListNode *prev = NULL;
    ListNode *curr = slow;

    while (curr)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // compare both halves
    ListNode *first = head;
    ListNode *second = prev;

    while (second)
    {
        if (first->val != second->val)
            return false;
        first = first->next;
        second = second->next;
    }

    return true;
}

// ---------------- 7. INTERSECTION ----------------
ListNode *getIntersection(ListNode *a, ListNode *b)
{
    if (!a || !b)
        return NULL;

    ListNode *p1 = a;
    ListNode *p2 = b;

    while (p1 != p2)
    {
        p1 = p1 ? p1->next : b;
        p2 = p2 ? p2->next : a;
    }

    return p1;
}

// ---------------- MAIN FUNCTION ----------------
int main()
{
    ListNode *head = NULL;

    // create list: 1->2->3->4->5
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    cout << "Original List:\n";
    printList(head);

    // Reverse
    head = reverseList(head);
    cout << "\nReversed List:\n";
    printList(head);

    // Middle
    cout << "\nMiddle Node: " << findMiddle(head)->val << endl;

    // Palindrome check
    cout << "\nIs Palindrome: " << (isPalindrome(head) ? "Yes" : "No") << endl;

    // Remove nth node
    head = removeNthFromEnd(head, 2);
    cout << "\nAfter Removing 2nd Node from End:\n";
    printList(head);

    return 0;
}