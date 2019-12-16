#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep create();
void createlist();
void display(nodep);
nodep start=NULL;
void main()
{
clrscr();
createlist();
display(start);
getch();
}
void createlist()
{
nodep t,t1;
char ch;
printf("Creation of list\n");
do{
t=create();
if(start==NULL)
start=t;
else
t1->next=t;
t1=t;
printf("Do you want add more(y/Y)\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
t->next=start;
}
nodep create()
{
nodep t;
t=(nodep)malloc(sizeof(struct node));

t->next=t;
printf("Enter Data\n");
scanf("%d",&t->info);
return t;
}
void display(nodep start)
{
nodep t;
t=start;
if(t==NULL)
{
printf("List is empty\n");
exit(0);
}
while(t->next!=start)
{
printf("%d\t",t->info);
t=t->next;
}
}

