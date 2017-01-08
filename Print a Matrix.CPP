//Print a Matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[5][5],j,i,r1,c1;
	printf("Enter row of first matrix=");
	scanf("%d",&r1);
	printf("Enter column of first matrix=");
	scanf("%d",&c1);
	for(i=1;i<=r1;i++)
	{ for(j=1;j<=c1;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("\nMatrix element are given below\n");
	for(i=1;i<=r1;i++)
	{ for(j=1;j<=c1;j++)
	  { printf("\t%d",a[i][j]);
	  }
	 printf("\n");
	}
	getch();
}