#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,j,len=0;
char s1[20],s2[20];
printf("enter the string 1:");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++)
len++;
j=0;
for(i=len-1;i>=0;i--)
{
s2[j]=s1[i];
j++;
}
s2[j]='\0';
for(i=0;s1[i]!='\0';i++)
if(s1[i]!=s2[i])
{
printf("\n not palindrome");
exit(0);
}
printf("\n palindrome");
}
