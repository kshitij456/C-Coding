#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char s1[5],s2[5];
printf("enter the string:");
scanf("%s %s",s1,s2);
printf("\n length:%d",strlen(s1));
printf("\n upper case:%s",strupr(s1));
printf("\n lower case:%s",strlwr(s1));
strcpy(s2,s1);
printf("\n copied string:%s",s2);
printf("\n reverse string:%s",strrev(s1));

return(0);
}
