#include <iostream>
#include <queue> 

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

Node *levelOrderBuild()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    Node *root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;
        if(c1 != -1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2 != -1)
        {
            current->right = new Node(c2);
            q.push(current->right);
        }
    }
    return root;
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


/*Level Order traversal

1
2 3
4 5 6
7
*/

void printlevelOrder(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL); 

    while(!q.empty())
    {
        Node* temp = q.front();
        if(temp == NULL)
        {
            cout << endl;
            q.pop();

            // insert a new NULL for the next level
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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

    cout << "levelorder: \n";
    printlevelOrder(root);
    cout << endl;

    
    root = levelOrderBuild();
    cout << "levelorder build: \n";
    printlevelOrder(root);
    cout << endl;

    return 0;
}