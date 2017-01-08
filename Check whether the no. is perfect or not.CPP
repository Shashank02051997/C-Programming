//Check whether the no. is perfect or not
#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	int n,i,j,s=0,p;
	printf("Enter a number=");
	scanf("%d",&n);
	p=n;
	for(i=1;i<=n/2;i++)
	{ if(n%i==0)
	  s=s+i;
	}
	if(s==p)
	printf("It is a perfect no.=%d",p);
	else
	printf("It is not a perfect no.");
	getch();
}