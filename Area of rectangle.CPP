//Area of rectangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float l,b,a;
	printf("Enter breath : ");
	scanf("%f",&b);
	printf("Enter length : ");
	scanf("%f",&l);
	a=b*l;
	printf("Area of rectangle=%.2f",a);
	getch();
}