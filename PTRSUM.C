#include<stdio.h>
#include<conio.h>
void main ()
{
int ** ptr;
int i,j,stdno;
int *subno=NULL;
int  *sum=NULL;
	clrscr();
	printf("\n enter the students number:");
	scanf("%d",&stdno);
	ptr=(int **)malloc(stdno*sizeof(int));
	subno=(int *)malloc(stdno*sizeof(int));
	sum=(int *)malloc(stdno*sizeof(int));

	for(i=0;i<stdno;i++)
	{
	printf("\n enter the subjects number of student[%d]:",i);
	scanf("%d",&subno[i]);
	ptr[i]=(int *)malloc(subno[i]*sizeof(int));
	 }
	 for(i=0;i<stdno;i++)
	 {
	 sum[i]=0;
		for(j=0;j<subno[i];j++)
		{
		printf("\nenter the deg [%d][%d]:",i,j);
		scanf("%d",&ptr[i][j]);
	   sum[i]+=ptr[i][j];
		}
	  }
	  for(i=0;i<stdno;i++)
		for(j=0;j<subno[i];j++)
		{
		printf("\nthe deg of stud[%d][%d]is:%d",i,j,ptr[i][j]);
		}
		for(i=0;i<stdno;i++)
		printf("\nthe sum degree of student [%d]is:%d",i,sum[i]);
getch();
}