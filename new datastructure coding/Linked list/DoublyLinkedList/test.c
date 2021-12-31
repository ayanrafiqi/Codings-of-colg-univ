#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "headerf.h"

int main(void)
   {
       
      Node *head;
      int  Dnum;
        for (int i=0;i<5;i++){
          head=insert_before(head,i);
       
        }
       
        //head=insert_After(head,15);
        head=insert_AfterHead(head,15);
        printf("our doubly  linked list is \n");
        display(head);
         printf("--------------------------------\n");
         printf("our doubly linked  from reverse\n");
        reverseDoubly(head);
       assert(find(head,11)==NULL);
       printf("\n------------------------------------\n");
        printf("\n Enter the number you want to delete?\n");
        scanf("%d",&Dnum);
        Node* point=find(head,Dnum);
        head=deleteDesired(head,point);
        printf("my linked list after deletion\n");
        display(head);
        printf("\n------reverse after deleting-------\n");
        reverseDoubly(head);

       return 0;
   }
   
   