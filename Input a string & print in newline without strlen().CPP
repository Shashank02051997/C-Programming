//Input a string & print in newline without strlen()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[25];
	int l,i;
	printf("Enter the string=");
	scanf("%s",s1);
	printf("Strings in newline");
	i=0;
	while(s1[i]!='\0')
	{ printf("\n%c",s1[i]);
	  i++;
	}
	getch();
}