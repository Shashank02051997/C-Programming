//Input a line of text & count total words,characters & spaces
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[200];
	int l,i,s=0;
	printf("Enter the text=");
	gets(s1);
	i=0;
	while(s1[i]!='\0')
	{ if(s1[i]==' ')
	  s++;
	  i++;
	}
	printf("No. of Characters=%d\n",i);
	printf("No. of Words=%d\n",s+1);
	printf("No. of Spaces=%d",s);
	getch();
}