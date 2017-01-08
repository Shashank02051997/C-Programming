//Input a string & print in reverse order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[25],s2[25];
	int l,i;
	printf("Enter the string=");
	scanf("%s",s1);
	l=strlen(s1);
	for(i=l-1;i>=0;i--)
	s2[l-1-i]=s1[i];
	s2[l]='\0';
	printf("Reverse of string=%s",s2);
	getch();
}