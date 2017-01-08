//Decimal to Hexadecimal conversion
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,r[10],i,a=0;
	printf("Enter a Decimal no.:");
	scanf("%ld",&n);
	for(i=1;i<10;i++)
	{ r[i]=n%16;
	  n=n/16;
	  a++;
	  if(n==0)
	  break;
	}
	printf("The Hexadecimal conversion :\n");
	for(i=a;i>=1;i--)
	{ if(r[i]==10)
	  printf("A");
	  else if(r[i]==11)
	  printf("B");
	  else if(r[i]==12)
	  printf("C");
	  else if(r[i]==13)
	  printf("D");
	  else if(r[i]==14)
	  printf("E");
	  else if(r[i]==15)
	  printf("F");
	  else
	  printf("%ld",r[i]);
	}
	getch();
}