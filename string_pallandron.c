#include<stdio.h>
#include<conio.h>
#include<String.h>
void main()
{
  char str[10],str1[10];
  int a;
  printf("Enter the string\n");
  gets(str);
  strcpy(str1,str);
  strrev(str1);
  if(strcmp(str1,str)==0)
  printf("The string is pallandron\n");
  else
  printf("The string is not pallandron");
}
