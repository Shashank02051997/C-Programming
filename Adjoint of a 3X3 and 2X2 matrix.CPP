//Adjoint of a 3X3 and 2X2 matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[5][5],j,i,r1,c1,A1,A2,A3,A4,A5,A6,A7,A8,A9,d,A[5][5],B1,B2,B3,B4;
	printf("Enter row of matrix A=");
	scanf("%d",&r1);
	printf("Enter column of matrix A=");
	scanf("%d",&c1);
	for(i=1;i<=r1;i++)
	{ for(j=1;j<=c1;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("\nMatrix element of A are given below\n");
	for(i=1;i<=r1;i++)
	{ for(j=1;j<=c1;j++)
	  { printf("\t%d",a[i][j]);
	  }
	  printf("\n");
	}
	if(r1==3)
	{ A1=(a[2][2]*a[3][3]-a[3][2]*a[2][3]);
	  A2=(a[2][3]*a[3][1]-a[2][1]*a[3][3]);
	  A3=(a[2][1]*a[3][2]-a[3][1]*a[2][2]);
	  A4=(a[1][3]*a[3][2]-a[1][2]*a[3][3]);
	  A5=(a[1][1]*a[3][3]-a[1][3]*a[3][1]);
	  A6=(a[1][2]*a[3][1]-a[1][1]*a[3][2]);
	  A7=(a[1][2]*a[2][3]-a[1][3]*a[2][2]);
	  A8=(a[1][3]*a[2][1]-a[1][1]*a[2][3]);
	  A9=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
	  printf("\nAdjoint of matrix A =\n\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d",A1,A4,A7,A2,A5,A8,A3,A6,A9);
	  d=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(a[2][1]*a[3][3]-a[3][1]*a[2][3])+a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
	  printf("\nDetertiment of matrix A=%d",d);
	}
	if(r1==2)
	{ B1=a[1][1];
	  B2=a[1][2];
	  B3=a[2][1];
	  B4=a[2][2];
	  printf("\nAdjoint of matrix A =\n\t%d\t%d\n\t%d\t%d",B4,-B2,-B3,B1);
	  d=a[1][1]*a[2][2]-a[1][2]*a[2][1];
	  printf("\nDetertiment of matrix A=%d",d);
	 }
	getch();
}
