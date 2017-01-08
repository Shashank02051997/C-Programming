//Decimal to Binary conversion
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,r[25],i,a=0;
	printf("Enter a Decimal no.:");
	scanf("%ld",&n);
	for(i=1;i<25;i++)
	{ r[i]=n%2;
	  n=n/2;
	  a++;
	  if(n==0)
	  break;
	}
	printf("The binary conversion :\n");
	for(i=a;i>=1;i--)
	printf("%ld",r[i]);
	getch();
}