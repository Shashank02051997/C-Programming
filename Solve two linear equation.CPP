//Solve two linear equation
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float X,Y,a1,b1,c1,a2,b2,c2;
	printf("The Standard form of equation are : aX+bY+c=0");
	printf("\nEnter the value of a1,b1,c1=\n");
	scanf("\t%f\t%f\t%f",&a1,&b1,&c1);
	printf("Enter the value of a2,b2,c2=\n");
	scanf("\t%f\t%f\t%f",&a2,&b2,&c2);
	if(a1/a2!=b1/b2)
	{ X=((b1*c2-b2*c1)/(a1*b2-a2*b1));
	  Y=((c1*a2-c2*a1)/(a1*b2-a2*b1));
	  printf("Unique solution and Intersect at a point\n");
	  printf("The value of X=%.2f",X);
	  printf("\tThe value of Y=%.2f",Y);
	}
	if(a1/a2==b1/b2 && b1/b2==c1/c2)
	{ printf("Infinite number of solution and Coincident");
	}
	if(a1/a2==b1/b2 && b1/b2!=c1/c2)
	{ printf("No solution and Parallel");
	}
	getch();
}
