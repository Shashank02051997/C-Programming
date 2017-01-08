//Interchange two variable without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Interchange value of a=%d",a);
	printf(" Interchange value of b=%d",b);
	getch();
}