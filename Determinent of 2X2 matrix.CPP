//Determinent of 2X2 matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[2][2],j,i,d;
	for(i=1;i<=2;i++)
	{ for(j=1;j<=2;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("\nMatrix element are given below\n");
	for(i=1;i<=2;i++)
	{ for(j=1;j<=2;j++)
	  { printf("\t%d",a[i][j]);
	  }
	 printf("\n");
	}
	d=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
	printf("Determinant of matrix=%d",d);
	getch();
}