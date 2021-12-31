#include<stdio.h>
#include<stdlib.h>
#include "../Binaryheader.h"



int main()
{
    Node *bst=NULL;
 for(int i=0;i<10;i++){
     bst=bst_insert(bst,i);
 }
    

  int num;
  printf("enter the number you want to search\n");
  scanf("%d",&num);

   Node * key= bst_search(bst,num);
  printf(" your data %d is at  position %x", key->data , key);


   return 0;
}
