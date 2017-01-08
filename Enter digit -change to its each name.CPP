//Enter digit -change to its each name
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,p,q,r,s=0,l;
	printf("Enter a Digit : ");
	scanf("%ld",&n);
	l=n;
	while(n!=0)
	{ r=n%10;
	  n=n/10;
	  s=s*10+r;
	}
	while(s!=0)
	{ p=s%10;
	  s=s/10;
	  if(p==0)
	  printf(" ZERO ");
	  if(p==1)
	  printf(" ONE ");
	  if(p==2)
	  printf(" TWO ");
	  if(p==3)
	  printf(" THREE ");
	  if(p==4)
	  printf(" FOUR ");
	  if(p==5)
	  printf(" FIVE ");
	  if(p==6)
	  printf(" SIX ");
	  if(p==7)
	  printf(" SEVEN ");
	  if(p==8)
	  printf(" EIGHT ");
	  if(p==9)
	  printf(" NINE ");
	}
	while(l%10==0)
	{ l=l/10;
	  printf(" ZERO ");
	}
	getch();
}