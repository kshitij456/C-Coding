#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n,a[5][5],b[5][5],c[5][5];
printf("enter the order of matrix:\n");
scanf("%d  %d",&m,&n);
printf("enter elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("enter elements of second matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf("\n\n\nresultant matrix: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d \t",c[i][j]);
printf("\n");
}
}
