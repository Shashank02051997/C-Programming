//Calaculate nCr
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int n,r,f=1,g=1,h=1,i,j,a=2;
	printf("Enter n :");
	scanf("%ld",&n);
	printf("Enter r :");
	scanf("%ld",&r);
	if(n>=r)
	{ for(i=1;i<=n;i++)
	  f=f*i;
	  for(i=1;i<=(n-r);i++)
	  g=g*i;
	  for(i=1;i<=r;i++)
	  h=h*i;
	  j=g*h;
	  for(i=1;i<30;i++)
	  { if(f%a==0&&j%a==0)
	    { f=f/a;
	      j=j/a;
	    }
	    else
	    a++;
	  }
	  printf("nCr=%ld",f);
	}
	else
	printf("Error");
	getch();
}