//Highest element in a digit
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,s[10],i=0,h,c=0;
	printf("Enter digit n :");
	scanf("%ld",&n);
	while(n!=0)
	{ s[i]=n%10;
	  n=n/10;
	  c++;
	  i++;
	}
	h=s[0];
	for(i=0;i<c;i++)
	{ if(h<s[i])
	  { h=s[i];
	  }
	}
	printf("Highest element in a digit=%ld",h);
	getch();
}