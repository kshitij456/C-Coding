#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
fibbo(int pre,int cur,int x)
{
int temp;
if(x==2)
{
exit(0);
}
temp=cur;
cur=pre+cur;
pre=temp;
printf("\t %d ",cur);
fibbo(pre,cur,x-1);
}
int main()
{
int pre=0,cur=1,n;
printf("enter the no.");
scanf("%d",&n);
printf("%d \t %d",pre,cur);
fibbo(pre,cur,n);
}
