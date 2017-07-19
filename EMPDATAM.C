#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ENTER 13
#define ESC 27
#define HOME 71
#define END 79
#define UP 72
#define DOWN 80
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
char str[3][10]={"\tNEW","\tDISPLAY","\tEXIT"};
int i,current=0,flag=1;
char ch;
clrscr();
	do
	{
	clrscr();
	textattr(0x03);
	printf("\n\n\n\n");
		for(i=0;i<3;i++)
		{
			if(i==current)
			{
			textattr(0x0a);
			cprintf("%s",str[i]);
			printf("\n\n\n");
			textattr(0x03);
			}
			else
			{
			textattr(0x03);
			cprintf("%s",str[i]);
			printf("\n\n\n");
			textattr(0x03);
			}
		}
		ch=getch();
		if(ch==0)
		{
		ch=getch();
			switch(ch)
			{
			case UP:
			current--;
			if(current<0)
			current=2;
			break;
			case DOWN:
			current++;
			if(current>2)
			current=0;
			break;
			case HOME:
			current=0;
			break;
			case END:
			current=2;
			break;
			}
		}
		else
		{
			switch(ch)
			{
			case ENTER:
			clrscr();
				switch(current)
				{
				case 0:
				e=create();
				delay(2000);
				break;
				case 1:
				display(e);
				delay(2000);
				break;
				case 2:
				exit();
				break;
				}
			break;
			case ESC:
			flag=0;
			break;
			}
		}


	}
	while (flag!=0);

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
net=e1.sal-e1.ded-e1.bon;
clrscr();
printf("\nthe id of Employee is:%d \nthe name of Employee is:%s \nthe net salary is:%f",e1.id,e1.name,net);
}
