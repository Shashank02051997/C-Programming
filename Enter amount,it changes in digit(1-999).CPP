//Enter amount,it changes in digit(1-999)
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{	clrscr();
	char s[30],a[30];
	int i,j,p=0,q=0,r=0,l,t=-1,u=0,z;
	printf("Enter amount in words: ");
	gets(s);
	l=strlen(s);
	i=0;
	j=0;
	while(s[i]!='\0')
	{ if(s[i]!=' ')
	  a[j]=s[i];
	  if(s[i]==' ')
	  a[j]='\0';
	  if(s[i]==' '||i==l-1)
	  { a[j+1]='\0';
	    if(strcmp(a,"ONE")==0)
	    { if(t==-1)
	      p=1;
	      t++;
	      if(t==1)
	      u=1;
	    }
	    else if(strcmp(a,"TWO")==0)
	    { if(t==-1)
	      p=2;
	      t++;
	      if(t==1)
	      u=2;
	    }
	    else if(strcmp(a,"THREE")==0)
	    { if(t==-1)
	      p=3;
	      t++;
	      if(t==1)
	      u=3;
	    }
	    else if(strcmp(a,"FOUR")==0)
	    { p=4;
	      t++;
	      if(t==1)
	      u=4;
	    }
	    else if(strcmp(a,"FIVE")==0)
	    { p=5;
	      t++;
	      if(t==1)
	      u=5;
	    }
	    else if(strcmp(a,"SIX")==0)
	    { p=6;
	      t++;
	      if(t==1)
	      u=6;
	    }
	    else if(strcmp(a,"SEVEN")==0)
	    { p=7;
	      t++;
	      if(t==1)
	      u=7;
	    }
	    else if(strcmp(a,"EIGHT")==0)
	    { p=8;
	      t++;
	      if(t==1)
	      u=8;
	    }
	    else if(strcmp(a,"NINE")==0)
	    { p=9;
	      t++;
	      if(t==1)
	      u=9;
	    }
	    else if(strcmp(a,"TEN")==0)
	    q=10;
	    else if(strcmp(a,"ELEVEN")==0)
	    q=11;
	    else if(strcmp(a,"TWELVE")==0)
	    q=12;
	    else if(strcmp(a,"THRTEEN")==0)
	    q=13;
	    else if(strcmp(a,"FOURTEEN")==0)
	    q=14;
	    else if(strcmp(a,"FIVTEEN")==0)
	    q=15;
	    else if(strcmp(a,"SIXTEEN")==0)
	    q=16;
	    else if(strcmp(a,"SEVENTEEEN")==0)
	    q=17;
	    else if(strcmp(a,"EIGHTEEN")==0)
	    q=18;
	    else if(strcmp(a,"NINTEEN")==0)
	    q=19;
	    else if(strcmp(a,"TWENTY")==0)
	    q=20;
	    else if(strcmp(a,"THIRTY")==0)
	    q=30;
	    else if(strcmp(a,"FOURTY")==0)
	    q=40;
	    else if(strcmp(a,"FIVETY")==0)
	    q=50;
	    else if(strcmp(a,"SIXTY")==0)
	    q=60;
	    else if(strcmp(a,"SEVENTY")==0)
	    q=70;
	    else if(strcmp(a,"EIGHTY")==0)
	    q=80;
	    else if(strcmp(a,"NINTY")==0)
	    q=90;
	    else if(strcmp(a,"HUNDRED")==0)
	    r=100;
	    else
	    { printf("WRONG INPUT\n");
	      getch();
	      exit(0);
	    }
	    a[0]='\0';
	    j=-1;
	  }
	  i++;
	  j++;
	}
	printf("Amount in Digit is:\n");
	if(r==0&&u==0)
	z=p+q;
	else
	z=p*r+q+u;
	printf("%d",z);
	getch();
}











