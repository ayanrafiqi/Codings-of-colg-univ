#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<malloc.h>
 struct tree
{
 struct tree *lt;
 int d;
 struct tree *rt;
 };
 void add_node();
 void pre_Order();
 void in_Order();
 void post_0rder();
 struct tree *Base=NULL;
    int main()
   {
     char c;
     while(1)
     {
     clrscr();
      printf("\n\t\tWelcome to linked representation of tree...\n");
      printf("----------------------------------------------\n");
      printf("\tEnter your operation  code?\n");
      printf(" 'A' for add node\n");
      printf(" 'P' For Pre order Display\n");
      printf(" 'I' For Inoder Display\n");
      printf(" 'L' For Post order Display\n");
      printf("\t'E' FOR EXiT\n ");
      c=getch();
	     if(c=='A')
	      add_node();
	      else if(c=='P')
	      pre_Order();
	    /*  else if(c=='I')
	      in_Order();
	      else if(c=='L')
	       post_Order();  */
	      else if(c=='E')
	      break;
	      }
	     getch();
	      }
	      void add_node()
	      {
	       struct tree *temp,*n;
	       n=(struct tree*)malloc(sizeof(struct tree));
	       n->lt=NULL;
	       n->rt=NULL;
	       printf("enter the data in a node\n");
	       scanf("%d",n->d);
	       if(Base==NULL)
	       Base=n;
	       else
	       {
		   temp=Base;
		   while(1)
		  {
		     if(temp->d > n->d)
		    {
		     if(temp->lt==NULL)
	     {
		       temp->lt=n;
	       break;
		      }
		    else
		  {
		     temp=temp->lt;
		  }
		  }
		 else
		 {
		   if(temp->rt==NULL)
		   {
		     temp->rt=n;
		      break;
		   }
		   else
		    {
		     temp=temp->rt;
		     }
		     }
		     }
		     printf("\tNode is successfully added in a Tree\n");
		     }
		      getch();
		      }
		 void pre_Order()
		 {
		  struct tree *stk[100],*temp;
		  int tos=-1;
		  if(Base==NULL)
		{
		  printf("Tree is not created");
		 }
		  else
		{
		  temp=Base;
		   while(1)
		  {
		     while(temp!=NULL)
		     {
		     printf("%d",temp->d);
		     tos++;
		     stk[100]=temp;
		     temp=temp->lt;
		     }
		     if(tos==-1)
		     {
		      break;
		     }
		     else
		     {
		     temp=stk[tos];
		     tos--;
		     temp=temp->rt;
		      }
		     getch();
		      }
		 }
		 }






