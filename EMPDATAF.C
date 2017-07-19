#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
int id;
char name[20];
float sal;
float ded;
float bon;
};
struct emp create ();
void display(struct emp);

void main()
{
struct emp e;
clrscr();
e=create();
display(e);

getch();
}
struct emp create ()
{
struct emp e1;
printf("\nenter the Employee id:");
scanf("%d",&e1.id);
printf("\nenter the Employee name:");
scanf("%s",e1.name);
printf("\nenter the Employee salary:");
scanf("%f",&e1.sal);
printf("\nenter the Employee Deduction:");
scanf("%f",&e1.ded);
printf("\nenter the Employee Bonus:");
scanf("%f",&e1.bon);
return e1;
}
void display(struct emp e1)
{
float net;
net=e1.sal-e1.ded+e1.bon;
clrscr();
printf("\nthe id of Employee is:%d \nthe name of Employee is:%s \nthe net salary is:%f",e1.id,e1.name,net);
}
