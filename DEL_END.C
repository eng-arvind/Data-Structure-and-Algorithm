#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep del_end(nodep);
nodep add();
nodep create();
void display(nodep);
void main()
{
nodep start=NULL;
clrscr();
start=add();
start=del_end(start);
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
printf("Do you want to add more\n");
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
void display(nodep t)
{
printf("List::->\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}
nodep del_end(nodep start)
{
nodep temp,temp1=NULL;
if(start->next==NULL)
{
temp=start;
start=NULL;
free(temp);
}
else
{
temp=start;
while(temp->next!=NULL)
{
temp1=temp;
temp=temp->next;
}
}
temp1->next=NULL;
free(temp);
return start;
}






