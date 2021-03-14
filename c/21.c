#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,n;
printf("enter a no.");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
printf("not prime no.");
exit(0);
}
}
printf("prime no.");
}
