//Convert Meter to Kilometer
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float m,k;
	printf("Enter values in meter : ");
	scanf("%f",&m);
	k=m/1000;
	printf("Values in kilometer=%.3f",k);
	getch();
}