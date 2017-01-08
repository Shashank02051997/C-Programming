//Number is single digit,double digit,triple digit...
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n;
	printf("Enter a number=");
	scanf("%d",&n);
	if(n>=0 && n<=9)
	{ printf("Single digit number=%d",n);
	}
	else if(n>=10 && n<=99)
	{ printf("Double digit number=%d",n);
	}
	else if(n>=100 && n<=999)
	{ printf("Triple digit number=%d",n);
	}
	else if(n>=1000 && n<=9999)
	{ printf("Four digit number=%d",n);
	}
	else
	{ printf("Five digit number=%d",n);
	}
	getch();

}