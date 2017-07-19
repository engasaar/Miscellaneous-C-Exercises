#include<stdio.h>
#include<conio.h>
void main()
{
int* ptr,i,size;
clrscr();
printf("please enter your array size:");
scanf("%d",&size);
ptr=(int *)malloc(size*sizeof(int));
for(i=0;i<size;i++)
{
printf("enter the value[%d]:",i);
scanf("%d",ptr+i);
}
for(i=0;i<size;i++)
{
//printf("\nthe value[%d] is:%d",i,*(ptr+i));
printf("\nthe value[%d] is:%d",i,ptr[i]);
}
getch();
}

