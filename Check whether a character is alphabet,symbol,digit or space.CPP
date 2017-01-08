//Check whether a character is alphabet,symbol,digit or space
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{	clrscr();
	char ch;
	printf("Enter a character=");
	scanf("%c",&ch);
	if(isalpha(ch))
	printf("Alphabet");
	else if(isdigit(ch))
	printf("Digit");
	else if(isspace(ch))
	printf("Space");
	else
	printf("Symbol");
	getch();
}