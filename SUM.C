#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0;
clrscr();
do{
printf("\nplease enter the number:");
scanf("%d",&num);
sum+=num;
printf("\nyour result is:%d",sum);
}
while(sum<100);
printf("\nyour result is:%d",sum);
getch();
}