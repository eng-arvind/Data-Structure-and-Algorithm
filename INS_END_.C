#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep ins_end(nodep);
nodep create();
nodep add();
void display(nodep);
void main()
{
nodep start=NULL;
clrscr();
start=add();
start=ins_end(start);
display(start);
getch();
}
nodep add()
{
nodep t,t1,start=NULL;
char ch;
printf("Creation of list\n");
do{
t=create();
if(start==NULL)
start=t;
else
t1->next=t;
t1=t;
printf("Do you want to add more(y/Y)\n");
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
printf("overflow\n");
exit(0);
}
t->next=NULL;
printf("Enter data\n");
scanf("%d",&t->info);
return t;
}
nodep ins_end(nodep start)
{
nodep temp,t,temp1;
temp1=create();
t=start;
while(temp!=NULL)
{
t=temp;
temp=temp->next;
}
t->next=temp1;
return start;
}
void display(nodep t)
{
printf("list::->\n");
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
}





















