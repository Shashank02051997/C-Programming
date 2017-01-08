//Find String length without using strlen()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[25];
	int i=0;
	printf("Enter a string: ");
	gets(s1);
	while(s1[i]!='\0')
	i++;
	printf("String length=%d",i);
	getch();
}
