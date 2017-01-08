//Determinent of 3X3 matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[3][3],j,i,d;
	for(i=1;i<=3;i++)
	{ for(j=1;j<=3;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("\nMatrix element are given below\n");
	for(i=1;i<=3;i++)
	{ for(j=1;j<=3;j++)
	  { printf("\t%d",a[i][j]);
	  }
	 printf("\n");
	}
	d=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(a[2][1]*a[3][3]-a[3][1]*a[2][3])+a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
	printf("Determinant of matrix=%d",d);
	getch();
}