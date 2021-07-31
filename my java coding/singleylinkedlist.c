#include<stdio.h>
#include<ctype.h>
#include<malloc.h>
struct singly
{
    int d;
    struct singly *link;
};
   void add_last(struct singly**);
  void disp(struct singly*);
 int main()
 {
struct singly *Base=NULL;
        char c;
        while(1)
        {
            printf("enter your choice\n");
            printf(" 'A' for add at last\n");
            printf(" 'D' for Display\n");
            printf(" 'E' for exit\n");
            c=getch();
            c=toupper(c);
            if(c=='A')
                add_last(&Base);
            else if(c=='D')
                    disp(Base);
            else if(c=='E')
                    break;

        }

}
        void add_last(struct singly **start)
        {
                struct singly *n,*temp;
                n=(struct singly*) malloc(sizeof(struct singly));
                if(n==NULL)
                        printf("memory not allocated");
                       else
                       {
                           printf("enter the data  in node");
                           scanf("%d",n->d);
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
                        printf("node is added in list");
            }
                       getch();
        }
            void disp(struct singly *start)
    {
        if(start==NULL)
            printf("empty list");
            else
            {
                 while(start!=NULL)
                    {
                       printf("%d",start->d);
                    start=start->link;
                    }

            }
                getch();
            }

