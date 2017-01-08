//Convert kilogram to gram
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float w,g;
	printf("Enter weight(in kg) : ");
	scanf("%f",&w);
	g=w*1000;
	printf("Weight in gram=%.1f",g);
	getch();
}