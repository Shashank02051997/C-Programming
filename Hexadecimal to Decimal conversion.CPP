//Hexadecimal to Decimal conversion
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{	clrscr();
	long int a[10],i=0,j,s1=0,n;
	char s[10];
	printf("Enter the Hexadecimal number : ");
	scanf("%s",s);
	while(s[i]!='\0')
	{ if(s[i]=='F')
	  a[i]=15;
	  else if(s[i]=='E')
	  a[i]=14;
	  else if(s[i]=='D')
	  a[i]=13;
	  else if(s[i]=='C')
	  a[i]=12;
	  else if(s[i]=='B')
	  a[i]=11;
	  else if(s[i]=='A')
	  a[i]=10;
	  else if(s[i]=='9')
	  a[i]=9;
	  else if(s[i]=='8')
	  a[i]=8;
	  else if(s[i]=='7')
	  a[i]=7;
	  else if(s[i]=='6')
	  a[i]=6;
	  else if(s[i]=='5')
	  a[i]=5;
	  else if(s[i]=='4')
	  a[i]=4;
	  else if(s[i]=='3')
	  a[i]=3;
	  else if(s[i]=='2')
	  a[i]=2;
	  else if(s[i]=='1')
	  a[i]=1;
	  else if(s[i]=='0')
	  a[i]=0;
	  else
	  { printf("Wrong input");
	    getch();
	    exit(0);
	  }
	  i++;
	}
	for(j=i-1;j>=0;j--)
	{ n=a[j]*pow(16,i-j-1);
	  s1=s1+n;
	}
	printf("Hexadecimal to Decimal conversion is %ld",s1);
	getch();
}