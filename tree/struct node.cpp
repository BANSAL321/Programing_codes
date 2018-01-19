#include <stdio.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
 struct node* newNode(int data)
{
  // Allocate memory for new node 
  struct node* node = (struct node*)malloc(sizeof(struct node));
 
  // Assign data to this node
  node->data = data;
 
  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return(node);
}
 void preorder(struct node *pointers)
 {
  if(pointers==NULL)
    return;
    
    preorder(pointers->left);
    preorder(pointers->right);
    printf("%d", pointers->data);

   
 }
/* newNode() allocates a new node with the given data and NULL left and 
   right pointers. */

 
 
int main()
 using namespace std;

{
  /*create root*/
  struct node *root = newNode(1);  
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);

  
  preorder(root);
   getchar();
  return 0;
}