#include<stdio.h>
#include<conio.h>
struct date
{
int mm,dd,yy;
};
struct employee
{
char name[30];
int emp_id;
struct date DOB,DOJ;
};
int main()
{
struct employee e;
printf("enter the name:");
scanf("%s",&e.name);
printf("enter emp id:");
scanf("%d",&e.emp_id);
printf("enter the date of joining \n");
printf("dd-mm-yy:");
scanf("%d-%d-%d",&e.DOJ.dd,&e.DOJ.mm,&e.DOJ.yy);
printf("enter the date of birth \n");
printf("dd-mm-yy:");
scanf("%d-%d-%d",&e.DOB.dd,&e.DOB.mm,&e.DOB.yy);
printf("\n\n name:%s",e.name);
printf("\n\n emp id:%d",e.emp_id);
printf("\n\n DOB:%d-%d-%d",e.DOB.dd,e.DOB.mm,e.DOB.yy);
printf("\n\n DOJ:%d-%d-%d",e.DOJ.dd,e.DOJ.mm,e.DOJ.yy);


}
