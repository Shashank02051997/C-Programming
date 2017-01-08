//Addition in fraction
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float x1,x2,y1,y2,a;
	printf("Enter the values of x1 : ");
	scanf("%f",&x1);
	printf("Enter the values of y1 : ");
	scanf("%f",&y1);
	printf("Fractional value is %.0f/%.0f",x1,y1);
	printf("\nEnter the values of x2 : ");
	scanf("%f",&x2);
	printf("Enter the values of y2 : ");
	scanf("%f",&y2);
	printf("Fractional value is %.0f/%.0f",x2,y2);
	a=(x1*y2+x2*y1)/(y1*y2);
	printf("\nSum of fractional terms %.2f",a);
	getch();
}