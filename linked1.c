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
nodep insert_node_Beg(nodep);
int main()
{
  nodep start=NULL;
  nodep t;
  t=add();
  start=insert_node_Beg(t);
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
printf("List is:");
while(t!=NULL)
{
  printf("%d\t",t->info);
  t=t->next;
}

}
nodep insert_node_Beg(nodep start)
{
  nodep temp;
  printf("Enter the data to insert at the beginnig of list\n");
  temp=create();
  temp->next=start;
  start=temp;
  return start;
}
