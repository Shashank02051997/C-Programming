//Check whether the no. is strong no. or not
#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	long int f,i,n,r,s=0,p;
	printf("Enter a number:");
	scanf("%ld",&n);
	p=n;
	while(n!=0)
	{ r=n%10;
	  f=1;
	  for(i=1;i<=r;i++)
	  f=f*i;
	  s=s+f;
	  n=n/10;
	}
	if(p==s)
	printf("It is a strong no.=%ld",p);
	else
	printf("It is not a strong no.");
	getch();
}
