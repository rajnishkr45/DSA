#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constrctor call
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    Node *box1;

    box1 = new Node(77);
    cout << box1 << " " << box1->data << " " << box1->next << " " << box1->prev << endl;

    Node *Rajjo;
    Rajjo = new Node(45);
    cout << Rajjo << " " << Rajjo->data << " " << Rajjo->next << " " << Rajjo->prev << endl;

    return 0;
}