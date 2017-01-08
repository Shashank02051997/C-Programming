//Sum of all odd no. from m to n
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n,s=0,i,m;
	printf("Enter a number m:");
	scanf("%d",&m);
	printf("Enter a number n:");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{ if(i%2!=0)
	  s=s+i;
	}
	printf("Sum=%d",s);
	getch();
}