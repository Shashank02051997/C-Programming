//Octal to Decimal conversion
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	long int a[10],i=0,j,c=0,n,s=0;
	printf("Enter the Octal number : ");
	scanf("%ld",&n);
	while(n!=0)
	{ a[i]=n%10;
	  n=n/10;
	  c++;
	  i++;
	}
	for(i=0;i<c;i++)
	{ n=a[i]*pow(8,i);
	  s=s+n;
	}
	printf("Octal to Decimal conversion is %ld",s);
	getch();
}