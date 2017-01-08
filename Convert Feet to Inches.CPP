//Convert Feet to Inches
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float f,i;
	printf("Enter values in feet : ");
	scanf("%f",&f);
	i=f*12;
	printf("Values in inches=%.1f",i);
	getch();
}