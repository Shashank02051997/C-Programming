//Print a increasing numeric triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,j,k,l=1;
	for(i=1;i<=5;i++)
	{ for(j=5;j>i;j--)
	  { printf(" ");
	  }
	  for(k=1;k<=i;k++)
	  { printf("%d ",l);
	    l++;
	  }
	  printf("\n");
	}
	getch();
}