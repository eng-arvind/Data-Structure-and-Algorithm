#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node* next;
};
typedef struct node * nodep;
nodep create();
nodep add();
void display(nodep);
nodep ins_any_pos(nodep);
int main()
{
  nodep start=NULL,t;
  start=add();
  t=ins_any_pos(start);
  display(t);
  getch();
  return 0;
}
nodep create()
{
  nodep t=(nodep)malloc(sizeof(struct node));
   if(t==NULL)
  {
    printf("overflow");
    exit(0);
  }
  t->next=NULL;
  printf("Enter data\n");
  scanf("%d",&t->info);
  return t;
}
nodep add()
{
  char ch;
  nodep start=NULL,t,t1;
  printf("Creation of list\n");
  do{
    t=create();
    if(start==NULL)
    start=t;
    else
    t1->next=t;
    t1=t;
    printf("Do you want to continue(y/Y):");
    scanf(" %c",&ch);
  }while(ch=='y' || ch=='Y');
  return start;
}
nodep ins_any_pos(nodep start)
{
  int n,count=2;
  nodep temp,temp1;
  printf("Enter data to insert into list\n");
  temp1=create();
  printf("Enter position where you want to Insert\n");
  scanf("%d",&n);
temp=start;
if(n==1)
{
  start=NULL;
  free(temp);
}
else if(n>1)
{
  while(temp->next!=NULL && count<n)
  {
    temp=temp->next;
    count++;
  }
if(n==count)
{
  temp1->next=temp->next;
  temp->next=temp1;
}
else
printf("position is greate than size\n");
}
return start;
}
void display(nodep start)
{
  nodep t;
  printf("List is: ");
  if(start==NULL)
  {
    printf("list is empty\n");
    exit(0);
  }
  t=start;
  while(t!=NULL)
  {
    printf("%d\t",t->info);
    t=t->next;
  }
}
