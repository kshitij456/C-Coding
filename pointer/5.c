#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[20],s2[20];
printf("enter the string 1:");
scanf("%s",s1);
printf("enter the string 2:");
scanf("%s",s2);
if(strcmp(s1,s2)>0)
printf("\n s1 is greater");
else if(strcmp(s1,s2)<0)
printf("\n s2 is greater");
else
printf("\n strings are same");
}
