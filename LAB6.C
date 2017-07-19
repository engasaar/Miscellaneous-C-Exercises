  #include <stdio.h>
  #include <conio.h>
  #include <ctype.h>
  #include <string.h>
  int main()
  {
    char ch ;
     char ar[11]={0};
    int flag=1;
    int i=0;
    int x;
    clrscr();

   while(flag)
   {
  ch=getch();

if(ch!=0)

 {

 x=isprint(ch);
 if(x)
 {
   if(i<10)
   {
 printf("%c", ch);
 ar[i]=ch;
 i ++;
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
 gotoxy(i+1,10);
  printf("%s",ar);
  break;

 case 27:
 flag=0;
 break;

 }

 }
 }

 else
{
ch=getch();
switch (ch)
{
  case 71: //home
  i=0;
  gotoxy(i+1,1);
 
  break;

  case 79: //end
   i=strlen(ar);
  gotoxy(i+1,1);

  break;

  case 77: //right
  if(i<strlen(ar))
  {
  i++;
  gotoxy(i+1,1);
  }
 
   

  break;

  case 75: //left
  if(i>0)
  {
   i--;
   gotoxy(i+1,1);
  }

  break;

 }

 }

 }








   return 0;

  }