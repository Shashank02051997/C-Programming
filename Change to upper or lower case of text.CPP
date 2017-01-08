//Change to upper or lower case of text
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s[200];
	int i,x;
	printf("Enter a text: ");
	gets(s);
	printf("Press 1 to change to Lower case and Press 2 to change to upper case: ");
	scanf("%d",&x);
	switch(x)
	{ case 1: i=0;
		  while(s[i]!='\0')
		  { if(s[i]>=65&&s[i]<=90)
		    s[i]=s[i]+32;
		    i++;
		  }
		  printf("%s",s);
		  break;
	  case 2: i=0;
		  while(s[i]!='\0')
		  { if(s[i]>=97&&s[i]<=122)
		    s[i]=s[i]-32;
		    i++;
		  }
		  printf("%s",s);
		  break;
	 default:  printf("Wrong choice");
	}
	getch();
}
