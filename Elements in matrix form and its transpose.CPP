//Elements in matrix form and its transpose
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[3][3],j,i;
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("\nArray elements are:\n");
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  { printf("\t%d",a[i][j]);
	  }
	 printf("\n");
	}
	printf("\nTranspose of matrix:\n");
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  { printf("\t%d",a[j][i]);
	  }
	 printf("\n");
	}
	getch();

}
