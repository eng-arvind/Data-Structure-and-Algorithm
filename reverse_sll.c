#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node * next;
};
typedef struct node* nodep;
nodep create();
void display(nodep);
nodep add();
nodep reverse_node(nodep);
int main()
{
  nodep t,start;
  t=add();
  start=reverse_node(t);
  display(start);
  getch();
  return 0;
}
  nodep create()
  {
    nodep t;
  t=(nodep)malloc(sizeof(struct node));
  if(t==NULL)
  {
    printf("stack overflow");
    exit(0);
  }
  t->next=NULL;
  printf("enter data\n");
  scanf("%d",&t->info);
  return t;
}
nodep add()
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
  printf("Do you want to add more(y/Y):");
  scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
return start;
}
void display(nodep t)
{
if(t==NULL)
{
printf("list is empty\n");
exit(0);
}
printf("list is:");
while(t!=NULL)
{
  printf("%d\t",t->info);
  t=t->next;
}
}
nodep reverse_node(nodep start)
{
  nodep temp1,temp2;
  if(start==NULL)
  {
    printf("list is empty");
    exit(0);
  }
  if(start->next!=NULL)
  {
    temp2=NULL;
    temp1=start->next;
    start->next=NULL;
    while(temp1!=NULL)
    {
      temp2=start;
      start=temp1;
      temp1=temp1->next;
      start->next=temp2;
    }
  }
  return start;
}
