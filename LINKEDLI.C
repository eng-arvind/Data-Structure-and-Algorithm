#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
typedef struct node* nodep;
void main()
{
nodep start=NULL,t,t1;
char ch;
clrscr();
do{
t=(nodep)malloc(sizeof(struct node));
if(t==NULL)
{
printf("\noverflow");
exit(0);
}
t->next=NULL;
printf("Enter data\n");
scanf("%d",&t->info);
if(start==NULL)
start=t;
else
t1->next=t;
t1=t;
printf("\ndo you want to add more node(y/Y)");
scanf(" %c",&ch);
}while(ch=='y'|| ch=='Y');
printf("\n list is::->\n");
t=start;
if(t==NULL)
{
printf("list is empty\n");
exit(0);
}
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
getch();
}









