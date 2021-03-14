#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fp1=fopen("file1.txt","r");
FILE*fp2=fopen("file2.txt","r");
FILE*fp3=fopen("file3.txt","w");
char c;
if(fp1==NULL || fp2==NULL || fp3==NULL)
{
printf("could not open file");
exit(0);
}
while((c=fgetc(fp1))!=EOF)
fputc(c,fp3);
while(c=fgetc(fp2)!=EOF)
fputc(c,fp3);
printf("\n\n contents of  file is:%s",fp3);
fclose(fp1);
fclose(fp1);
fclose(fp1);
}
