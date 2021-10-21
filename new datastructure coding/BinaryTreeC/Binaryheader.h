typedef struct node
{
     struct node *left;
     int data;
     struct node *right;
 } Node;


   Node * binary_makeNode(int);
   void  preOrder(Node *);
   void  inOrder(Node *);
   void   postOrder(Node*);