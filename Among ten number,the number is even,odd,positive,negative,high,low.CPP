//Among ten number,the number is even,odd,positive,negative,high,low
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],i,s=0,even=0,odd=0,positive=0,negative=0,high,low;
	for(i=0;i<10;i++)
	{ printf("Enter an element=");
	  scanf("%d",&a[i]);
	  s=s+a[i];
	  if(a[i]%2==0)
	  even++;
	  else
	  odd++;
	  if(a[i]>0)
	  positive++ ;
	  else
	  negative++;
	}
	high=low=a[0];
	for(i=0;i<10;i++)
	{ if(a[i]>high)
	  high=a[i];
	  if(a[i]<low)
	  low=a[i];
	}
	printf("\nSum=%d",s);
	printf("\nTotal even number=%d",even);
	printf("\nTotal odd number=%d",odd);
	printf("\nTotal positive number=%d",positive);
	printf("\nTotal negative number=%d",negative);
	printf("\nHighest element=%d",high);
	printf("\nLowest element=%d",low);
	getch();
}