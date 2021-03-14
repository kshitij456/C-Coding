#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("enter the table no.");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("\n %d x %d = %d ",n,i,n*i);
}
}
