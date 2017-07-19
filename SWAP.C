#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int x,y;
clrscr();
printf("\nenter the first number:");
scanf("%d",&x);
printf("\nenter the second number:");
scanf("%d",&y);
swap(&x,&y);
printf("your swap result is:%d and %d",x,y);
getch();
}
void swap(int *n1, int *n2){
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
}
