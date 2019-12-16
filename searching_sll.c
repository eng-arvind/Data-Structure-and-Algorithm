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
nodep add();
void search_node_value(nodep);
int main()
{
  nodep t,start;
  t=add();
  search_node_value(t);
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
void search_node_value(nodep start)
{
  nodep temp;
  int n,count=1;
  printf("Enter the data to search in the list\n");
  scanf("%d",&n);
  temp=start;
  while(temp!=NULL && n!=temp->info)
   {
      temp=temp->next;
      count++;
   }
   if(temp!=NULL)
   printf("%d found at position %d",n,count);
   else
   printf("%d not found",n);
}
