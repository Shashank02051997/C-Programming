//LCM
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int n1,n2,x,y;
	printf("\nEnter two number:");
	scanf("%d%d",&n1,&n2);
	x=n1,y=n2;
	while(n1!=n2)
	{ if(n1>n2)
	  n1=n1-n2;
	  else
	  n2=n2-n1;
	}
	printf("L.C.M=%d",x*y/n1);
	getch();
}