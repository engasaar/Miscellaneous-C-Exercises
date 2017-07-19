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
float net[5]={0};
int ex[5]={0};
int i=0,flag=1,j=0;
char ch;
clrscr();
printf("\nenter the index of Employee:");
scanf("%d",&i);
	while(flag==1)
	{
	if(i<0||i>4)
	{
	printf("\nplease enter value between 0-4:");
	scanf("%d",&i);
	}
	else
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
	ex[i]=1;
	printf("\ndo you want to add an other employee(y/n):");
	flushall();
	scanf("%c",&ch);
	switch(ch)
	{
	case'n':
	case'N':
	flag=0;
	break;
	case'y':
	case'Y':
	printf("\nenter the index of Employee:");
	scanf("%d",&i);
	 }

   //	printf("\nenter the index of Employee:");
   //	scanf("%d",&i);
	}
	}
clrscr();
		for (j=0;j<5;j++)
		{
		if(ex[j]==0);
		else printf("\nthe id of Employee is:%d \nthe name of Employee is:%s \nthe net salary is:%f",e1[j].id,e1[j].name,net[j]);
		 }
getch();
}
