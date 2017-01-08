//Decimal to Fractional binary conversion
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float m;
	int n,r[25],i,a=0,f[6],j,b=0;
	printf("Enter a Decimal no. before point:");
	scanf("%d",&n);
	printf("Enter a Decimal no. after point:");
	scanf("%f",&m);
	for(i=1;i<25;i++)
	{ r[i]=n%2;
	  n=n/2;
	  a++;
	  if(n==0)
	  break;
	}
	for(j=1;j<6;j++)
	{ f[j]=m*2;
	  m=m*2;
	  if(m>1)
	  m=m-1;
	  b++;
	  if(m==1)
	  break;
	}
	printf("The Fractional binary conversion :\n");
	for(i=a;i>=1;i--)
	printf("%d",r[i]);
	printf(".");
	for(j=1;j<=b;j++)
	printf("%d",f[j]);
	getch();
}