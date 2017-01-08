//Multiplication of two matrix
#include<stdio.h>
#include<conio.h>
void main()
{	int m1[4][4],m2[4][4],m3[4][4],r,c,k,r1,r2,c1,c2;
	clrscr();
	printf("Enter the values of 1st matrix\n");
	printf("Enter row=");
	scanf("%d",&r1);
	printf("Enter column=");
	scanf("%d",&c1);
	printf("Enter the values of matrix %dX%d\n",r1,c1);
	for(r=0;r<r1;r++)
	{ for(c=0;c<c1;c++)
	  { scanf("%d",&m1[r][c]);
	  }
	}
	printf("Enter the values of 2nd matrix \n");
	printf("Enter row=");
	scanf("%d",&r2);
	printf("Enter column=");
	scanf("%d",&c2);
	printf("Enter the values of matrix %dX%d\n",r2,c2);
	for(r=0;r<r2;r++)
	{ for(c=0;c<c2;c++)
	  { scanf("%d",&m2[r][c]);
	  }
	}
	for(r=0;r<r1;r++)
	{ for(c=0;c<c2;c++)
	  { m3[r][c]=0;
	    for(k=0;k<r2;k++)
	    { m3[r][c]=m3[r][c]+m1[r][k]*m2[k][c];
	    }
	  }
	}
	printf("The multiplication of matrix is \n");
	for(r=0;r<r1;r++)
	{ for(c=0;c<c2;c++)
	  { printf("%d\t",m3[r][c]);
	  }
	  printf("\n");
	 }
	 getch();
}





