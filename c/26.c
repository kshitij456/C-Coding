#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,newn,sum=0;
float avg;
printf("enter the no.");
scanf("%d",&n);
printf("enter no. \n");
for(i=1;i<=n;i++)
{
scanf("%d",&newn);
sum=sum+newn;
}
avg=sum/(float)n;
printf("average=%6.2f",avg);

}
