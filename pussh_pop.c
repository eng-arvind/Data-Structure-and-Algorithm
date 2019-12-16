#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void push();
void pop();
void display();
int top=-1,max=10;
int stack[20];
int main()
{
int choice;
do{
  printf("1.push\n2.pop\n3.display\n4.exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:push();
           break;
    case 2:pop();
           break;
    case 3:display();
           break;
    case 4:exit(0);
    default:printf("wrong choice\n");
  }
}while(choice);
}
void push()
{
  int item;
  if(top==max-1)
  {
    printf("overflow\n");
    return;
  }
  else
  {
    printf("Enter data\n");
    scanf("%d",&item);
    top++;
    stack[top]=item;
  }
}
void pop()
{
  int item;
  if(top==-1)
  {
    printf("underflow\n");
    exit(0);
  }
  item=stack[top];
  top--;
  printf("pop=%d\n",item);
}
void display()
{
  int i;
  printf("stack is::->\n");
  for(i=top;i>=0;i--)
  {
    printf("%d\n",stack[i]);
  }
}
