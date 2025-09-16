#include <iostream>
#include <vector>
using namespace std;

// Node structure
struct Node {
    int data;
    vector<Node*> children; // A node can have multiple children

    Node(int val) {
        data = val;
    }
};

// Function to print tree in DFS manner
void printTree(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " "; // Print current node
    for (auto child : root->children) {
        printTree(child); // Recursively print children
    }
}

int main() {
    // Creating root node
    Node* root = new Node(1);

    // Adding children to root
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(4));

    // Adding children to node 2
    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));

    // Adding child to node 3
    root->children[1]->children.push_back(new Node(7));

    cout << "Tree (DFS Traversal): ";
    printTree(root);

    return 0;
}
