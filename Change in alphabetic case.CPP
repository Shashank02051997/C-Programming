//Change in alphabetic case
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	char ch;
	printf("Enter an aphabet=");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{ ch=ch+32;
	  printf("\nLower case=%c",ch);
	}
	else
	{ ch=ch-32;
	  printf("\nUpper case=%c",ch);
	}
	getch();

}