//Number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n;
	printf("Enter a number=");
	scanf("%d",&n);
	if(n%2==0)
	{ printf("It is even number=%d",n);
	}
	else
	{ printf("It is odd=%d",n);
	}
	getch();
}