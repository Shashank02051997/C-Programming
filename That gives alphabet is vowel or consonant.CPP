//That gives alphabet is vowel or consonant
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	char ch;
	printf("Enter an aphabet=");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{ printf("\nVowel");
	}
	else
	{ printf("\nConsonant");
	}
	getch();

}
