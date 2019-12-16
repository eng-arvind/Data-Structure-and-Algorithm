#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep del_pos(nodep);
nodep add();
nodep create();
void display(nodep);
void main()
{
nodep start=NULL;
clrscr();
start=add();
start=del_pos(start);
display(start);
getch();
}
nodep add()
{
char ch;
nodep t,t1,start=NULL;
printf("Creation of list\n");
do{
t=create();
if(start==NULL)
start=t;
else
t1->next=t;
t1=t;
printf("Do you want to add more\n");
scanf(" %c",&ch);
}while(ch=='Y' || ch=='y');
return start;
}
nodep create()
{
nodep t;
t=(nodep)malloc(sizeof(struct node));
if(t==NULL)
{
printf("Overflow\n");
exit(0);
}
t->next=NULL;
printf("Enter Data\n");
scanf("%d",&t->info);
return t;
}
void display(nodep t)
{
printf("List::->\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}
nodep del_pos(nodep start)
{
nodep temp,temp1;
int pos,count;
printf("Enter position\n");
scanf("%d",&pos);
if(pos==1)
{
temp=start;
start=start->next;
temp->next=NULL;
free(temp);
}
else if(pos>1)
{
count=2;
temp=start;
while(temp->next!=NULL && count<pos)
{
temp=temp->next;
count++;
}
if(count==pos && temp->next!=NULL)
{
temp1=temp->next;
temp->next=temp1->next;
temp1->next=NULL;
free(temp1);
}
else
printf("position is Greater than size\n");
}
else
printf("Invalid position\n");
return start;
}