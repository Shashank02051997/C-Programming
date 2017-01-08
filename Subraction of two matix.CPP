//Subraction of two matix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[5][5],b[5][5],j,i,s[5][5],r1,c1,r2,c2;
	printf("Enter row of first matrix=");
	scanf("%d",&r1);
	printf("Enter column of first matrix=");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{ for(j=0;j<c1;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("Matix of first elements are given below:\n");
	for(i=0;i<r1;i++)
	{ for(j=0;j<c1;j++)
	  { printf("\t%d",a[i][j]);
	  }
	 printf("\n");
	}
	printf("Enter row of second matrix=");
	scanf("%d",&r2);
	printf("Enter column of second matrix=");
	scanf("%d",&c2);
	for(i=0;i<r2;i++)
	{ for(j=0;j<c2;j++)
	  { printf("Enter an element:");
	    scanf("%d",&b[i][j]);
	  }
	}
	printf("Matix of second elements are given below:\n");
	for(i=0;i<r2;i++)
	{ for(j=0;j<c2;j++)
	  { printf("\t%d",b[i][j]);
	  }
	 printf("\n");
	}
	printf("Subraction of two marix\n");
	for(i=0;i<r1;i++)
	{ for(j=0;j<c1;j++)
	  { s[i][j]=a[i][j]-b[i][j];
	  }
	}
	for(i=0;i<r1;i++)
	{ for(j=0;j<c1;j++)
	  { printf("\t%d",s[i][j]);
	  }
	  printf("\n");
	}
	getch();
}

