#include<conio.h>
#include<stdio.h>
#include<string.h>
#define ESC 27
#define UPARROW 72
#define DNARROW 80
#define HOME 71
#define END 79
#define ENTER 13

void main(void){

	char menu[3][21]={"New","Display","Exit"};
	int i,current=0,flag=1;
	char ch;
	clrscr();
	do{
		textattr(0x07);
		clrscr();
		for(i=0;i<3;i++)
		{
			
			if(i==current)
			{
				gotoxy(5,5*i+1);
				textattr(0x4b);
				cprintf("\n%s",menu[i]);
				textattr(0x07);
			}
			else
			{
			    gotoxy(5,5*i+1);
				textattr(0x07);
				cprintf("\n%s\n",menu[i]);
				textattr(0x07);
			}
		  //ch=getch();
		}
		ch=getch();
		if(ch==NULL)
		{
		ch=getch();
		switch(ch)
		{
			case DNARROW: //down arrow
			current++;
			if(current>2)
			current=0;
			break;

			case UPARROW:
			current--;
			if(current<0)
			current=2;
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
		 switch(ch){
		 case ENTER:
			clrscr();
			switch(current){
				case 0:
				printf("You pressed New");
				break;
				case 1:
				printf("You pressed Display");
				break;
				case 2:
				printf("You pressed Exit");
				break;
				}
		 getch();
		 break;
		 case ESC:
		 flag=0;
		 break;
		 }
		}
	       //getch();
	}while(flag);
}