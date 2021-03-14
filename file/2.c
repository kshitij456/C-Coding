#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fp;
char str[100];
fp=fopen("C:\\myfile.txt","w");
if(fp==NULL)
{
printf("\n an error occured while opening the specified file");
exit(0);
}
printf("enter the string:");
gets(str);
fputs(str,fp);
fclose(fp);
fp=fopen("C:\\myfile.txt","r");
if(fp==NULL)
{
printf("\n an error occured while opening the specified file");
exit(0);
}
while(1)
{
if(fgets(str,10,fp)==NULL)
break;
else
printf("%s",str);

}
fclose(fp);



}
