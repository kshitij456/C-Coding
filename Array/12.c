#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n,a[5][5];
printf("enter the order of matrix:\n");
scanf("%d  %d",&m,&n);
printf("enter elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("\n\n\n the given matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d \t",a[j][i]);
printf("\n");
}
}
