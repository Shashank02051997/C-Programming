//Pythogorous triplet from 1-30
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int i,j,k;
	for(i=1;i<=30;i++)
	{ for(j=1;j<=30;j++)
	  { for(k=1;k<=30;k++)
	    { if(i*i+j*j==k*k)
	      printf("%d %d %d \n",i,j,k);
	      else
	      printf("");
	    }
	  }
	}
	getch();
}