#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temt;
printf("enter no. 1 : ");
scanf("%d",&a);
printf("enter no. 2 : ");
scanf("%d",&b);
temt=a;
a=b;
b=temt;
printf("after swapping    \n a=%d  b=%d",a,b);




}
