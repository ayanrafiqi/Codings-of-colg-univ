
#include <stdio.h>
#include "Binaryheader.h"
int main()
{

    Node * tree = binary_makeNode(1);
    tree->left = binary_makeNode(2);
    tree->right = binary_makeNode(3);

    Node * tree2 = tree->left;
    tree2->left = binary_makeNode(4);
    tree2->right = binary_makeNode(5);

    Node * tree3 = tree->right;
    tree3->left = binary_makeNode(6);
    tree3->right = binary_makeNode(7);


    printf("Our Pre-Order traversal of tree is=>");
    preOrder(tree);

    printf("\nOur In-Order traversal of tree is=>");
    inOrder(tree);

    printf("\nOur Post-Order traversal of tree is=>");
    postOrder(tree);

    return 0;

}
