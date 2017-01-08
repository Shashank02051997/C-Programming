//Solve three equation of X,Y,Z
#include<stdio.h>
#include<conio.h>
void main()
{      clrscr();
       int a[3][3],j,i,d,m1[3][3],m2[3][3],m3[3][3],k;
       printf("General form of equation is aX+bY+cZ=D\n");
       printf("Enter the cofficient of X,Y,Z is given in three equation\n");
       for(i=1;i<=3;i++)
       { for(j=1;j<=3;j++)
	 { scanf("%d",&a[i][j]);
	 }
       }
       m1[1][1]=(a[2][2]*a[3][3]-a[3][2]*a[2][3]);
       m1[1][2]=(a[1][3]*a[3][2]-a[1][2]*a[3][3]);
       m1[1][3]=(a[1][2]*a[2][3]-a[1][3]*a[2][2]);
       m1[2][1]=(a[2][3]*a[3][1]-a[2][1]*a[3][3]);
       m1[2][2]=(a[1][1]*a[3][3]-a[1][3]*a[3][1]);
       m1[2][3]=(a[1][3]*a[2][1]-a[1][1]*a[2][3]);
       m1[3][1]=(a[2][1]*a[3][2]-a[3][1]*a[2][2]);
       m1[3][2]=(a[1][2]*a[3][1]-a[1][1]*a[3][2]);
       m1[3][3]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
       d=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(a[2][1]*a[3][3]-a[3][1]*a[2][3])+a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
       m1[i][j]=m1[j][i];
       printf("Enter the values of D1,D2,D3\n");
       for(i=1;i<=3;i++)
       { for(j=1;j<2;j++)
	 { scanf("%d",&m2[i][j]);
	 }
       }
       for(i=1;i<=3;i++)
       { for(j=1;j<2;j++)
	 { m3[i][j]=0;
	   for(k=1;k<=3;k++)
	   { m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
	   }
	 }
       }
       printf("\nThe value of X,Y,Z is given as\n");
       for(i=1;i<=3;i++)
       { for(j=1;j<2;j++)
	 { printf("%d/%d\t",m3[i][j],d);
	 }
	 printf("\n");
       }
       getch();
}
