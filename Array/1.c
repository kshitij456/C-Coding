#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,a[20];
printf("enter a no.");
scanf("%d",&n);
printf("enter array elements \n");
for(i=0;i<n;i++)
{
printf("enter element %d:",i+1);
scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
printf("\n element %d:%d",i+1,a[i]);



}
