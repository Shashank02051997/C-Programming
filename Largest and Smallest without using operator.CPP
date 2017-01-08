//Largest and Smallest without using operator
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float x,y,z;
	printf("enter no. x:");
	scanf("%f",&x);
	printf("enter no. y:");
	scanf("%f",&y);
	printf("enter no. z:");
	scanf("%f",&z);
	if(x>y)
	{ if(x>z)
	  printf("Largest is %f ",x);
	}
	if(y>x)
	{ if(y>z)
	  printf("Largest is %f ",y);
	}
	if(z>x)
	{ if(z>y)
	  printf("Largest is %f ",z);
	}
	if(x<y)
	{ if(x<z)
	  printf("Smallest is %f ",x);
	}
	if(y<x)
	{ if(y<z)
	  printf("Smallest is %f ",y);
	}
	if(z<x)
	{ if(z<y)
	  printf("Smallest is %f ",z);
	}
	getch();
}
