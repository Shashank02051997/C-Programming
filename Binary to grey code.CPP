//Binary to grey code
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	long int a[10],n,i=0,b[10],c=-1,j,k;
	printf("Enter binary code: ");
	scanf("%ld",&n);
	while(n!=0)
	{ a[i]=n%10;
	  n=n/10;
	  i++;
	  c++;
	}
	b[c]=a[c];
	for(j=c-1;j>=0;j--)
	{ if(a[j]==1&&a[j+1]==1)
	  b[j]=0;
	  else
	  b[j]=a[j]+a[j+1];
	}
	printf("The grey code is: \n");
	for(k=c;k>=0;k--)
	printf("%ld",b[k]);
	getch();
}
