#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int roll_no;
int m1,m2,m3;
};
int main()
{
int i;
struct student s[5];
for(i=0;i<5;i++)
{
printf("\n enter the details of student %d \n",i+1);
printf("enter name:");
scanf("%s",&s[i].name);
printf("enter roll no:");
scanf("%d",&s[i].roll_no);
printf("enter mark for sub 1:");
scanf("%d",&s[i].m1);
printf("enter mark for sub 2:");
scanf("%d",&s[i].m2);
printf("enter mark for sub 3:");
scanf("%d",&s[i].m3);
}
}
