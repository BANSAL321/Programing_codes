/* C++ program to print level order traversal using STL */
#include <iostream>
#include <queue>
using namespace std;

struct Node
{    int data;
    struct Node *left, *right;
};

Node* newNode(int data)
{   Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL) return;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);

        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main()
{   // Let us create binary tree shown in above diagram
     Node *root           = newNode(1);
     root->left           = newNode(1);
     root->right          = newNode(2);
     root->left->left     = newNode(5);
     root->left->right    = newNode(4); 
     root->right->left    = newNode(7);
     root->right->right   = newNode(9);
     root->left->right->right= newNode(11);
    return 0;
}
