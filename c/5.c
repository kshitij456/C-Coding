#include<stdio.h>
#include<conio.h>
int main()
{
float x,r1,r2,a,b,c;
printf("enter a,b,c ");
scanf("%f %f %f",&a,&b,&c);
x=b*b-4*a*c;
r1=(-b+x)/2*a;
r2=(-b-x)/2*a;
if(x>0)
printf("\n roots are real");
else if(x<0)
printf("\n roots are imaginary");
else
printf("\n roots are equal");
printf("\n R1=%6.2f",r1);
printf("\n R2=%6.2f",r2);



}
