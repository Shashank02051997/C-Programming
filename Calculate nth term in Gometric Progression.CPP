//Calculate nth term in Gometric Progression
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	int a1,a2,r1,r2,n,p1,p2;
	char c1,c2;
	printf("Enter a:");
	scanf("%d%c%d",&a1,&c1,&a2);
	printf("Enter r:");
	scanf("%d%c%d",&r1,&c2,&r2);
	printf("Enter n:");
	scanf("%d",&n);
	p1=pow(r1,n-1);
	p2=pow(r2,n-1);
	printf("nth term of G.P=%d/%d",a1*p1,a2*p2);
	getch();
}