//Delete a double spaces from a text
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	char s1[20];
	int i,j=0;
	printf("Enter a text:");
	gets(s1);
	i=0;
	while(s1[i]!='\0')
	{ if(s1[i]==' ')
	  { if(s1[i+1]==' ')
	    { j=i;
	      while(s1[j]!='\0')
	      { s1[j]=s1[j+1];
		j++;
	      }
	    }
	  }
	  i++;
	}
	printf("Deleted double spaces:\n");
	printf("%s",s1);
	getch();
}