#include<stdio.h>
#include<conio.h>
void main ()
{
int min,max,i;
int arr[5]={0};
clrscr();
for(i=0;i<5;i++)
	{
printf("enter value of%d:",i);
scanf("%d",&arr[i]);
if(arr[i]>max)
max=arr[i];
if(arr[i]<min)
min=arr[i];
	}
printf("the max is:%d and the min is:%d",max,min);
getch();
}