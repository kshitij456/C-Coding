#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,m,a[5][5],b[5][5],c[5][5];
printf("enter the order of matrix:\n");
scanf("%d",&m);
printf("enter elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
printf("enter elements of second matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=0;
for(k=0;k<m;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
printf("\n\n\nresultant matrix: \n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
printf("%d \t",c[i][j]);
printf("\n");
}
}
