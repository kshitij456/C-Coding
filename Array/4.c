#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[20];
printf("enter the no.");
scanf("%d",&n);
printf("enter elements \n");
for(i=0;i<n;i++)
{
printf("enter element %d:",i+1);
scanf("%d",&a[i]);
}
printf("\n\n negative no.\n");
for(i=0;i<n;i++)
if(a[i]<0)
printf("%d\n",a[i]);
printf("\n\n positive no.\n");
for(i=0;i<n;i++)
if(a[i]>0)
printf("%d\n",a[i]);

}
