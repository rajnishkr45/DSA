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

// Deletion of head;
Node *deleteHead(Node *head)
{
    Node *temp = head;
    head = head->next; // Now link list will start from here;

    // free up the space using delete keyword
    delete temp;

    return head;
}

// Deletion of tail
Node *deleteTail(Node *head)
{
    // Case 1: Empty list
    if (head == NULL)
        return NULL;

    // Case 2: Only one node
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *temp = head;

    // Go to second last node
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Delete last node
    delete temp->next;

    // Set second last node's next to NULL
    temp->next = NULL;

    return head;
}

Node *deleteAtK(Node* head, int k){
    if(head == NULL) return NULL;

    Node* temp = head;

    if(k == 1){
        head = head->next;
        delete temp;
        return head;
    }

    else{
        int count = 1;

        while (temp != NULL){
            
            count ++;
            Node * previous = temp->next;

            if(count == k){


                previous->next = previous->next->next;
                delete previous->next;
            }
        }

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

    cout << endl
         << "head deleted and new linked list printed" << endl;

    Node *head = deleteHead(first);
    print(head);

    return 0;
}