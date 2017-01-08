//Armstrong no. 50 to 3000
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	int i,r,s,p,c,q,t;
	for(i=50;i<=3000;i++)
	{ s=0;
	  c=0;
	  p=i;
	  q=i;
	  t=i;
	  while(q!=0)
	  { q=q/10;
	    c++;
	  }
	  while(t!=0)
	  { r=t%10;
	    s=s+pow(r,c);
	    t=t/10;
	  }
	  if(s==p)
	  printf("Armstrong no. is %d\n",p);
	}
	getch();
}