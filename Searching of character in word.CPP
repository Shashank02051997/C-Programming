//Searching of character in word
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s[20],c;
	int i=0,j=0;
	printf("Enter a word: ");
	scanf("%s%c",s,&c);
	printf("Enter character for search: ");
	scanf("%c",&c);
	i=0;
	while(s[i]!='\0')
	{ if(s[i]==c)
	  { printf("First occurence of %c is at %d",c,i+1);
	    j=1;
	    break;
	  }
	  i++;
	}
	if(j==0)
	printf("Character not found");
	getch();
}
