//Calculate prime factor
#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	int n,j=2;
	printf("Enter a number=");
	scanf("%d",&n);
	for( ; ; )
	{ if(n%j==0)
	  { printf("%d\n",j);
	    n=n/j;
	  }
	  if(n%j!=0)
	  j++;
	  if(n==1)
	  break;
	}
	getch();
}