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
  printf("enter the number you want to serch\n");
  scanf("%d",&num);

   Node * found= bst_search(bst,num);
        printf(" your data %d is at  position %x", found->data , found);


   return 0;
}
