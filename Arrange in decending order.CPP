//Arrange in decending order
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],i,j,k;
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(k=0;k<10;k++)
	{ for(i=0;i<9;i++)
	  { if(a[i]<a[i+1])
	    { j=a[i];
	      a[i]=a[i+1];
	      a[i+1]=j;
	    }
	  }
	}
	printf("The sorted elements are\n");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	getch();
}