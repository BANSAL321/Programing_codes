// written by shubham bansal;

#include <stdio.h>
#include <stdlib.h>
// node declaration
struct node{
     int data;
     struct node* left;
     struct node* right;
 };

 // intailization of node 
struct node* newNode(int data){
     struct node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
return(node);
 }
int max( int a, int b) {
         if (a>b)
         return a;
          else return b;
      }
void preorder( struct node *root ) { if( root==NULL)
            return ;
            printf("%d ",root->data );
            preorder(root->left);
            preorder( root-> right);
             }
void inorder( struct node * root) {   if( root==NULL)  return ;
            inorder(root->left);
            printf("%d ",root->data );
            inorder(root->right);  
        }
void postorder( struct node * root) { if( root==NULL)return;
            postorder(root->left);
            postorder(root->right);
            printf("%d ",root->data);
             }
int countnodes( struct node *root ) { if( root==NULL)
                        return 0;
                        else
                        return 1+ countnodes(root->left) + countnodes( root->right);      
                         }
                         // heigth of a tree ;

int heightoftree(struct node * root){
                
                if(root==NULL)
                     return 0;
                
                 
                         int leftmax= heightoftree( root-> left);
                        int  rightmax= heightoftree( root-> right);

                         return 1+ max(leftmax,rightmax);
                        }




int main()
{
   /*  struct node *root    = newNode(3);
     root->left           = newNode(1);
     root->right          = newNode(2);
     root->left->left     = newNode(5);
     root->left->right    = newNode(4); 
     root->right->left    = newNode(7);
     root->right->right   = newNode(9);
     root->left->right->right= newNode(11);
      toprightview(root);
      */
      int key;
      
         return 0;
}