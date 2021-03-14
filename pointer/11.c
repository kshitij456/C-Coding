#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i;
char s1[20],s2[20];
printf("enter the string 1:");
scanf("%s",s1);
printf("enter the string 2:");
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]!=s2[i])
{
if(s1[i]>s2[i])
printf("\n s1 is greater");
else
printf("\n s2 is greater");
exit(0);
}
}
printf("\n strings are same");
}
