#include<conio.h>
#include<stdio.h>
#include<string.h>
struct employee{
int code;
char name[20];
int age;
float salary;
float overtime;
float deduction;

};
void main(void){
	int i,j;
	char ch;
	struct employee emp[3];
	float netSalary[3]={0};
	clrscr();
		for(i=0;i<3;i++)
		{
			printf("Enter details of enmplyee number %d",i+1);
			gotoxy(5,5);
			printf("Code: \n");
			gotoxy(5,10);
			printf("Name: ");
			gotoxy(5,15);
			printf("Age: ");
			gotoxy(20,5);
			printf("Salary: ");
			gotoxy(20,10);
			printf("Overtime: ");
			gotoxy(20,15);
			printf("Deduct: ");
			gotoxy(10,5);
			scanf("%d",&emp[i].code);
			gotoxy(10,10);
			scanf("%s",&emp[i].name);
			gotoxy(10,15);
			scanf("%d",&emp[i].age);
			gotoxy(27,5);
			scanf("%f",&emp[i].salary);
			gotoxy(29,10);
			scanf("%f",&emp[i].overtime);
			gotoxy(27,15);
			scanf("%f",&emp[i].deduction);
			netSalary[i]=emp[i].salary+emp[i].overtime-emp[i].deduction;
			clrscr();
			flushall();
		}
		clrscr();

		for(j=0;j<3;j++)
		{
			clrscr();
			printf("Details of employee number %d",j+1);
			gotoxy(5,5);
			printf("Code: %d",emp[j].code);
			gotoxy(5,10);
			printf("Name: %s",emp[j].name);
			gotoxy(5,15);
			printf("Net salary: %f",netSalary[j]);
		    getch();
	       }
}
