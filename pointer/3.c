#include<stdio.h>
#include<conio.h>
int fact(int n)
{
int f;
if(n==1)
return 1;
else
f=n*fact(n-1);
return f;
}
int main()
{
int n;
printf("enter the no.");
scanf("%d",&n);
printf("\n factorial of  %d is %d",n,fact(n));


}
