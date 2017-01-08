//Largest b/w 3 fractional terms
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	char c;
	float x1,x2,x3,y1,y2,y3,a,b,d;
	printf("Enter the values of x1/y1 : ");
	scanf("%f%c%f",&x1,&c,&y1);
	a=x1/y1;
	printf("Enter the values of x2/y2 : ");
	scanf("%f%c%f",&x2,&c,&y2);
	b=x2/y2;
	printf("Enter the values of x3/y3 : ");
	scanf("%f%c%f",&x3,&c,&y3);
	d=x3/y3;
	if(a>b&&a>d)
	{ printf("Largest value = %.0f/%.0f",x1,y1);
	}
	if(b>a&&b>d)
	{ printf("Largest value = %.0f/%.0f",x2,y2);
	}
	if(d>a&&d>b)
	{ printf("Largest value = %.0f/%.0f",x3,y3);
	}
	getch();
}