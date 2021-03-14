#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n;
float sum=0,fact=1;
printf("enter the no. of terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=1;
for(j=1;j<=i+1;j++)
fact=fact*j;
sum=sum+i/fact;
}
printf("sum of the series is %f",sum);


}
