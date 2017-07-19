#include<stdio.h>
#include<conio.h>
void main()
{
	char str[20];
	int i=0,cword=1;
	clrscr();
	printf("enter your name:");
	do
	{
	str[i]=getche();
	  if(str[i]==' ')
		 cword++;
	  i++;
	}
	while(str[i-1]!=13);
	str[i]='\0';
	clrscr();
	printf("no of characters is:%d \n no of words is %d \n your name is %s",i,cword,str);
	getch();
}