//Magic no. or not
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n,s,r=0,i,p,q,a,b=0;
	printf("Enter number:");
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{ s=n%10;
	  r=r+s;
	  n=n/10;
	}
	q=r;
	while(q!=0)
	{ a=q%10;
	  b=b*10+a;
	  q=q/10;
	}
	if(r*b==p)
	printf("It is a magic number");
	else
	printf("It is not a magic number");
	getch();
}