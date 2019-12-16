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
void createlist();
nodep create();
void display();
void main()
{
  createlist();
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
  start->prev=last;
  last->next=start;
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
  t->next=t->prev=t;
  printf("Enter Data\n");
  scanf("%d",&t->info);
  return t;
}
void display()
{
  nodep ptr=start,ptr1=last;
  printf("Display from beginning\n");
  do{
    printf("%d\t",ptr->info);
    ptr=ptr->next;
  }while(ptr!=start);
  printf("\nDisplay from End\n");
  do{
    printf("%d\t",ptr1->info);
    ptr1=ptr1->prev;
  }while(ptr1!=last);
}
