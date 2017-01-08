//Print right angle triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,j;
	for(i=1;i<=6;i++)
	{ for(j=1;j<=i;j++)
	  printf(" *");
	  printf("\n");
	}
	getch();
}