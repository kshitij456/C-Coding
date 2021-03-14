#include<stdio.h>
#include<conio.h>
int main()
{
int i,len=0;
char s[20];
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
len++;
printf("length is %d",len);


}
