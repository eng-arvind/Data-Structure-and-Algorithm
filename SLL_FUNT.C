#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep create();
void display(nodep);
nodep add();
void main()
{
nodep start=NULL;
clrscr();
start=add();
display(start);
getch();
}
nodep add()
{
char ch;
nodep t,t1,start=NULL;
printf("creation of list\n");
do{
t=create();
if(start==NULL)
{
start=t;
}
else
t1->next=t;
t1=t;
printf("\n do want to continue(y/Y)");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
return start;
}
nodep create()
{
nodep t;
t=(nodep)malloc(sizeof(struct node));
if(t==NULL)
{
printf("\n overflow");
exit(0);
}
t->next=NULL;
printf("Enter data\n");
scanf("%d",&t->info);
return t;
}
void display(nodep t)
{
printf("\nlist:;->\n");
if(t==NULL)
{
printf("List is empty\n");
exit(0);
}
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}

