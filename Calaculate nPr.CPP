//Calaculate nPr
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,r,f=1,g=1,i,a=2;
	printf("Enter n :");
	scanf("%ld",&n);
	printf("Enter r :");
	scanf("%ld",&r);
	if(n>=r)
	{ for(i=1;i<=n;i++)
	  f=f*i;
	  for(i=1;i<=(n-r);i++)
	  g=g*i;
	  for(i=1;i<30;i++)
	  { if(f%a==0&&g%a==0)
	    { f=f/a;
	      g=g/a;
	    }
	    else
	    a++;
	  }
	  printf("nPr=%ld",f);
	}
	else
	printf("Error");
	getch();
}