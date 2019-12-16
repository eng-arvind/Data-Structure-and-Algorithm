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
nodep sort_selection(nodep);
int main()
{
  nodep start=NULL,t;
  start=add();
  t=sort_selection(start);
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
nodep sort_selection(nodep start)
{
  nodep t1,t2,t3;
  int min,x;
for(t1=start;t1->next!=NULL;t1=t1->next)
{
  min=t1->info;
  for (t2=t1->next,t3=t1;t2!=NULL;t2=t2->next)
   {
     if(min>t2->info)
     {
       min=t2->info;
       t3=t2;
     }
   }
   if(t1!=t3)
   {
   x=t1->info;
   t1->info=t3->info;
   t3->info=x;
 }
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
