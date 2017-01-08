//Area of triangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float h,b,a;
	printf("Enter base : ");
	scanf("%f",&b);
	printf("Enter height : ");
	scanf("%f",&h);
	a=0.5*b*h;
	printf("Area of triangle=%.2f",a);
	getch();
}