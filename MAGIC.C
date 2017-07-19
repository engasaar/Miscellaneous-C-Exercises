#include<stdio.h>
#include<conio.h>
void main ()
{
int n,mag_size,mag_elem,mag_row,mag_col;
clrscr();
printf("\nplease enter the size of magic box:");
scanf("%d",&mag_size);
mag_elem=mag_size*mag_size;
					mag_row=1;
					mag_col=(mag_size+1)/2;

for(n=1;n<=mag_elem;n++)
	{
	gotoxy(mag_col*3,mag_row*3);
	printf("%d",n);

		if (n%mag_size==0)
							{
							mag_row++;
								if(mag_row>mag_size)
									mag_row=1;
							}
			else
				{
				mag_row--;
				mag_col--;
				if(mag_row==0)
						mag_row=mag_size;
				if(mag_col==0)
						mag_col=mag_size;
				}

	}
getch();
}