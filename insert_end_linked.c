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
nodep insert_node_end(nodep);
int main()
{
  nodep t,start;
  t=add();
  start=insert_node_end(t);
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
  printf("Create list:\n");
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
nodep insert_node_end(nodep start)
{
  nodep temp,temp1;
  printf("Enter the data to insert in the end of list\n");
  temp=create();
  temp1=start;
  if(start==NULL)
  {
    start=temp;
  }
  else
  {
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
  temp1->next=temp;
}
  return start;
}
