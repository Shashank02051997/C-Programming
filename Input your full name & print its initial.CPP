//Input your full name & print its initial
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[25],s2[25];
	int i,sp=0,j,k=0;
	printf("Enter yor full name: ");
	gets(s1);
	i=0;
	while(s1[i]!='\0')
	{if(s1[i]==' ')
	  sp++;
	  i++;
	  if(sp==1)
	  { j=i;
	    break;
	  }
	}
	sp=0;
	i=0;
	while(s1[i]!='\0')
	{ if(s1[i]==' ')
	  sp++;
	  i++;
	  if(sp==2)
	  { s2[k]=s1[i];
	    k++;
	  }
	}
	k=i;
	s2[k]='\0';
	printf("Your name=%c.%c %s",s1[0],s1[j],s2);
	getch();
}
