//Number is positive,negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n;
	printf("Enter a number=");
	scanf("%d",&n);
	if(n>0)
	{ printf("Positive=%d",n);
	}
	else if(n<0)
	{ printf("Negative=%d",n);
	}
	else
	{ printf("Zero");
	}
	getch();
}