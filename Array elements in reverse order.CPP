//Array elements in reverse order
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[5],i;
	for(i=0;i<5;i++)
	{ printf("Enter an element=");
	  scanf("%d",&a[i]);
	}
	printf("\nArray element are:");
	for(i=0;i<5;i++)
	{ printf("\n%d",a[i]);
	}
	printf("\nAnother array elements in reverse oder:");
	for(i=4;i>=0;i--)
	{ printf("\n%d",a[i]);
	}
	getch();
}