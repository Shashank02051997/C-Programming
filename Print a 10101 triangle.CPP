//Print a 10101 triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,k,l=1;
	for(i=1;i<11;i+=2)
	{ for(k=1;k<=i;k++)
	  { printf("%d ",l%2);
	    l++;
	  }
	  printf("\n");
	}
	getch();
}