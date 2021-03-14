#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[20],max,min;
printf("enter the no.");
scanf("%d",&n);
printf("enter elements \n");
for(i=0;i<n;i++)
{
printf("enter element %d:",i+1);
scanf("%d",&a[i]);
}
max=min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("\n min is %d \n max is %d",min,max);
}
