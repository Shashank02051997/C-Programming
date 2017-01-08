//Largest and Smallest no.between two number
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float a,b;
	printf("Input a number a=");
	scanf("%f",&a);
	printf("Input a number b=");
	scanf("%f",&b);
	if(a>b)
	{ printf("Larger=%f ",a);
	  printf("Smallest=%f",b);
	}
	if(b>a)
	{ printf("Larger=%f ",b);
	  printf("Smallest=%f",a);
	}
	getch();
}