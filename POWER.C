#include<stdio.h>
#include<conio.h>
int power(int x,int y)
{
int result=1;
if(y>0)
result=x*power(x,y-1);

return result;

}
void main()
{

int n,p,res=0;
clrscr();
printf("enter the base value:");
scanf("%d",&n);
printf("enter the power value:");
scanf("%d",&p);
res=power(n,p);
printf("your result is:%d",res);
getch();
}