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
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
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
    if (root == NULL)
    {
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// postorder traversal
void printpostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printpostOrder(root->left);
    printpostOrder(root->right);
    cout << root->data << " ";
}

// helper function: Height of the tree
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1 + max(h1, h2);
}

// largest Diameter of the tree

// complexity of node O(n^2)

int diameter(Node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    // rec case: added + 1 for the root node
    int D1 = height(root->left) + height(root->right) + 1; 
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1, max(D2, D3));
}

/*Level Order traversal

1
2 3
4 5 6
7
*/

void printlevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();

            // insert a new NULL for the next level
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
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

    int treeHeight = height(root);
    cout << "Height of the tree: " << treeHeight << endl;
    cout << endl;

    // Use the existing root, don't call buildTree() again here!
    cout << "Diameter is: " << diameter(root) << endl;
    cout << endl;

    cout << "levelorder: \n";
    printlevelOrder(root);
    cout << endl;

    // NOTE: levelOrderBuild expects a separate level-order input stream, 
    // so if you want to test it, feed it its own input data separately.
    // root = levelOrderBuild();
    // cout << "levelorder build: \n";
    // printlevelOrder(root);
    // cout << endl;

    return 0;
}