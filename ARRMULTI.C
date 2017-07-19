#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,sum=0;
int first[3][3]={0},second[3][3]={0},multiply[3][3]={0};
clrscr();
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	printf("\nenter the element[%d][%d] of first array:",i,j);
	scanf("%d",&first[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	printf("\nenter the element[%d][%d] of second array:",i,j);
	scanf("%d",&second[i][j]);
	}
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
		sum+=first[i][k]*second[k][j];
		}
	multiply[i][j]=sum;
	sum=0;
	}
printf("the result is\n");
	for(i=0;i<3;i++)
	{
	printf("\n");
		for(j=0;j<3;j++)
		{
		printf("\t%d",multiply[i][j]);
		}
	}
 getch();
 }