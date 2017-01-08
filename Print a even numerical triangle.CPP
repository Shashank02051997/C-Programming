//Print a even numerical triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,j,k=0;
	for(i=1;i<=9;i+=2)
	{ for(j=1;j<=i;j++)
	  { printf("%d ",k);
	    k+=2;
	  }
	  printf("\n");
	}
	getch();
}