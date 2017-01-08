//Print the following series 7,77,777,7777,77777
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	float a=0,i;
	for(i=1;i<6;i++)
	{ a=a*10+7;
	  printf("%.0f,",a);
	}
	getch();
}