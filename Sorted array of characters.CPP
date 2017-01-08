//sorted array of characters
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[20];
	int i=0,a[20],j=0,l,k,m,t;
	printf("Enter a string: ");
	scanf("%s",s1);
	l=strlen(s1);
	while(s1[i]!='\0')
	{ a[j]=int(s1[i]);
	  j++;
	  i++;
	}
	for(k=0;k<l;k++)
	{ for(m=0;m<l;m++)
	  { if(a[m]>a[m+1])
	    { t=a[m];
	      a[m]=a[m+1];
	      a[m+1]=t;
	    }
	  }
	}
	printf("Sorted String:");
	for(j=0;j<l;j++)
	printf("%c",a[j]);
	getch();
}
