#include<conio.h>
#include<stdio.h>
#include<string.h>
void main(void)
{
	char fname[10];
	char lname[10];
	char fullname[40]={0};
	clrscr();
	printf("Entet first name:");
	gets(fname);
	printf("Entet last name ");
	gets(lname);
	strcat(fname," ");
	strcpy(fullname,fname);
	strcat(fullname,lname);
	printf("The full name is:");
	puts(fullname);
	getch();
}