//Convert BCD code to decimal code
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	long int n,a[15],i,c=0,j,k=0,m=0;
	printf("Enter BCD code:");
	scanf("%ld",&n);
	i=0;
	while(n!=0)
	{ a[i]=n%10;
	  n=n/10;
	  i++;
	  c++;
	}
	for(j=0;j<c;j++)
	printf("%ld",a[j]);
	for(j=0;j<c;j++)
	{ m=a[j]*pow(2,k)+m;
	  k++;
	  if(k==4)
	  { printf("\nm=%d",m);
	    k=0;
	    m=0;
	  }
	}
	getch();
}