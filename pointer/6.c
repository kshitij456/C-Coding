#include<stdio.h>
#include<conio.h>
int main()
{
int i,alphabets=0,digits=0,symbols=0;
char s[20];
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
alphabets++;
else if(s[i]>='0'&&s[i]<='9')
digits++;
else
    symbols++;
}
printf("\n alphabets:%d",alphabets);
printf("\n digits:%d",digits);
printf("\n symbol:%d",symbols);

}
