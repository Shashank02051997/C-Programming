//Fabocani series
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,a[10];
	a[0]=0;
	a[1]=1;
	for(i=0;i<=10;i++)
	{ a[i+2]=a[i]+a[i+1];
	}
	for(i=1;i<=10;i++)
	printf("%d\n",a[i]);
	getch();
}