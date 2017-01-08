//Print a alphabetic triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,j;
	char ch=65;
	for(i=1;i<=9;i+=2)
	{ for(j=1;j<=i;j++)
	  { printf("%c ",ch);
	    ch++;
	  }
	  printf("\n");
	}
	getch();
}