//Interchange two variable
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a,b,t;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("Interchange value of a=%d",a);
	printf(" Interchange value of b=%d",b);
	getch();
}