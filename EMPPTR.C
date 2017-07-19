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
struct emp *eptr;
float *net;
int i,j,num;
clrscr();
printf("\n enter the employees number:");
scanf("%d",&num);
eptr=(struct emp *)malloc(num * sizeof(struct emp));
net=(float *)malloc(num * sizeof(float));
	for(i=0;i<num;i++)
	{
	printf("\nenter the Employee[%d] id:",i);
	scanf("%d",&eptr[i].id);
	printf("\nenter the Employee[%d] name:",i);
	scanf("%s",eptr[i].name);
	printf("\nenter the Employee[%d] salary:",i);
	scanf("%f",&eptr[i].sal);
	printf("\nenter the Employee[%d] Deduction:",i);
	scanf("%f",&eptr[i].ded);
	printf("\nenter the Employee[%d] Bonus:",i);
	scanf("%f",&eptr[i].bon);
	net[i]=eptr[i].sal-eptr[i].ded-eptr[i].bon;

	}
clrscr();
	for (j=0;j<num;j++)
	{
	printf("\nthe id of Employee is:%d \nthe name of Employee is:%s \nthe net salary is:%f",eptr[j].id,eptr[j].name,net[j]);
	 }
getch();
}
