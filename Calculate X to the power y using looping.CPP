//Calculate X to the power y using looping
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int x,y,i,j=1;
	printf("Enter a number=");
	scanf("%d",&x);
	printf("Enter a exponential value=");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	j=j*x;
	printf("Power=%d",j);
	getch();
}