#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ENTER 13
#define ESC 27
#define HOME 71
#define END 79
#define UP 72
#define DOWN 80
void main()
{
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
				printf("you entered the NEW page");
				delay(2000);
				break;
				case 1:
				printf("you entered the Display page");
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