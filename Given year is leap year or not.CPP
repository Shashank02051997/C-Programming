//Given year is leap year or not
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n;
	printf("Enter the year: ");
	scanf("%d",&n);
	if(n%4==0)
	printf("It is a leap year");
	else
	printf("It is not a leap year");
	getch();
}