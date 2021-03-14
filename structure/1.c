#include<stdio.h>
#include<conio.h>
struct employee
{
char name[20];
int emp_id;
long int phone_no;
};
int main()
{
struct employee e;
printf("enter name:");
scanf("%s",&e.name);
printf("enter emp id:");
scanf("%d",&e.emp_id);
printf("enter phone no.:");
scanf("%ld",&e.phone_no);
printf("\n\n name:%s",e.name);
printf("\n\n emp id:%d",e.emp_id);
printf("\n\n phone no.:%ld",e.phone_no);
}


