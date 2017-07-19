#include<stdio.h>
#include<conio.h>
#define stdno 3
#define subno 4
void main ()
{
int i,j;
float sumsub[stdno]={0},avgsub[stdno]={0},sumstd[subno]={0},avgstd[subno]={0},deg[stdno][subno]={0};
	clrscr();
	for(i=0;i<stdno;i++)
	{
		for(j=0;j<subno;j++)
		{
		printf("\nenter the deg [%d][%d]:",i,j);
		scanf("%f",&deg[i][j]);
		sumsub[i]+=deg[i][j];
		}
   //	avgsub[i]=sumsub[i]/subno;
   //	printf("\nthe sum of stud[%d] is:%f and avg is:%f",i,sumsub[i],avgsub[i]);
	}
		for(j=0;j<subno;j++)
		{
			for(i=0;i<stdno;i++)
			{
	   //	printf("\nenter the deg [%d][%d]:",i,j);
	   //	scanf("%f",&deg[i][j]);
			sumstd[j]+=deg[i][j];
			}
			avgstd[j]=sumstd[j]/stdno;
   //printf("\nthe sum of stud[%d] is:%f and avg is:%f",i,sumsub[i],avgsub[i]);

	}
		for(i=0;i<stdno;i++)
	{
	printf("\nthe sum deg of stud[%d]is:%f",i,sumsub[i]);
	}
	for(j=0;j<subno;j++)
		{
		printf("\nthe avg of sub[%d]is:%f",j,avgstd[j]);
	   //	scanf("%f",&deg[i][j]);
	   //	sumsub[i]+=deg[i][j];
		}
   //	avgsub[i]=sumsub[i]/subno;
	//printf("\nthe sum of stud[%d] is:%f and avg is:%f",i,sumsub[i],avgsub[i]);


 getch();
}