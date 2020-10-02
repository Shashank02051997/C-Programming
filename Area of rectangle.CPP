//Area of rectangle
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float l,b,a;
	printf("Enter the breath of the rectangle : ");
	scanf("%f",&b);
	printf("Enter the length of the rectangle : ");
	scanf("%f",&l);
	a=b*l;
	printf(" The Area of the rectangle is =%.2f",a);
	getch();
}
