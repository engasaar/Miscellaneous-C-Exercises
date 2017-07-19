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
	struct employee emp;
	float netSalary=emp.salary+emp.overtime-emp.deduction;;
	clrscr();
			printf("Enter details of enmplyee");
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
			scanf("%d",&emp.code);
			gotoxy(10,10);
			scanf("%s",&emp.name);
			gotoxy(10,15);
			scanf("%d",&emp.age);
			gotoxy(27,5);
			scanf("%f",&emp.salary);
			gotoxy(29,10);
			scanf("%f",&emp.overtime);
			gotoxy(27,15);
			scanf("%f",&emp.deduction);
			netSalary=emp.salary+emp.overtime-emp.deduction;
		clrscr();
			printf("Details of employee number");
			gotoxy(5,5);
			printf("Code: %d",emp.code);
			gotoxy(5,10);
			printf("Name: %s",emp.name);
			gotoxy(5,15);
			printf("Net salary: %f",netSalary);
		    getch();
}
