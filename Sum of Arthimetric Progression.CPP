//Sum of Arthimetric Progression
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int Sn,a,n,d;
	printf("Enter first term=");
	scanf("%d",&a);
	printf("Enter difference=");
	scanf("%d",&d);
	printf("Enter \'n\' terms=");
	scanf("%d",&n);
	Sn=n/2*(2*a+(n-1)*d);
	printf("Sum of nth term =%d",Sn);
	getch();
}
