//Divisibility of a number and prime or not
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n,i,a=0;
	printf("Enter a number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ if(n%i==0)
	  { a++;
	    printf("\nDivisible by %d",i);
	  }
	}
	if(a==2)
	printf("\nPrime number");
	getch();

}