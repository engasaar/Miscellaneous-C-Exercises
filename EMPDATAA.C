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
void main()
{
struct emp e1[5];
float net[5];
int i,j;
clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nenter the Employee[%d] id:",i);
	scanf("%d",&e1[i].id);
	printf("\nenter the Employee[%d] name:",i);
	scanf("%s",e1[i].name);
	printf("\nenter the Employee[%d] salary:",i);
	scanf("%f",&e1[i].sal);
	printf("\nenter the Employee[%d] Deduction:",i);
	scanf("%f",&e1[i].ded);
	printf("\nenter the Employee[%d] Bonus:",i);
	scanf("%f",&e1[i].bon);
	net[i]=e1[i].sal-e1[i].ded-e1[i].bon;
	}
clrscr();
	for (j=0;j<5;j++)
	{
	printf("\nthe id of Employee is:%d \nthe name of Employee is:%s \nthe net salary is:%f",e1[j].id,e1[j].name,net[j]);
	 }
getch();
}
