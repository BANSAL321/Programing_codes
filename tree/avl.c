// C program to insert a node in AVL tree
#include<stdio.h>
#include<stdlib.h>

// An AVL tree node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	int height;
    int noc;
};

int max(int a, int b);
int height(struct Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

/* Helper function that allocates a new node with the given key and
	NULL left and right pointers. */
struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)
						malloc(sizeof(struct Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1; // new node is initially added at leaf
    node->noc=1;
	return(node);
}


// / getting the no of childern ;
 int getnoc(struct Node* node)
{
    if(node==NULL)
        return 0;
    return node->noc;
}

// A utility function to right rotate subtree rooted with y
// See the diagram given above.
struct Node *rightRotate(struct Node *y)
{
	struct Node *x = y->left;
	struct Node *T2 = x->right;

    //Updaate Noc
    y->noc=getnoc(y)+getnoc(T2)-getnoc(y->left);
    x->noc=getnoc(x)+getnoc(y)-getnoc(T2);
	
    // Perform rotation
	x->right = y;
	y->left = T2;
	// Update heights
	y->height = max(height(y->left), height(y->right))+1;
	x->height = max(height(x->left), height(x->right))+1;
    // Return new root
	return x;
}

// A utility function to left rotate subtree rooted with x
// See the diagram given above.
struct Node *leftRotate(struct Node *x)
{
	struct Node *y = x->right;
	struct Node *T2 = y->left;

     //update noc
    x->noc=getnoc(x)+getnoc(T2)-getnoc((x->right));
    y->noc=getnoc(y)+getnoc(x)-getnoc(T2);

	// Perform rotation
	y->left = x;
	x->right = T2;

	// Update heights
	x->height = max(height(x->left), height(x->right))+1;
	y->height = max(height(y->left), height(y->right))+1;
   
	// Return new root
	return y;
}

// Get Balance factor of node N
int getBalance(struct Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}

//  getting rank ;

void calrank(struct Node* node,int Rank,int given)
{
    
   // printf("in calll with node %d rank nw=%d\n",node->key,Rank);
    int x=Rank+getnoc(node)-getnoc(node->left);
    if(x==given){
        printf("data at given rank %d=%d",given,node->key);
        return ;
    }
    if(x<given)
        calrank(node->left,x,given);
    else
        calrank(node->right,Rank,given);
return;
}

void findrank(struct Node* node,int Rank,int given)
{
    
    int x=Rank+getnoc(node)-getnoc(node->left);
    if(node==NULL)
    {
        printf("%d\n",Rank);
        return;
    }
    if(node->key==given)
    {
        printf(" rank of the given is =%d",x);

        return;
    }
    if(node->key>given)
    {
        findrank(node->left,x,given);
    }
    else
    {
        findrank(node->right,Rank,given);
    }
return;
}

// Recursive function to insert key in subtree rooted
// with node and returns new root of subtree.



struct Node* insert(struct Node* node, int key)
{
	/* 1. Perform the normal BST insertion */
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else // Equal keys are not allowed in BST
		return node;

        int c,v;
	/* 2. Update height of this ancestor node */
	node->height = 1 + max(height(node->left),
						height(node->right));

    if(node->left==NULL)c=0;else c=node->left->noc;
    if(node->right==NULL)v=0;else v=node->right->noc;
    node->noc=1+c+v;
   // printf("inside insert r8 nw %d rank is %d\n",node->key,node->noc);
	/* 3. Get the balance factor of this ancestor
		node to check whether this node became
		unbalanced */
	int balance = getBalance(node);

	// If this node becomes unbalanced, then
	// there are 4 cases

	// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	// Left Right Case
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	// Right Left Case
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	/* return the (unchanged) node pointer */
	return node;
}

// A utility function to print preorder traversal
// of the tree.
// The function also prints height of every node
struct Node * minValueNode(struct Node* node)
{
    struct Node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
 

struct Node* deleteNode(struct Node* root, int key)
{
    // STEP 1: PERFORM STANDARD BST DELETE
 
    if (root == NULL)
        return root;
 
    // If the key to be deleted is smaller than the
    // root's key, then it lies in left subtree
    if ( key < root->key )
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted is greater than the
    // root's key, then it lies in right subtree
    else if( key > root->key )
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key, then This is
    // the node to be deleted
    else
    {
        // node with only one child or no child
        if( (root->left == NULL) || (root->right == NULL) )
        {
            struct Node *temp = root->left ? root->left :
                                             root->right;
 
            // No child case
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else // One child case
             *root = *temp; // Copy the contents of
                            // the non-empty child
            free(temp);
        }
        else
        {
            // node with two children: Get the inorder
            // successor (smallest in the right subtree)
            struct Node* temp = minValueNode(root->right);
 
            // Copy the inorder successor's data to this node
            root->key = temp->key;
 
            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->key);
        }
    }
 
    // If the tree had only one node then return
    if (root == NULL)
      return root;
 
    // STEP 2: UPDATE HEIGHT OF THE CURRENT NODE
    root->height = 1 + max(height(root->left),
                           height(root->right));




         int c,v ;

    if(root->left==NULL)c=0;else c=root->left->noc;
    if(root->right==NULL)v=0;else v=root->right->noc;
    root->noc=1+c+v;

 
    // STEP 3: GET THE BALANCE FACTOR OF THIS NODE (to
    // check whether this node became unbalanced)
    int balance = getBalance(root);
 
    // If this node becomes unbalanced, then there are 4 cases
 
    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);
 
    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left =  leftRotate(root->left);
        return rightRotate(root);
    }
 
    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);
 
    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
 
    return root;
}
void preOrder(struct Node *root)
{
	if(root != NULL)
	{
		printf("%d its includig child is %d\n", root->key,root->noc);
		preOrder(root->left);
		preOrder(root->right);
	}
}

/* Drier program to test above function*/
int main()
{
struct Node *root = NULL;

/* Constructing tree given in the above figure */
  int n,p ;
  scanf("%d", &n);
   for (int i = 0; i < n; ++i)
   {
   	scanf("%d", &p);  
    root = insert(root, p);
    //printf("Preorder traversal of the constructed AVL tree is \n");
    //preOrder(root);


}

printf("Preorder traversahel of the constructed AVL tree is \n");
preOrder(root);
 

  	printf(" enter Np of elments to be deleted\n");
  	 scanf("%d",&n);

  	   for (int i = 0; i < n; ++i)
  	   {	scanf("%d", &p);
  			root= deleteNode( root,p);

  	   }

printf("Preorder traversal of the destructed AVL tree is \n");
preOrder(root);



/*
   printf("no of time you want to show data of corresponding rank\n");
     int t,w;    scanf("%d",&t);
   while(t--)
     {
        scanf("%d",&w);
       // printf("calling hahahahhaahah\n");
        calrank(root,0,w);
     }

     */
    printf("no of times you want to know the rank of given value\n");
     int t,w;    scanf("%d",&t);
   while(t--)
   {
        scanf("%d",&w);
       // printf("calling hahahahhaahah\n");
        findrank(root,0,w);

   }

return 0;
}
