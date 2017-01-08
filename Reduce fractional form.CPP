//Reduce fractional form
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int x,y,i,a=2;
	char c;
	printf("Enter the Fractional term:");
	scanf("%d%c%d",&x,&c,&y);
	if(x==0)
	printf("Reduce fractional form: %d",x);
	else if(y==0)
	printf("Infinite value");
	else
	{ for(i=1;i<30;i++)
	  { if(x%a==0&&y%a==0)
	   { x=x/a;
	     y=y/a;
	   }
	   else
	   a++;
	  }
	  printf("Reduce fractional form: %d/%d",x,y);
	}
	getch();
}