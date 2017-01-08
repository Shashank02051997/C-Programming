//Calculate % of 3 sub. marks
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float m1,m2,m3,p;
	int t;
	printf("Enter marks obtain in Physics : ");
	scanf("%f",&m1);
	printf("Enter marks obtain in Chemistry : ");
	scanf("%f",&m2);
	printf("Enter marks obtain in Mathematics : ");
	scanf("%f",&m3);
	t=m1+m2+m3;
	p=t/3;
	printf("Total marks obtain=%d",t);
	printf("\nPercentage obtain=%.2f%",p);
	getch();
}