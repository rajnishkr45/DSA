#include <bits/stdc++.h>
using namespace std;

/*
              2
            /   \
           3     5
          / \    / \
         7   11 13  NULL

*/

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the left Node of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the right Node of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); 

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
               q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    // Initilize empty root
    Node *root = NULL;

    // Creating tree
    root = buildTree(root);
    // data -> 2 3 7 -1 -1 11 -1 -1 5 13 -1 -1 -1

    cout << "Printing the binary tree" << endl;
    // Print binary tree
    levelTraversal(root);

    return 0;
}