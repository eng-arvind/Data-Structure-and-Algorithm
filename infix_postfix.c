#include<stdio.h>
#include<conio.h>
#include<string.h>
int top=0,ele;
char stack[30];
void push(int);
char pop();
char infix[30],postfix[30];
int prec(char);
  int main()
  {
    int i=0,j=0,length;
    char temp;
   printf("Enter infix expresion::\n");
   scanf("%s",infix);
   length=strlen(infix);
   for(i=0;i<length;i++)
   {
     if(infix[i]!='+' && infix[i]!='-' && infix[i]!='*' && infix[i]!='/' && infix[i]!='^' && infix[i]!=')' && infix[i]!='(')
     {
       postfix[j++]=infix[i];
     }
     else
     {
       if(top==0)
       push(infix[i]);
       else
       {
         if(infix[i]!=')' && infix[i]!='(')
         {
           if(prec(infix[i])<=prec(stack[top-1]))
           {
             temp=pop();
             postfix[j++]=temp;
             push(infix[i]);
           }
           else
           push(infix[i]);
         }
           else
           {
             if(infix[i]=='(')
             {
               push(infix[i]);
             }
             if(infix[i]==')')
             {
               temp=pop();
               while(temp!='(')
               {
                 postfix[j++]=temp;
                 temp=pop();
               }
             }
           }
         }
       }
     }
     while(top!=0)
     {
       postfix[j++]=pop();
     }
     printf("postfix is:: ");
     printf("%s",postfix);
   }
   void push(int ele)
   {
     stack[top]=ele;
     top++;
   }
   char pop()
   {
  top--;
  return(stack[top]);
   }
   int prec(char symbol)
   {
     if(symbol=='(')
     return(0);
     if(symbol==')')
      return(0);
      if(symbol=='+' || symbol=='-')
      return 1;
      if(symbol=='*' || symbol=='/')
      return 2;
      if(symbol=='^')
      return 3;
      getch();
   }
