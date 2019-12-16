#include<stdio.h>
#include<stdlib.h>
void push();
void display();
int top=-1;
int max=5;
int stack[10];
int main()
{
  push();
  display();
  return 1;
}
void push()
{
  int item;
  char ch;
  do{
  if(top==max-1)
  {
    printf("overflow");
    return;
  }
    printf("Enter Data\n");
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;
    printf("Add more\n");
    scanf(" %c",&ch);
  }while(ch=='y');
}
void display()
{
  int i;
  if(top==-1)
  {
    printf("Under flow\n");
    exit(0);
  }
  printf("stack\n");
  for(i=top;i>=0;i--);   
  {
    printf("%d\n",stack[i]);
  }
}
