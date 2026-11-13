#include <iostream>

using namespace std;

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// Preorder: 1 2 4 5 7 3 6 

// Inorder: 4,2,7,5,1,3,6

// Postorder: 4,7,5,2,6,3,1

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node *buildTree()
{
    int d;

    // Stop if input fails or reaches the end.
    if (!(cin >> d))
    {
        return NULL;
    }

    // -1 represents a missing node.
    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

// Inorder traversal
void printInorder(Node *root)
{
    if(root == NULL){
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// postorder traversal
void printpostOrder(Node *root)
{
    if(root == NULL){
        return;
    }

    printpostOrder(root->left);
    printpostOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    cout << "Enter tree values (-1 for a missing node):" << endl;

    Node *root = buildTree();

    cout << "Preorder: ";
    printPreorder(root);
    cout << endl;

    cout << "Inorder: ";
    printInorder(root);
    cout << endl;

    cout << "Postorder: ";
    printpostOrder(root);
    cout << endl;

    return 0;
}