//Solve quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	float a,b,c,D,X1,X2;
	printf("The Standard form of equation are : aX^2+bX+c=0");
	printf("\nEnter the value of a,b,c=\n");
	scanf("\t%f\t%f\t%f",&a,&b,&c);
	D=(b*b-4*a*c);
	if(D>0)
	{ X1=(-b+sqrt(D))/2*a;
	  X2=(-b-sqrt(D))/2*a;
	  printf("Unequal roots\n");
	  printf("The value of X1=%.2f",X1);
	  printf("\tThe value of X2=%.2f",X2);
	}
	else if(D==0)
	{ X1=(-b+sqrt(D))/2*a;
	  X2=(-b-sqrt(D))/2*a;
	  printf("Equal roots\n");
	  printf("The value of X1=%.2f",X1);
	  printf("\tThe value of X2=%.2f",X2);
	}
	else
	{ printf("Imaginary roots\n");
	}
	getch();
}


