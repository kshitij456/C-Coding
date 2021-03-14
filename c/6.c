#include<stdio.h>
#include<conio.h>
int main()
{
int rev,n;
printf("enter a no.");
scanf("%d",&n);
while(n>0)
{
rev=n%10;
printf("%d",rev);
n=n/10;
}
}
