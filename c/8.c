#include<stdio.h>
#include<conio.h>
int main()
{
int temp,sum=0,rev,n;
printf("enter a no.");
scanf("%d",&n);
temp=n;
while(n>0)
{
rev=n%10;
sum=sum+(rev*rev*rev);
n=n/10;
}
if(temp==sum)
printf("armstrong no.");
else
printf("not a armstrong no.");



}
