typedef struct node
{
     int data;
     struct node *next;
 } Node;

    Node* ll_make_node(int);
     Node* addAtBegin( Node *, int );
    Node* addAtDesired( Node *, int, int);
    Node* addAtLast( Node *, int);
    Node* addAfterNode( Node *,  Node *, int);
    Node* deleteAtBegin( Node *);
    Node* deleteAtDesired( Node *,int);
    Node* deleteAtLast( Node *);
    Node* deleteAfterNode( Node *, Node *);
    Node* deleteValueAtDesired(Node*,int);
    Node *find (Node *,int);
    void display( Node *);
   