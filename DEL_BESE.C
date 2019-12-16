#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep del_value(nodep);
nodep add();
nodep create();
void display(nodep);
void main()
{
nodep start=NULL;
clrscr();
start=add();
start=del_value(start);
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
}while(ch=='Y'|| ch=='y');
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
printf("\nList is::->\n");
while(t!=NULL)
{
printf("%d\t",t->info);
t=t->next;
}
}
nodep del_value(nodep start)
{
nodep temp,temp1=NULL;
int value,count=1;
printf("Enter value that you want delet\n");
scanf("%d",&value);
temp=start;
while(temp!=NULL && temp->info!=value)
{
temp1=temp;
temp=temp->next;
count++;
}
if(temp!=NULL)
{
if(count==1)
start=temp->next;
else
temp1->next=temp->next;
temp->next=NULL;
printf("%d Delet at position=%d",value,count);
free(temp);
}
else
printf("%d not found\n",value);
return start;
}


























