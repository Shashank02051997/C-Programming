//If both length of strings is equal then concatenate them otherwise copy reverse of first string into second string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	clrscr();
	char s1[25],s2[25],s3[25];
	int l1,l2,i;
	printf("Enter first string=");
	gets(s1);
	printf("Enter second string=");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	printf("Conctenate string=%s",strcat(s1,s2));
	else
	{ for(i=l1-1;i>=0;i--)
	  s3[l1-1-i]=s1[i];
	  s3[l1]='\0';
	  printf("Reverse of first string=%s",strcpy(s2,s3));
	}
	getch();
}