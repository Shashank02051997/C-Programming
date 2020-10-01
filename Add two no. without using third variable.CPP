//Add two no. without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	a=a+b;// Value of a and b substituted in a 
	printf("Sum=%d",a);
	getch();
}
