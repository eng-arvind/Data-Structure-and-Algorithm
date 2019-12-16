#include<stdio.h>
union sample
{
  int  m;
  float n;
  char ch[10];
}u;
int main()
{
  printf("%d",sizeof(u));
  return 0;
}
