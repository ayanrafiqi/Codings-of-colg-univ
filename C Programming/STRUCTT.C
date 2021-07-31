#include<stdio.h>
#include<conio.h>
#include<string.h>

/*struct student
{
  char sii[10];
  int abc;
//   float k;
  };
 void  main()
 {
     int i;
     struct student r[3];

     for(i=0;i<3;i++)
     {
       printf("enter the details of student %d  \n",i+1);
       scanf("%s %d  ", r[i].sii ,&r[i].abc);
     }
     for(i=0;i<3;i++){
       printf("you entered %s \n %d \t\t",r[i].sii,r[i].abc);
       }

*/

//Structure Definition
struct student
{
char name[16];
int rollno;
int marks;
};
void main()
{
 int i;
 struct student s[3];
 clrscr();
 printf("Enter Details of 03 Students\n");
 for(i=0 ; i<3 ;i++)
 {
     printf("enter the name of student \n");
     scanf("%s",s[i].name);
     printf("enter rollno of Student\n");
     scanf("%d",&s[i].rollno);
     printf("enter marks of  Student\n");
     scanf("%d",&s[i].marks);

     }

 //Displaying the students information
 printf("\nYou have Entered the Following Details\n\n");
 printf("Name\tRollNo\tMarks\n");
 printf("=====================\n");
 for(i=0 ; i<3 ; i++)
 {
   printf("%s\t %d\t %d\n ",s[i].name,s[i].rollno,s[i].marks);
 }
getch();
} //End of Program




