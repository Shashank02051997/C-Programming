//Largest and Smallest b/w two fractional terms
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	char c;
	float x1,x2,y1,y2,a,b;
	printf("Enter the values of x1/y1 : ");
	scanf("%f%c%f",&x1,&c,&y1);
	a=x1/y1;
	printf("Enter the values of x2/y2 : ");
	scanf("%f%c%f",&x2,&c,&y2);
	b=x2/y2;
	if(a>b)
	{ printf("Largest value = %.0f/%.0f",x1,y1);
	  printf("\nSmallest value = %.0f/%.0f",x2,y2);
	}
	if(a<b)
	{ printf("Largest value = %.0f/%.0f",x2,y2);
	  printf("\nSmallest value = %.0f/%.0f",x1,y1);
	}
	if(a==b)
	printf("Both the value is equal = %f",a);
	getch();
}