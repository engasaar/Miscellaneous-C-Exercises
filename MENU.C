#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
do
{
printf("\nA)Good Morning\nB)Good Evening\nC)Exit\nplease choose:");
// scanf("%c",&ch);
ch=getche();
switch(ch)
{
case'a':
case'A':
printf("Good morning");
break;
case'b':
case'B':
printf("Good Evening");
break;
case'c':
case'C':
exit();
break;
default:
printf("invalid character");
break;
}
}
while(1);

}