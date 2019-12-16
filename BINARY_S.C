#include<stdio.h>
#include<conio.h>
void binary_search(int a[],int n,int value);
void main()
{
int a[10],n,value,i;
clrscr();
printf("Enter the  size of array\n");
scanf("%d",&n);
printf("Enter the element of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the value that you want search\n");
scanf("%d",&value);
binary_search(a,n,value);
getch();
}
void binary_search(int a[],int n,int value)
{
int loc=-1,low,high,mid;
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(value==a[mid])
{
loc=mid+1;
break;
}
else if(value>a[mid])
low=mid+1;
else
high=mid-1;
}
if(loc==-1)
printf("%d number is not found",value);
else
printf("%d found at location %d",value,loc);
}









