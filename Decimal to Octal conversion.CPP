//Decimal to Octal conversion
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,r[15],i,a=0;
	printf("Enter a Decimal no.:");
	scanf("%ld",&n);
	for(i=1;i<15;i++)
	{ r[i]=n%8;
	  n=n/8;
	  a++;
	  if(n==0)
	  break;
	}
	printf("The octal conversion :\n");
	for(i=a;i>=1;i--)
	printf("%ld",r[i]);
	getch();
}