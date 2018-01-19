// written by shubham bansal;
#include <stdio.h>
#include <stdlib.h>
struct node{
     int data;
     struct node* left;
     struct node* right;
    int  height ;

            };
struct node* newNode(int data){
     struct node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
     return(node);
                            }
int  max( int a, int b) {
         if (a>b)
         return a;
          else return b;   }
void preorder( struct node *root ) { 
            if( root==NULL)
            return ;
            printf("%d ",root->data );
            preorder(root->left);
            preorder( root-> right);
                                    }
void inorder( struct node * root) {   
            if( root==NULL)  return ;
            inorder(root->left);
            printf("%d ",root->data );
            inorder(root->right);  
                                    }
void postorder( struct node * root) { 
            if( root==NULL)return;
            postorder(root->left);
            postorder(root->right);
            printf("%d ",root->data);
             }
int countnodes( struct node *root ) { 
                        if( root==NULL)
                        return 0;
                        else
                        return 1+ countnodes(root->left) + countnodes( root->right);      
                         }
int heightoftree(struct node * root){
                
                        if(root==NULL)
                        return 0;
                        int leftmax= heightoftree( root-> left);
                        int  rightmax= heightoftree( root-> right);
                        return 1+ max(leftmax,rightmax);
                                      }
                                      // insertion for binary search tree;


void bstinsert( struct node *root,int key) {
                     struct  node *p,*p1,*par;
                     p= newNode(key);
                     p1=root;

                     while (p1!=NULL) { 
                     par=p1;
                     if( p1->data > p->data)
                     p1=p1->left;
                     else if  (( p1->data)<(p->data))  
                     p1=p1->right;     }
                                          }
                                           if(par-data>p->data)
                                            par-right=p;
                                           else
                                            par-left=p;

                                        

 


}

void ainsert( struct  node * root, int key)
 {


 }
void search(struct node * root, int key)
    {
          while(root!=NULL)
             {
              if( root->data > key)
                root=root->left;
              else if( root-> data<key)
                root=root->right;
             else
             {
                printf("KEY FOUND\n");
                 return ;

             }
     }
            return ;
     }
          int min( struct  node * root)
          {
             struct  node *p, * par;
                    p=root;

                 while( p!=NULL)
                {
                      par=p;
                      p=p->left;
                }
                return par->data;
          }

           int maxi(struct  node * root)
          {
             struct  node *p, * par;
                    p=root;

                 while( p!=NULL)
                {
                      par=p;
                      p=p->right;
                }
                return par->data;
          }
int sea( int in[], int start, int end, int key){ 
            int i;
           for (int i = start; i <=end ; ++i)
           if(in[i]==key)
           return i;
                                                   }
struct  node* buildtree( int in[], int  pre[], int start, int end){

            static int preindex=0;

            if(start>end)
               return NULL;

             struct node *tnode=newNode(pre[preindex++]);

             if( start==end)
               return tnode;


             int index=sea(in,start,end,tnode->data);
               

             tnode->left=buildtree(in,pre,start, index-1);
             tnode->right=buildtree(in,pre,index+1, end);

              return tnode;
                                                                      }

  /*  int  iscompl( struct  node *root)
     {
           if (root==NULL) 
           return 1;
           if ( (root-> left==NULL) && (root->right==NULL) )
            return 1;
           else if ((root->left)&&(root->right)) 
            return ((iscompl(root->left))&&(iscompl(root->right)));
           else 
            return 0;
        }
 */

int main()
{        int n; scanf("%d",&n);
         int p;
         scanf("%d",&p);
         struct node *root ,*root1;
         root  = newNode(p);
         root-> height =1;

          
         // make a binary searc tree ;
          for (int i = 1; i <n ; ++i){
          scanf("%d",&p);
          bstinsert(root,p);  
                                      }
            
              
      //   construction of tree form inrder and pre oreder ;
         printf("Enter the no of nodes  n=:\n");
         scanf("%d",&n);


       int pre[n],in[n];

            for (int i = 0; i < n; ++i)
            scanf("%d",&in[i]);
            for (int i = 0; i < n; ++i)
            scanf("%d",&pre[i]);

           root1=buildtree(in,pre, 0, n-1);
           inorder(root1);
            */
return 0;
}
