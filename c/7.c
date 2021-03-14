#include<stdio.h>
#include<conio.h>
int main()
{
int rev,sum=0,n;
printf("enter a no.");
scanf("%d",&n);
while(n>0)
{
rev=n%10;
sum=sum+rev;
n=n/10;
}
printf("sum of the no. is %d",sum);

}
