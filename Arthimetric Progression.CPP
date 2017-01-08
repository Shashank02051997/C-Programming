//Arthimetric Progression
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int Tn,a,n,d;
	printf("Enter first term=");
	scanf("%d",&a);
	printf("Enter difference=");
	scanf("%d",&d);
	printf("Enter \'n\' terms=");
	scanf("%d",&n);
	Tn=a+((n-1)*d);
	printf("nth term =%d",Tn);
	getch();
}