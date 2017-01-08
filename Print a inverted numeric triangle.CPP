//Print a inverted numeric triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,j,k;
	for(i=8;i>=1;i--)
	{ for(j=8;j>i;j--)
	  printf(" ");
	  for(k=1;k<=i;k++)
	  printf("%d ",k);
	  printf("\n");
	}
	getch();
}