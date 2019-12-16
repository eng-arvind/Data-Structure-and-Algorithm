#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* nodep;
nodep start=NULL;
void ins_end();
nodep create();
void createlist();
void display();
int main()
{
createlist();
ins_end();
display();
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
void ins_end()
{
  nodep temp,temp1;
  temp=create();
  temp1=start;
  while(temp1->next!=start)
  {
    temp1=temp1->next;
  }
  temp1->next=temp;
  temp->next=start;
}
void display()
{
nodep t;
t=start;
printf("Circular Sll\n");
if(t==NULL)
{
printf("List is empty\n");
return;
}
do{
  printf("%d\t",t->info);
  t=t->next;
}while(t!=start);
}
