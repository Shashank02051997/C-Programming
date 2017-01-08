// Calculate Exponential
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	int x,y,p;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%d",&y);
	p=pow(x,y);
	printf("Power=%d",p);
	getch();
}