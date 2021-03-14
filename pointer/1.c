#include<stdio.h>
#include<conio.h>
swap(int*x,int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main()
{
int a,b;
printf("enter the no. \n");
scanf("%d %d",&a,&b);
printf("\n before swapping a=%d and b=%d \n",a,b);
swap(&a,&b);
printf("\n after swapping a=%d and b=%d \n",a,b);

}
