//Input a line of text & count total alphabets,digits,symbol & spaces
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{	clrscr();
	char s1[200];
	int l,i,a=0,d=0,sp=0,sy=0;
	printf("Enter the text=");
	gets(s1);
	i=0;
	while(s1[i]!='\0')
	{ if(isalpha(s1[i]))
	  a++;
	  else if(isdigit(s1[i]))
	  d++;
	  else if(isspace(s1[i]))
	  sp++;
	  else
	  sy++;
	  i++;
	}
	printf("No. of Alphabet=%d\n",a);
	printf("No. of Digit=%d\n",d);
	printf("No. of Symbol=%d\n",sy);
	printf("No. of Spaces=%d",sp);
	getch();
}