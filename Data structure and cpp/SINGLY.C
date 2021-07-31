#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<malloc.h>
struct singly
{
int d;
struct singly *link;
};
void add_Last(struct singly **);
void disp(struct singly *);
void count_Nodes(struct singly *);
void even_Nodes(struct singly *);
void sum_Nodes(struct singly *);
void prime_Nodes(struct singly *);
void delete_Begin(struct singly **);
void search_Element(struct singly *);
void alternate_Nodes(struct singly *);
void add_Begin(struct singly **);
void delete_Last(struct singly **);
void add_Desired(struct singly **);
void delete_Desired(struct singly **);
void greatest_Node(struct singly *);
void main()
{
	struct singly *Base=NULL;
	char c;
	while(1)
	{
	clrscr();
	printf("------------------------------------------------------\n");
	printf("-------------------------------------------------------\n");
	printf("----------WELCOME TO SINGLY LINKED LIST---------------\n");
	printf("-------------------------------------------------------\n");
	printf("---------    Enter  your Choice :)   ------------------\n");
	printf(" 'A'  For ADD AT LAST\n");
	printf(" 'D' For DISPLAY NODES\n");
	printf(" 'B' For count total nodes in a linked list\n");
	printf(" 'C' For Display Even nodes in a linked list\n");
	printf(" 'S' For Sum all the data in a linked list\n");
	printf(" 'F' For Count total no.of prime data in a LL\n");
	printf(" 'G' For  Delete the first node at begin in a LL\n");
	printf(" 'H' For Search an element in a linked list\n");
	printf(" 'I' For  ADD node at begin in a linked list\n");
	printf(" 'J' For DISPLAY  ALTERNATE elements in a linked list\n");
	printf(" 'K' For Delete the last node in a linked list\n");
	printf(" 'L' For Add new node at your desired position\n");
	printf(" 'M' For Delete a node at your desired position\n");
	printf(" 'N' For Show Greatest node in a linked list\n");
	printf(" 'E' For EXIT!!!!!!!!! \n");
	c=getch();
	c=toupper(c);
		if(c=='A')
		add_Last(&Base);
		else if(c=='D')
		disp(Base);
		else if(c=='B')
		count_Nodes(Base);
		else if(c=='C')
		even_Nodes(Base);
		else if(c=='S')
		sum_Nodes(Base);
		else if(c=='F')
		prime_Nodes(Base);
		else if(c=='G')
		delete_Begin(&Base);
		else if(c=='H')
		search_Element(Base);
		else if(c=='J')
		alternate_Nodes(Base);
		else if(c=='I')
		add_Begin(&Base);
		else if(c=='K')
		delete_Last(&Base);
		else if(c=='L')
		add_Desired(&Base);
		else if(c=='M')
		delete_Desired(&Base);
		else if(c=='N')
		greatest_Node(Base);
		else if(c=='E')
		break;
		 }
		getch();
		}
	void add_Last(struct singly **start)
	{
	       struct singly *n,*temp;
	    n=(struct singly*)malloc(sizeof(struct singly));
	    if(n==NULL)
	    printf("memory not allocated");
	   else
		   printf("\nenter the data in a node\n");
		   scanf("%d",&n->d);
		 n->link=NULL;
		 if(*start==NULL)
			  *start=n;
	   else
	   {
		temp=*start;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=n;
		}
		printf("NODE IS ADDED SUCCESFULLY");
		getch();
	}
	void disp(struct singly *start)
	{
		 if(start==NULL)
		       printf("empty list");
	    else
	    {
		printf("\t data you added in a linked list are\n");
		 while(start!=NULL)
	    {
		 printf(" %d\t",start->d);
		start=start->link;
	    }
	    }
	       getch();
	   }
	void count_Nodes(struct singly *start)
       {
	  int count=0;
	   if(start==NULL)
	   printf("EMPTY LIST");
      else
      {
		while(start!=NULL)
		{
		count++;
		start=start->link;
		}
		printf("----------------------------------------------\n");
		printf("total nodes in a linked lists is : %d",count);
		}
		getch();
		}
	void even_Nodes(struct singly *start)
	{
	     int x=2;
	     if(start==NULL)
	     printf("empty list");
	      else
	      {
	      while(start!=NULL)
	      {
	      if(start->d%x==0)
		printf("%d\t",start->d);
		start=start->link;
	      }
	      }
	       getch();
		}
	  void sum_Nodes(struct singly *start)
	  {
		 int sum=0;
		 if(start==NULL)
		 printf("empty list");
		 else
		 {
		 printf("-------------------------------------\n");
		 printf("SUM OF ALL NODES IN A LINKED LIST IS=");
		 while(start!=NULL)
		{
		 sum=sum+start->d;
		  start=start->link;
		  }
		  printf("%d",sum);
		  }
		  getch();
		  }
	  void prime_Nodes(struct singly *start)
		 {
		 int x=2,count=0;
		 if(start==NULL)
		 printf("empty linked list");
		 else
		 {
		 while(start!=NULL)
		 {
			 while(start->d%x!=0)
			 {
				 x++;
				 }
				if(x==(start->d))
				  {
				    count++;
					}
					start=start->link;
				}
			  printf("Total number of prime NODES are= %d",count);
			  }
			 getch();
			 }
		  void delete_Begin(struct singly **start)
		   {
		    struct singly *temp;
		     if(*start==NULL)
		     printf("EMPTY LIST");
		     else
		     {
		       temp=*start;
		       *start=(*start)->link;
		       free(temp);
		   printf("\nfirst Node is SUCESSFULLY DELETED in a linked list");
		   }
		   getch();
		   }
	      void search_Element(struct singly *start)
		{
			struct singly *temp;
		   int num,flag=0;
		   if(start==NULL)
			printf("empty list");
		     else
		     {
		     printf("Enter the element you want to Search\n");
		     scanf("%d",&num);
		     temp=start;
		      while(temp!=NULL)
		       {
		      if(temp->d==num)
		      {
			flag=1;
			break;
			}
			else
			{
			temp=temp->link;
			}
			}
		    if(flag==1)
		    printf("Element is FOUND in a linked list at: %u",(&temp->link));
		    else
		    {
			  printf("Element is not FOUND in a linked list");
		    }
		    getch();
		    }
	  }
	   void add_Begin(struct singly **start)
	  {
	   struct singly *n;
	   n=(struct singly*)malloc(sizeof(struct singly));
	   if(n==NULL)
	   printf("memory is not allocted");
	   else
	   {
	   printf("Enter the data in a new node\n");
	   scanf("%d",&n->d);
	   if(start==NULL)
	   *start=n;
	   else
	   {
	     n->link=*start;
	     *start=n;
	   }
	   printf("Node is successfully added at begin in a linked list");
	   }
	  getch();
	}
	 void alternate_Nodes(struct singly *start)
	  {
		int count=0;
	   if(start==NULL)
	   printf("EMPTY LINKED LIST");
	   else
	   {
	   while(start!=NULL)
	   {
		 if(count%2==0)
		 {
			 printf("%d\t",start->d);
		 }
			  count++;
			 start=start->link;
			  }
	     }
	     getch();
	     }
	     void delete_Last(struct singly **start)
	    {
		struct singly *temp,*pre;
		if(*start==NULL)
		    printf("empty list");
		else
		{
		      if((*start)->link==NULL){
			temp=*start;
			*start=(*start)->link;
			}
			else
			{
			    temp=*start;
			 while(temp->link!=NULL)
			{
			pre=temp;
			temp=temp->link;
			}
			pre->link=NULL;
			 }
			 free(temp);
		   printf("\nlast Data node is successfully Deleted");
		   }
		   getch();
		}
		void add_Desired(struct singly **start)
		{
		struct singly *n,*temp,*pre;
		int pos;
		n=(struct singly *)malloc(sizeof(struct singly));
		printf("Enter the data in a new node\n");
		scanf("%d",&n->d);
		n->link=NULL;
		printf("Enter the position you want to Add new node\n");
		scanf("%d",&pos);
		if(*start==NULL)
		*start=n;
		else
		{
		  if(pos==1)
		  {
		    n->link=*start;
		    *start=n;
		    }
		   else
		   {
		   temp=*start;
		     while(pos>1)
		     {
		      pre=temp;
		      temp=temp->link;
		      pos--;
		      }
		      pre->link=n;
		      n->link=temp;
		      }
		      }
		      printf("\nYour New Node is succesfull added");
		      getch();
		      }
		   void delete_Desired(struct singly **start)
		   {
			struct singly *temp,*pre;
			int pos;
			if(start==NULL)
			    printf("Empty linked list");
			else {
				printf("Enter the position you want to delete\n");
				scanf("%d",&pos);
				if(pos==1)
				{
					temp=*start;
				       *start=(*start)->link;
				}
				else {
					temp=*start;
					while(pos>1)
					{
						pre=temp;
					       temp=temp->link;
						pos--;
					}
					pre->link=temp->link;
				}

			}
			free(temp);
			printf("\nYour choosen NODE IS Successfully Deleted");
			getch();
		   }

	       void greatest_Node(struct singly *start)
	       {
		 int num=0;
		 if(start==NULL)
		 printf("Empty list");
		 else
		 {
		  //  num=start->d;
		   // start=start->link;
		    while(start!=NULL)
		     {
		     if(start->d> num){
		     num=start->d;
		    }
		    start=start->link;
		    }
		    printf("\nthe greatest data node in a linked list is:");
		    printf("%d",num);
		    }
		    getch();
		    }






