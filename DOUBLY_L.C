#include<stdio.h>
#include<conio.h>
struct node
{
struct node* prev;
int info;
struct node* next;
};
typedef struct node* nodep;
nodep start=NULL,last=NULL;
nodep createlist();
nodep create();
void display(nodep);
void main()
{
start=createlist();
display(start);
getch90;
}
nodep createlist()
{
nodep t,t1;
char ch;
printf("Createlist\n");
do{
t=create();
if(start==NULL)
start=t;
else
{
t1->next=t;
t->prev=t1;
}
t1=t;
last=t;
printf("Do you want add more(y/Y)\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
return last;
}
nodep create()
{
nodep t;
t=(nodep)malloc(sizeof(struct node));
t->next=NULL;
t->prev=NULL;
printf("Enter data\n");
scanf("%d",&t->info);
return t;
}
void display(nodep t)
{
printf("List is::->\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->prev;
}
}
