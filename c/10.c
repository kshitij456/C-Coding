#include<stdio.h>
#include<conio.h>
int main()
{
int n,newn,i,sum=0;
printf("enter how many no.");
scanf("%d",&n);
printf("numbers entered.... \n");
for(i=1;i<=n;i++)
{
    scanf("%d",&newn);
sum=sum+newn;
}
printf("the sum of %d no. is %d",n,sum);

}
