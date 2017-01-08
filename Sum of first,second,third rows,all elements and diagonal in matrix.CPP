//Sum of first,second,third rows,all elements and diagonal in matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[3][3],j,i,s1=0,s2=0,s3=0,s=0,S=0;
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
	for(j=0;j<3;j++)
	{   s1=s1+a[0][j];
	    s2=s2+a[1][j];
	    s3=s3+a[2][j];
	}
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  { S=S+a[i][j];
	  }
	}
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  { i=j;
	    s=s+a[i][j];
	  }
	}
	printf("\nSum of first row=%d",s1);
	printf("\nSum of second row=%d",s2);
	printf("\nSum of third row=%d",s3);
	printf("\nSum of elements=%d",S);
	printf("\nSum of diagonal=%d",s);
	getch();

}