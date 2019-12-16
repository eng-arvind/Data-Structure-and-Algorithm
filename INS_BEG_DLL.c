#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  struct node *prev;
  int info;
  struct node *next;
};
typedef struct node *nodep;
nodep start=NULL,last=NULL;
void ins_beg();
void createlist();
nodep create();
void display();
int main()
{
  createlist();
  ins_beg();
  display();
}
void createlist()
{
  nodep temp;
  char ch;
  printf("Creation of DLL\n");
  do{
    temp=create();
    if(start==NULL)
    start=temp;
    else{
      last->next=temp;
      temp->prev=last;
    }
    last=temp;
    printf("Do you want add more(y/Y)\n");
    scanf(" %c",&ch);
  }while(ch=='y' || ch=='Y');
}
nodep create()
{
  nodep t;
  t=(nodep)malloc(sizeof(struct node));
  if(t==NULL)
  {
    printf("overflow");
    exit(0);
  }
  t->next=t->prev=NULL;
  printf("Enter Data\n");
  scanf("%d",&t->info);
  return t;
}
void ins_beg()
{
  nodep t;
  t=create();
   t->next=start;
   start->prev=t;
   start=t;
}
void display()
{
  nodep ptr=start,ptr1=last;
  printf("Display from beginning\n");
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->info);
    ptr=ptr->next;
  }
  printf("\nDisplay from End\n");
  while(ptr1!=NULL)
  {
    printf("%d\t",ptr1->info);
    ptr1=ptr1->prev;
  }
}
