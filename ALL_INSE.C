#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep create();
nodep createlist();
nodep ins_beg(nodep);
nodep ins_end(nodep);
nodep ins_pos(nodep);
void display(nodep);
void main()
{
int choice;
nodep start=NULL;
clrscr();
printf("creation of list\n");
start=createlist();
do{
printf("\n1.Insertion at Beginning\n");
printf("2.Insertion at End\n");
printf("3.Insertion at any position\n");
printf("4.Display\n");
printf("5.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:start=ins_beg(start);
       break;
case 2:start=ins_end(start);
       break;
case 3:start=ins_pos(start);
       break;
case 4:display(start);
       break;
case 5:exit(0);
       break;
default:printf("Enter correct choice\n");
	break;
}
}while(1);
getch();
}
nodep createlist()
{
char ch;
nodep t,t1,start=NULL;
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
printf("Overflow");
exit(0);
}
t->next=NULL;
printf("Enter Data\n");
scanf("%d",&t->info);
return t;
}
nodep ins_beg(nodep start)
{
nodep t,t1;
t=create();
t->next=start;
start=t;
return t;
}
nodep ins_end(nodep start)
{
nodep temp,t;
t=create();
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=t;
return start;
}
nodep ins_pos(nodep start)
{
nodep t,t1;
int count,pos;
t=create();
printf("Enter position\n");
scanf("%d",&pos);
if(pos==1)
{
t->next=start;
start=t;
}
else if(pos>1)
{
count=2;
t1=start;
while(t1!=NULL && count<pos)
{
t1=t1->next;
count++;
}
if(count==pos)
{
t->next=t1->next;
t1->next=t;
}
else
printf("position is greater than size\n");
}
else
printf("position is negative\n");
return start;
}
void display(nodep t)
{
printf("List is::->\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}









