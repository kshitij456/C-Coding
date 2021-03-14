#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[20],max,min,j,temp;
printf("enter the no.");
scanf("%d",&n);
printf("enter elements \n");
for(i=0;i<n;i++)
{
printf("enter element %d:",i+1);
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("\n\n ascenging order \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("\n\n descending order \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
}
















