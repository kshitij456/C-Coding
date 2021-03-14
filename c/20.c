#include<stdio.h.>
#include<conio.h>
int main()
{
int i,fact=1,n;
printf("enter a no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("factorial of a given no. is %d",fact);

}
