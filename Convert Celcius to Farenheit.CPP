//Convert Celcius to Farenheit
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float c,f;
	printf("Enter value in celcius : ");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("Value in Farenheit=%.2f",f);
	getch();
}