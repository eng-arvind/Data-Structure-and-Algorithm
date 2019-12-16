#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node* next;
};
typedef struct node *nodep;
nodep delet_beg(nodep);
nodep create();
nodep add();
void display(nodep);
void main()
{
nodep start=NULL;
clrscr();
start=add();
start=delet_beg(start);
display(start);
getch();
}
nodep add()
{
char ch;
nodep t,t1,start=NULL;
printf("create list\n");
do{
t=create();
if(start==NULL)
start=t;
else
t1->next=t;
t1=t;
printf("do you want to add more(Y/y)\n");
scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
return start;
}
nodep create()
{
nodep t;
t=(nodep)malloc(sizeof(struct node));
t->next=NULL;
printf("Enter data\n");
scanf("%d",&t->info);
return t;
}
nodep delet_beg(nodep start)
{
nodep temp;
if(start==NULL)
{
printf("Underflow\n");
exit(0);
}
else
{
temp=start;
start=start->next;
temp->next=NULL;
free(temp);
}
return start;
}
void display(nodep t)
{
printf("list after deletion\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}






