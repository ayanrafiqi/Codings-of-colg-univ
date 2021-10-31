#include<stdio.h>
#include <stdlib.h>
#include"../Binaryheader.h"



Node * bst_makeNode ( int value )
{
  Node * newnode = calloc(1,sizeof(Node));
  newnode->left = NULL;
  newnode->data = value;
  newnode->right = NULL;
  return newnode;

  }

Node * bst_insert (Node * bst , int value){
  if(!bst){
    return bst_makeNode(value);
   }
    if(bst->data > value )
     bst->left = bst_insert(bst->left ,value);
    else{
       bst->right = bst_insert(bst->right ,value);
     }
      return bst;
    }
  
Node * bst_search(Node * bst , int value)
 {
   if(!bst){
     printf("tree is empty");
   }
   if(bst->data == value)
      return bst;
   else if(value < bst->data)
       bst_search(bst->left,value);
   else 
      bst_search(bst->right,value);
      
 }
      
    


   