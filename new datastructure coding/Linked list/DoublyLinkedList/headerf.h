typedef struct node {
    struct node *prev;
    int data ;
    struct node *next;
    
}Node;


   Node* dll_prepend(Node *, int );
   Node* dll_make_node(int);
   Node* insert_before(Node * , int);
   Node* insert_After(Node * , int);
   void display( Node *);
   Node * find(Node *,int);
   Node * deleteDesired(Node *,Node *); 
    Node * insert_AfterHead(Node*,int);
    Node * reverseDoubly(Node *);