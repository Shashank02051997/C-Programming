//Determinent of 2X2 matrix and 3X3 matrix and 4X4 matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[5][5],j,i,r1,c1,d,s1,s2,s3,s4;
	printf("enter row of first matrix=");
	scanf("%d",&r1);
	printf("enter column of first matrix=");
	scanf("%d",&c1);
	for(i=1;i<=r1;i++)
	{ for(j=1;j<=c1;j++)
	  { printf("enter an element:");
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
	if(r1==c1)
	{ if(r1==2)
	  { printf("Determinant of 2X2 matrix\n");
	    d=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
	    printf("Detertiment=%d",d);
	  }
	  if(r1==3)
	  { printf("Determinant of 3X3 matrix\n");
	    d=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(a[2][1]*a[3][3]-a[3][1]*a[2][3])+a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
	    printf("Detertiment=%d",d);
	  }
	  if(r1==4)
	  { s1=a[1][1]*(a[2][2]*(a[3][3]*a[4][4]-a[4][3]*a[3][4])-a[2][3]*(a[3][2]*a[4][4]-a[3][4]*a[4][2])+a[2][4]*(a[3][2]*a[4][3]-a[3][3]*a[4][2]));
	    s2=a[1][2]*(a[2][1]*(a[3][3]*a[4][4]-a[4][3]*a[3][4])-a[2][3]*(a[3][1]*a[4][4]-a[3][4]*a[4][1])+a[2][4]*(a[3][1]*a[4][3]-a[3][3]*a[4][1]));
	    s3=a[1][3]*(a[2][1]*(a[3][2]*a[4][4]-a[4][2]*a[3][4])-a[2][2]*(a[3][1]*a[4][4]-a[3][4]*a[4][1])+a[2][4]*(a[3][1]*a[4][2]-a[3][2]*a[4][1]));
	    s4=a[1][4]*(a[2][1]*(a[3][2]*a[4][3]-a[4][2]*a[3][3])-a[2][2]*(a[3][1]*a[4][3]-a[3][3]*a[4][1])+a[2][3]*(a[3][1]*a[4][2]-a[3][2]*a[4][1]));
	    d=s1-s2+s3-s4;
	    printf("Determinant of 4X4 matrix=%d",d);
	  }
	}
	else
	{ printf("Determinent doesnot possible");
	}
	getch();
}