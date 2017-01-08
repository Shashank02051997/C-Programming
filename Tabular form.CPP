//Tabular form
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n,i;
	printf("Enter a number=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{ printf("\n%d*%d=%d",n,i,n*i);
	}
	getch();


}