//Calculate Simple Interest
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float s,p,r,t;
	printf("Enter principle value : ");
	scanf("%f",&p);
	printf("Enter rate : ");
	scanf("%f",&r);
	printf("Enter time : ");
	scanf("%f",&t);
	s=p*r*t/100;
	printf("Simple Interest=%.2f",s);
	getch();
}