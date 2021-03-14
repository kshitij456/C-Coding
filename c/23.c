#include<stdio.h>
#include<conio.h>
int main()
{
int pre=0,cur=1,temp,i,n;
printf("enter the no.");
scanf("%d",&n);
printf("%d\t%d",pre,cur);
for(i=3;i<=n;i++)
{
temp=cur;
cur=pre+cur;
pre=temp;
printf("\t%d",cur);

}


}
