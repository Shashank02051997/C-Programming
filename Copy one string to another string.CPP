//Copy one string to another string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[25],s2[25];
	printf("Enter first string=");
	scanf("%s",s1);
	strcpy(s2,s1);
	printf("Second string=%s",s2);
	getch();
}