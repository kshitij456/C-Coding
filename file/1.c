#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fp;
char fName[30];
char ch;
printf("enter the file name to create:");
scanf("%s",fName);
fp=fopen(fName,"w");
if(fp==NULL)
{
printf("file not created");
exit(0);
}
printf("file created successfully");
printf("\n\n enter text to write(press <enter> to save & quit)\n");
while(ch=getchar()!='\n')
{
putc(ch,fp);
}
printf("\n data written successfully");
fclose(fp);
fp=fopen(fName,"r");
if(fp==NULL)
{
printf("\n can't open the file");
exit(0);
}
printf("\n contents of the file is: \n");
while(ch=getc(fp)!=EOF)
{
printf("%c",ch);
}
fclose(fp);
}




