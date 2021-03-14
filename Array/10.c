#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n,a[5][5],sum=0;
printf("enter the order of matrix:\n");
scanf("%d  %d",&m,&n);
printf("enter elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
if(i<=j)
sum=sum+a[i][j];
}
printf("sum of the upper triangular elements is %d",sum);
}
