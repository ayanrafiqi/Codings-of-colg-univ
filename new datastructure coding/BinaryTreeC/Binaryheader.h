typedef struct node
{
     struct node *left;
     int data;
     struct node *right;
 } Node;


   Node * binary_makeNode( int );
   void  preOrder( Node *);
   void  inOrder( Node *);
   void   postOrder( Node*);
   Node * bst_makeNode( int );
   Node * bst_insert(Node *, int);
   Node *  bst_search(Node *, int);
