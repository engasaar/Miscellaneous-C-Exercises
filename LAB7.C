#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <alloc.h>
#define LEFT 75
#define RIGHT 77
#define HOME 71
#define END 79
int main()
{
int n;
char ch;
char* ptr;
char* pcurrent;
clrscr();
  printf("enter the number of characters: ");
  scanf("%d",&n);
  clrscr();

  ptr=(char* )malloc(sizeof(char)*n+1);

 if (ptr!=NULL)
 {
  pcurrent=ptr ;
  memset(ptr,0,n+1);
 while(ch!=27)
 {
 ch=getch();
 if(ch!=0)
 {
  if(isprint(ch))
  {
	if((pcurrent-ptr) <n)
	{
	 printf("%c",ch);
	 *pcurrent=ch;
	 pcurrent ++;

	}
	else
	{
	printf("\a");
	}
  }
  else
  {
  switch (ch)
  {
  case 13:
  gotoxy(1,10);
  printf("%s",ptr);
  break;

  }

  }

 }
 else
 {
  ch=getch();
  switch (ch)
  {
  case HOME:
  pcurrent=ptr;
  gotoxy(pcurrent-ptr+1,1);
  break;

  case END:
  pcurrent=ptr+strlen(ptr);
  gotoxy(pcurrent-ptr+1,1);
  break;

  case RIGHT:
  if((pcurrent-ptr)<strlen(ptr))
  {
   pcurrent++;
   gotoxy(pcurrent-ptr+1,1);
  }
   break;


   case LEFT:

   if((pcurrent-ptr)>0)
   {
	pcurrent --;
	gotoxy(pcurrent-ptr+1,1);
   }
   break;





  }

 }

 }
 }

 getch();

return 0;
}