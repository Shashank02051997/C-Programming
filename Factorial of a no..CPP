//Factorial of a no.
#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	int f=1,i,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("Factorial=%d",f);
	getch();
}