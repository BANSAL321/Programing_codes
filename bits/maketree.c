// C program for different tree traversals
#include <stdio.h>
#include <stdlib.h>
// node declaration
struct node
{
     int data;
     struct node* left;
     struct node* right;
};
 // intailization of node 
struct node* newNode(int data)
{
     struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
 
     return(node);
}
 // pre order traversal 
void printPostorder(struct node* node)
{
     if (node == NULL)
        return;
 
     // first recur on left subtree
     printPostorder(node->left);
 
     // then recur on right subtree
     printPostorder(node->right);
 
     // now deal with the node
     printf("%d ", node->data);
}

void printInorder(struct node* node)
{
     if (node == NULL)
          return;
 
     /* first recur on left child */
     printInorder(node->left);
 
     /* then print the data of node */
     printf("%d ", node->data);  
 
     /* now recur on right child */
     printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;
 
     printf("%d ", node->data);  
     printPreorder(node->left);  
     printPreorder(node->right);
}    
 
/* Driver program to test above functions*/
int main()
{
     struct node *root    = newNode(3);
     root->left           = newNode(1);
     root->right          = newNode(2);
     root->left->left     = newNode(5);
     root->left->right    = newNode(4); 
     root->right->left    = newNode(7);
     root-> right-> right = newNode(9);
     root-> left-> ->right-> right= newNode(11);

 
     printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);
 
     //printf("\nInorder traversal of binary tree is \n");
     //printInorder(root);  
 
     //printf("\nPostorder traversal of binary tree is \n");
     //printPostorder(root);
 
     getchar();
     return 0;
}