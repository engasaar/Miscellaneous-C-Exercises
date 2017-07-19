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
struct dep
{
char name[20];
struct emp e[3];
};
void main()
{
struct dep d1;
float net[3];
int i;
clrscr();
printf("\nenter the dept name:");
scanf("%s",&d1.name);
	for(i=0;i<3;i++)
	{
	printf("\nenter the Employee[%d] id:",i);
	scanf("%d",&d1.e[i].id);
	printf("\nenter the Employee[%d] name:",i);
	scanf("%s",d1.e[i].name);
	printf("\nenter the Employee[%d] salary:",i);
	scanf("%f",&d1.e[i].sal);
	printf("\nenter the Employee[%d] Deduction:",i);
	scanf("%f",&d1.e[i].ded);
	printf("\nenter the Employee[%d] Bonus:",i);
	scanf("%f",&d1.e[i].bon);
	net[i]=d1.e[i].sal-d1.e[i].ded-d1.e[i].bon;
	}
clrscr();
printf("\n the depart name is:");
puts(d1.name);
	for(i=0;i<3;i++)
	{
	printf("\nthe id of Employee is:%d \nthe name of Employee is:%s \nthe net salary is:%f",d1.e[i].id,d1.e[i].name,net[i]);
	}
getch();
}
