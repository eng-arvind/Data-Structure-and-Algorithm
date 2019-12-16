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
nodep del_node_beg(nodep);
int main()
{
  nodep t,start;
  t=add();
  start=del_node_beg(t);
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
nodep del_node_beg(nodep start)
{
  nodep temp;
  temp=start;
  if(start==NULL)
  {
  printf("underflow\n");
  exit(0);
  }
  else if(start->next==NULL)
  {
    start=NULL;
    printf("element %d deleted\n",temp->info);
    free(temp);
    }
    else
    {
      start=start->next;
      printf("element %d deleted\n",temp->info);
      free(temp);
    }
  return start;
}
