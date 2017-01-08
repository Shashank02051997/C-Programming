//Octal to Decimal conversion
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	float b[6],m,q=0,o;
	int a[10],i,j,t,n,s=0,u;
	printf("Enter no. of digits before point: ");
	scanf("%d",&t);
	printf("Enter octal number: ");
	for(i=1;i<=t;i++)
	{ scanf("%d",&a[i]);
	}
	printf("Enter no. of digits after point: ");
	scanf("%d",&u);
	printf("Enter octal number: ");
	for(j=1;j<=u;j++)
	{ scanf("%f",&b[j]);
	}
	for(i=1;i<=t;i++)
	{ n=a[i]*pow(8,t-i);
	  s=s+n;
	}
	for(j=1;j<=u;j++)
	{ m=b[j]*pow(8,-j);
	  q=q+m;
	}
	o=s+q;
	printf("Octal to Decimal conversion is %f",o);
	getch();
}