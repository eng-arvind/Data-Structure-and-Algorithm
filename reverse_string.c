#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  printf("Enter the string\n");
  gets(str);
  strrev(str);
  printf("The Reverse string is:");
  puts(str);
}
