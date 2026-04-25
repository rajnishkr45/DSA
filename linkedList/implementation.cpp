#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Print LL
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *first = new Node(5);
    Node *second = new Node(56);
    Node *third = new Node(11);

    first->next = second;
    second->next = third;

    print(first);

    return 0;
}