#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor call
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *box1;

    box1 = new Node(45);

    cout << box1 << endl;
    cout << box1->data << " " << box1->next << endl;
    // cout << box1->next << endl;

    return 0;
}