#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep ins_pos(nodep);
nodep add();
nodep create();
void display(nodep);
void main()
{
nodep start=NULL;
clrscr();
start=add();
start=ins_pos(start);
display(start);
getch();
}
nodep add()
{
nodep t,t1,start=NULL;
char ch;
printf("creation of list\n");
do{
t=create();
if(start==NULL)
start=t;
else
t1->next=t;
t1=t;
printf("do you want to add more(y/Y)\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
return start;
}
nodep create()
{
nodep t=NULL;
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
nodep ins_pos(nodep start)
{
nodep t,t1;
int pos,count;
printf("Enter position\n");
scanf("%d",&pos);
t=create();
if(pos==1)
{
t->next=start;
start=t;
return start;
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
printf("Position is greater than size of list\n");
}
else
printf("position is negative\n");
return start;
}
void display(nodep t)
{
printf("list is::->\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}




























