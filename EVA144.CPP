//Convert decimal into BCD code
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n,i,r[5],j,c=0;
	printf("Enter decimal code : ");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{ r[i]=n%10;
	  n=n/10;
	  i++;
	  c++;
	}
	for(j=c-1;j>=0;j--)
	{ if(r[j]==9)
	  printf("1001");
	  else if(r[j]==8)
	  printf("1000");
	  else if(r[j]==7)
	  printf("0111");
	  else if(r[j]==6)
	  printf("0110");
	  else if(r[j]==5)
	  printf("0101");
	  else if(r[j]==4)
	  printf("0100");
	  else if(r[j]==3)
	  printf("0011");
	  else if(r[j]==2)
	  printf("0010");
	  else if(r[j]==1)
	  printf("0001");
	  else
	  printf("000");
	}
	getch();
}