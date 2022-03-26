//Calculate age from date of birth
#include<stdio.h>
#include<conio.h>
int main()
{	
	int p,q,r,i,j,k,u,v,w,x;
	char a;
	printf("Enter present date: ");
	scanf("%d%c%d%c%d",&p,&a,&q,&a,&r);
	printf("Enter your date of birth: ");
	scanf("%d%c%d%c%d",&i,&a,&j,&a,&k);
	printf("Your present age is: ");
	u=p-i;
	v=q-j;
	w=r-k;
	x=u;
	if(u<0)
	{ u=31+u;
	}
	else
	u=p-i;
	if(v<=0)
	{ if(x<0)
	  { v=11+v;
	    w=w-1;
	  }
	  if(x>0)
	  { w=r-k-1;
	    v=v+12;
	  }
	}
	else
	v=q-j;
	printf("%d Year %d Months %d Days",w,v,u);
	getch();
	return 0;
}
