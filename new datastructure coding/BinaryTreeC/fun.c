#include<stdio.h>
#include <stdlib.h>
#include "Binaryheader.h"

Node* binary_makeNode ( int value )
{
  Node * newnode = calloc(1,sizeof(Node));
  newnode->left = NULL;
  newnode->data = value;
  newnode->right = NULL;
  return newnode;

  }
   

void preOrder( Node * tree ){
  if( tree != NULL){
    printf(" %d ", tree->data);
     preOrder(tree->left);
     preOrder(tree->right);
    }

   }

void inOrder( Node * tree ){
  if( tree != NULL){
    inOrder(tree->left);
    printf(" %d", tree->data);
    inOrder( tree->right);
    }

  }


  void postOrder( Node * tree ){
    if( tree != NULL){
     postOrder( tree->left );
     postOrder( tree->right );
     printf(" %d ", tree->data );
     }

   }
   


  
   