//Calculate distance b/w two points
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	float x1,x2,y1,y2,d;
	printf("Enter x1:");
	scanf("%f",&x1);
	printf("Enter x2:");
	scanf("%f",&x2);
	printf("Enter y1:");
	scanf("%f",&y1);
	printf("Enter y2:");
	scanf("%f",&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("Distance b/w two points :\n");
	printf("%.2f",d);
	getch();
}