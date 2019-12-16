#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node * next;
};
typedef struct node* nodep;
nodep start=NULL;
nodep create();
nodep add();
void display(nodep);
int main()
{
  nodep t;
  t=add();
  display(t);
  return 0;
}
nodep create()
{
  nodep t;
  t=(nodep)malloc(sizeof(struct node));
  t->next=t;
  printf("Enter data\n");
  scanf("%d",&t->info);
  return t;
}
nodep add()
{
  nodep t,t1;
  char ch;
  printf("Creation of list:\n");
  do{
  t=create();
  if(start==NULL)
  start=t;
  else
  t1->next=t;
  t1=t;
  printf("Do you want to continue(y/y):");
  scanf(" %c",&ch);
}while(ch=='y' || ch=='Y');
t1->next=start;
return start;
}
void display(nodep start)
{
  nodep t;
  t=start;
  printf("The list is:\n");
 do{
    printf("%d\t",t->info);
    t=t->next;
  }while(t!=start);
}
